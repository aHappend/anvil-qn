module anvil_qn1_tensor_array (
  input wire clk, rst_n, flush, in_valid, in_w4,
  output wire in_ready,
  input wire [1023:0] q, z,
  input wire [4095:0] scale_bf16, activation_bf16, weight_bf16,
  input wire [255:0] lane_mask,
  input wire [31:0] in_tag,
  output wire out_valid,
  output wire [31:0] out_sum, out_tag,
  output wire out_error,
  input wire out_ready
);
  

  localparam [31:0] EPSILON32 = 32'h358637bd;

  function automatic fp32_invalid(input logic [31:0] value);
    fp32_invalid = value[30:23] == 8'hff;
  endfunction

  function automatic bf16_invalid(input logic [15:0] value);
    bf16_invalid = value[14:7] == 8'hff;
  endfunction

  function automatic bf16_scale_invalid(input logic [15:0] value);
    bf16_scale_invalid = bf16_invalid(value) ||
      (value[15] && value[14:0] != 0);
  endfunction

  function automatic [5:0] leading_zero32(input logic [31:0] value);
    reg [31:0] part;
    reg [5:0] count;
    begin
      part = value;
      count = 0;
      if (part[31:16] == 0) begin count = count + 16; part = part << 16; end
      if (part[31:24] == 0) begin count = count + 8; part = part << 8; end
      if (part[31:28] == 0) begin count = count + 4; part = part << 4; end
      if (part[31:30] == 0) begin count = count + 2; part = part << 2; end
      if (!part[31]) count = count + 1;
      leading_zero32 = value == 0 ? 6'd32 : count;
    end
  endfunction

  function automatic [26:0] shift_jam27(
    input logic [26:0] value, input logic [11:0] distance
  );
    reg [26:0] shifted, discarded;
    begin
      if (distance == 0) shift_jam27 = value;
      else if (distance >= 27) shift_jam27 = {26'd0, |value};
      else begin
        shifted = value >> distance;
        discarded = value << (12'd27-distance);
        shift_jam27 = {shifted[26:1], shifted[0] | (|discarded)};
      end
    end
  endfunction

  // significand[26] is the leading one, [2:0] are guard/round/sticky.
  function automatic [32:0] round_pack32(
    input logic negative,
    input logic signed [11:0] exponent,
    input logic [26:0] significand
  );
    reg [26:0] shifted;
    reg [24:0] rounded;
    reg signed [11:0] adjusted;
    reg [7:0] biased;
    begin
      adjusted = exponent;
      shifted = significand;
      if (exponent < -12'sd126) begin
        shifted = shift_jam27(significand, $unsigned(-12'sd126-exponent));
        adjusted = -12'sd126;
      end
      rounded = {1'b0, shifted[26:3]} +
        {24'd0, (shifted[2] && (shifted[1] || shifted[0] || shifted[3]))};
      if (rounded[24]) begin
        rounded = rounded >> 1;
        adjusted = adjusted + 1'b1;
      end
      biased = 0;
      if (rounded[23]) biased = 8'(adjusted + 12'sd127);
      if (significand == 0 || rounded == 0)
        round_pack32 = {1'b0, negative, 31'd0};
      else if (adjusted > 12'sd127)
        round_pack32 = {1'b1, 32'd0};
      else round_pack32 = {1'b0, negative, biased, rounded[22:0]};
    end
  endfunction

  function automatic [16:0] round_bf16(input logic [31:0] value);
    reg [16:0] rounded;
    begin
      rounded = {1'b0, value[31:16]} +
        {16'd0, (value[15] && ((|value[14:0]) || value[16]))};
      if (fp32_invalid(value) || rounded[14:7] == 8'hff)
        round_bf16 = {1'b1, 16'd0};
      else round_bf16 = {1'b0, rounded[15:0]};
    end
  endfunction

  function automatic [31:0] delta32(
    input logic [3:0] quantized, input logic [3:0] zero_point
  );
    reg signed [5:0] delta;
    reg [4:0] magnitude;
    reg [30:0] encoded;
    begin
      delta = $signed({2'd0, quantized}) - $signed({2'd0, zero_point});
      magnitude = delta[5] ? 5'(-delta) : delta[4:0];
      case (magnitude)
        0: encoded = 31'h00000000;
        1: encoded = 31'h3f800000;
        2: encoded = 31'h40000000;
        3: encoded = 31'h40400000;
        4: encoded = 31'h40800000;
        5: encoded = 31'h40a00000;
        6: encoded = 31'h40c00000;
        7: encoded = 31'h40e00000;
        8: encoded = 31'h41000000;
        9: encoded = 31'h41100000;
        10: encoded = 31'h41200000;
        11: encoded = 31'h41300000;
        12: encoded = 31'h41400000;
        13: encoded = 31'h41500000;
        14: encoded = 31'h41600000;
        default: encoded = 31'h41700000;
      endcase
      delta32 = {delta[5], encoded};
    end
  endfunction

  function automatic [4:0] awq_lane_shift(input logic [2:0] lane);
    begin
      case (lane)
        0: awq_lane_shift = 0;
        1: awq_lane_shift = 16;
        2: awq_lane_shift = 4;
        3: awq_lane_shift = 20;
        4: awq_lane_shift = 8;
        5: awq_lane_shift = 24;
        6: awq_lane_shift = 12;
        default: awq_lane_shift = 28;
      endcase
    end
  endfunction

  function automatic configuration_valid(
    input integer profile, compact, layers, hidden, intermediate,
    q_heads, kv_heads, head_dim, vocabulary, sequence_length,
    group_size, banks, queue_depth
  );
    reg dimensions_valid, production_valid;
    reg [127:0] h, i, q, k, d, l, v, s, g, extent;
    begin
      h=128'(hidden); i=128'(intermediate); q=128'(q_heads);
      k=128'(kv_heads); d=128'(head_dim); l=128'(layers);
      v=128'(vocabulary); s=128'(sequence_length); g=128'(group_size);
      extent=h>i ? h : i;
      if (q*d>extent) extent=q*d;
      dimensions_valid=(profile==1 || profile==2 || profile==3) &&
        (compact==0 || compact==1) && layers>=1 && layers<=36 &&
        hidden>=8 && hidden<=2560 && intermediate>=8 && intermediate<=9728 &&
        (hidden & 7)==0 && (intermediate & 7)==0 &&
        (head_dim==8 || head_dim==16 || head_dim==32 ||
         head_dim==64 || head_dim==128) &&
        kv_heads>=1 && kv_heads<=8 && q_heads<=32 &&
        (q_heads==2*kv_heads || q_heads==4*kv_heads) &&
        vocabulary>=1 && vocabulary<=151936 &&
        sequence_length>=1 && sequence_length<=40960 &&
        group_size>=8 && group_size<=128 && (g & (g-1'b1))==0 &&
        (h & (g-1'b1))==0 && (i & (g-1'b1))==0 &&
        ((q*d) & (g-1'b1))==0 &&
        (banks==1 || banks==2 || banks==4 || banks==8) &&
        queue_depth>=1 && queue_depth<=16 &&
        15*extent<=128'hffffffff && q*d<=128'hffffffff &&
        k*d<=128'hffffffff &&
        4*v*h<=128'hffffffffffffffff &&
        4*l*h*i<=128'hffffffffffffffff &&
        4*l*h*q*d<=128'hffffffffffffffff &&
        4*l*s*k*d<=128'hffffffffffffffff;
      production_valid=layers==(profile==3 ? 36 : 28) &&
        hidden==(profile==1 ? 1024 : profile==2 ? 2048 : 2560) &&
        intermediate==(profile==1 ? 3072 : profile==2 ? 6144 : 9728) &&
        q_heads==(profile==3 ? 32 : 16) && kv_heads==8 && head_dim==128 &&
        vocabulary==151936 && sequence_length==40960 && group_size==128;
      configuration_valid=dimensions_valid && (compact==1 || production_valid);
    end
  endfunction

  function automatic [63:0] event_add64(input logic [63:0] value, input logic [2:0] delta);
    reg [16:0] low;
    reg carry1, carry2, carry3;
    begin
      low={1'b0,value[15:0]}+{14'd0,delta};
      carry1=low[16];
      carry2=carry1 && (&value[31:16]);
      carry3=carry1 && (&value[47:16]);
      event_add64={value[63:48]+{15'd0,carry3},
        value[47:32]+{15'd0,carry2},value[31:16]+{15'd0,carry1},low[15:0]};
    end
  endfunction

  function automatic fp32_greater(input logic [31:0] a, b);
    begin
      if (a[30:0]==0 && b[30:0]==0) fp32_greater=0;
      else if (a[31]!=b[31]) fp32_greater=!a[31];
      else if (a[31]) fp32_greater=a[30:0]<b[30:0];
      else fp32_greater=a[30:0]>b[30:0];
    end
  endfunction

  function automatic [31:0] unsigned32_to_fp32(input logic [31:0] value);
    reg [5:0] shift;
    reg [31:0] normalized;
    reg [32:0] packed_value;
    begin
      shift=leading_zero32(value);
      normalized=value << shift;
      packed_value=round_pack32(1'b0,12'sd31-$signed({6'd0,shift}),
        {normalized[31:6],(|normalized[5:0])});
      unsigned32_to_fp32=value==0 ? 32'd0 : packed_value[31:0];
    end
  endfunction

  function automatic [32:0] scale32(
    input logic [31:0] value, input logic signed [11:0] power
  );
    reg [23:0] raw, normalized;
    reg [5:0] shift;
    reg signed [11:0] exponent;
    begin
      raw={value[30:23]!=0,value[22:0]};
      shift=raw==0 ? 6'd0 : leading_zero32({8'd0,raw})-6'd8;
      normalized=raw << shift;
      exponent=(value[30:23]==0 ? -12'sd126 :
        $signed({4'd0,value[30:23]})-12'sd127)-$signed({6'd0,shift})+power;
      scale32=fp32_invalid(value) ? {1'b1,32'd0} :
        round_pack32(value[31],exponent,{normalized,3'd0});
    end
  endfunction

  reg [48:0] valid;
  reg [31:0] tags [0:48];
  wire ce = !valid[48] || out_ready;
  reg [31:0] captured_a [0:255], captured_b [0:255];
  reg [31:0] activation [0:255][0:3];
  reg [255:0] input_failed;
  wire [31:0] weights [0:255], products [0:255];
  wire [255:0] weight_failed, product_failed;
  wire [31:0] tree [1:511];
  wire [511:1] tree_failed;
  assign in_ready = rst_n && !flush && ce;
  assign out_valid = rst_n && !flush && valid[48];
  assign out_sum = rst_n && !flush && valid[48] ? tree[1] : 32'd0;
  assign out_tag = rst_n && !flush && valid[48] ? tags[48] : 32'd0;
  assign out_error = out_valid && tree_failed[1];
  integer stage;
  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      valid <= 0;
      for (stage=0; stage<=48; stage=stage+1) tags[stage] <= 0;
    end else if (flush) begin
      valid <= 0;
      for (stage=0; stage<=48; stage=stage+1) tags[stage] <= 0;
    end else if (ce) begin
      valid <= {valid[47:0],in_valid};
      tags[0] <= in_valid ? in_tag : 32'd0;
      for (stage=1; stage<=48; stage=stage+1) tags[stage] <= tags[stage-1];
    end
  end
  genvar lane, level, node;
  generate
    for (lane=0; lane<256; lane=lane+1) begin: lanes
      wire [31:0] quantized_delta = delta32(q[lane*4+:4],z[lane*4+:4]);
      wire invalid_activation = bf16_invalid(activation_bf16[lane*16+:16]);
      wire invalid_weight = in_w4 ? bf16_scale_invalid(scale_bf16[lane*16+:16]) :
        bf16_invalid(weight_bf16[lane*16+:16]);
      integer delay_index;
      always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
          captured_a[lane] <= 0; captured_b[lane] <= 0; input_failed[lane] <= 0;
          for (delay_index=0; delay_index<4; delay_index=delay_index+1)
            activation[lane][delay_index] <= 0;
        end else if (flush) begin
          captured_a[lane] <= 0; captured_b[lane] <= 0; input_failed[lane] <= 0;
          for (delay_index=0; delay_index<4; delay_index=delay_index+1)
            activation[lane][delay_index] <= 0;
        end else if (ce) begin
          captured_a[lane] <= !in_valid || !lane_mask[lane] ? 32'd0 :
            in_w4 ? quantized_delta : 32'h3f800000;
          captured_b[lane] <= !in_valid || !lane_mask[lane] ? 32'd0 :
            in_w4 ? {scale_bf16[lane*16+:16],16'd0} :
                    {weight_bf16[lane*16+:16],16'd0};
          activation[lane][0] <= in_valid && lane_mask[lane] ?
            {activation_bf16[lane*16+:16],16'd0} : 32'd0;
          input_failed[lane] <= in_valid && lane_mask[lane] &&
            (invalid_activation || invalid_weight);
          for (delay_index=1; delay_index<4; delay_index=delay_index+1)
            activation[lane][delay_index] <= activation[lane][delay_index-1];
        end
      end
      // The four-stage weight path requires four activation delay intervals.
      reg [31:0] delayed_activation;
      always @(posedge clk or negedge rst_n) begin
        if (!rst_n) delayed_activation <= 0;
        else if (flush) delayed_activation <= 0;
        else if (ce) delayed_activation <= activation[lane][3];
      end
      anvil_qn1_fp32_mul weight_formation (
        .clk(clk),.rst_n(rst_n),.flush(flush),.ce(ce),
        .a(captured_a[lane]),.b(captured_b[lane]),.in_error(input_failed[lane]),
        .result(weights[lane]),.out_error(weight_failed[lane])
      );
      anvil_qn1_fp32_mul activation_multiply (
        .clk(clk),.rst_n(rst_n),.flush(flush),.ce(ce),
        .a(weights[lane]),.b(delayed_activation),.in_error(weight_failed[lane]),
        .result(products[lane]),.out_error(product_failed[lane])
      );
      assign tree[256+lane] = products[lane];
      assign tree_failed[256+lane] = product_failed[lane];
    end
    for (level=0; level<8; level=level+1) begin: reduction_levels
      for (node=0; node<(128>>level); node=node+1) begin: adjacent_pairs
        localparam INDEX = (128>>level)+node;
        anvil_qn1_fp32_add add (
          .clk(clk),.rst_n(rst_n),.flush(flush),.ce(ce),
          .a(tree[2*INDEX]),.b(tree[2*INDEX+1]),
          .in_error(tree_failed[2*INDEX] || tree_failed[2*INDEX+1]),
          .result(tree[INDEX]),.out_error(tree_failed[INDEX])
        );
      end
    end
  endgenerate
endmodule
