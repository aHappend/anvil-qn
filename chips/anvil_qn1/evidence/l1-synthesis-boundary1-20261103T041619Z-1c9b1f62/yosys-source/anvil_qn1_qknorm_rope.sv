module anvil_qn1_qknorm_rope #(
  parameter HEAD_DIM=128, NUM_Q_HEADS=32, NUM_KV_HEADS=8,
  parameter NUM_LAYERS=36, MAX_SEQ_LEN=40960,
  localparam SD=(HEAD_DIM==8 || HEAD_DIM==16 || HEAD_DIM==32 ||
    HEAD_DIM==64 || HEAD_DIM==128) ? HEAD_DIM : 1,
  localparam SH=SD>1 ? SD/2 : 1
) (
  input wire clk, rst_n, flush, in_valid,
  output wire in_ready,
  input wire in_is_key,
  input wire [5:0] in_head,
  input wire [31:0] in_layer, in_pos,
  input wire [SD*16-1:0] in_data, in_gamma,
  input wire [SH*16-1:0] in_cos, in_sin,
  output wire out_valid, out_error, out_is_key,
  output wire [5:0] out_head,
  output wire [31:0] out_layer, out_pos,
  output wire [SD*16-1:0] out_data,
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

  localparam LEGAL=(HEAD_DIM==8 || HEAD_DIM==16 || HEAD_DIM==32 ||
    HEAD_DIM==64 || HEAD_DIM==128) &&
    NUM_LAYERS>=1 && NUM_LAYERS<=36 && NUM_KV_HEADS>=1 && NUM_KV_HEADS<=8 &&
    NUM_Q_HEADS<=32 && (NUM_Q_HEADS==2*NUM_KV_HEADS || NUM_Q_HEADS==4*NUM_KV_HEADS) &&
    MAX_SEQ_LEN>=1 && MAX_SEQ_LEN<=40960;
  generate if (!LEGAL) begin: invalid_parameters
    initial $fatal(1,"ANVIL_QN1 PARAMETER ERROR: QK-Norm/RoPE geometry");
    assign in_ready=0;
    assign out_valid=0; assign out_error=0; assign out_is_key=0;
    assign out_head=0; assign out_layer=0; assign out_pos=0; assign out_data=0;
  end else begin: datapath
    reg owned, result_valid, result_failed, key_vector, head_failed;
    reg [7:0] age;
    reg [5:0] head;
    reg [31:0] layer, position;
    reg [SD*16-1:0] captured, gamma, result_data;
    reg [SH*16-1:0] cosine, sine;
    wire [SD-1:0] invalid_element;
    wire [SH-1:0] invalid_coefficient;
    wire invalid_head=(|invalid_element) || (|invalid_coefficient) ||
      in_layer>=NUM_LAYERS || in_pos>=MAX_SEQ_LEN ||
      (in_is_key ? in_head>=NUM_KV_HEADS : in_head>=NUM_Q_HEADS);
    wire [31:0] tree [1:255];
    wire [255:1] tree_failed;
    wire [23:0] sum_raw={tree[1][30:23]!=0,tree[1][22:0]};
    wire [5:0] sum_shift=sum_raw==0 ? 6'd0 : leading_zero32({8'd0,sum_raw})-6'd8;
    wire signed [11:0] sum_exponent=(tree[1][30:23]==0 ? -12'sd126 :
      $signed({4'd0,tree[1][30:23]})-12'sd127)-$signed({6'd0,sum_shift});
    wire [23:0] sum_mantissa=sum_raw << sum_shift;
    wire [32:0] mean_packed=round_pack32(1'b0,
      sum_exponent-12'($clog2(SD)),{sum_mantissa,3'd0});
    reg [31:0] mean;
    reg mean_failed;
    wire [31:0] epsilon_sum, root, reciprocal;
    wire epsilon_failed, root_failed, reciprocal_failed;
    wire root_ready, root_done, reciprocal_ready, reciprocal_done;
    wire [SD*16-1:0] rounded_output;
    wire [SD-1:0] rotated_failed;

    assign in_ready=rst_n && !flush && !owned;
    assign out_valid=rst_n && !flush && result_valid;
    assign out_error=out_valid && result_failed;
    assign out_is_key=out_valid && key_vector;
    assign out_head=out_valid ? head : 6'd0;
    assign out_layer=out_valid ? layer : 32'd0;
    assign out_pos=out_valid ? position : 32'd0;
    assign out_data=out_valid ? result_data : {SD*16{1'b0}};
    anvil_qn1_fp32_add epsilon_add (
      .clk(clk),.rst_n(rst_n),.flush(flush),.ce(1'b1),
      .a(mean),.b(EPSILON32),.in_error(mean_failed),
      .result(epsilon_sum),.out_error(epsilon_failed)
    );
    anvil_qn1_fp32_sqrt square_root (
      .clk(clk),.rst_n(rst_n),.flush(flush),.start(owned && age==45),
      .radicand(epsilon_sum),.in_error(epsilon_failed || head_failed),
      .ready(root_ready),.done(root_done),.result(root),.out_error(root_failed)
    );
    anvil_qn1_fp32_div inverse_root (
      .clk(clk),.rst_n(rst_n),.flush(flush),.start(owned && age==79),
      .numerator(32'h3f800000),.denominator(root),.in_error(root_failed),
      .ready(reciprocal_ready),.done(reciprocal_done),
      .result(reciprocal),.out_error(reciprocal_failed)
    );
    always @(posedge clk or negedge rst_n) begin
      if (!rst_n) begin
        owned<=0; result_valid<=0; result_failed<=0; key_vector<=0; head_failed<=0;
        age<=0; head<=0; layer<=0; position<=0;
        captured<=0; gamma<=0; cosine<=0; sine<=0; result_data<=0;
        mean<=0; mean_failed<=0;
      end else if (flush) begin
        owned<=0; result_valid<=0; result_failed<=0; head_failed<=0;
        age<=0; result_data<=0; mean<=0; mean_failed<=0;
      end else begin
        if (in_valid && in_ready) begin
          owned<=1; age<=0; head_failed<=invalid_head;
          captured<=in_data; gamma<=in_gamma;
          cosine<=in_pos==0 ? {SH{16'h3f80}} : in_cos;
          sine<=in_pos==0 ? {SH{16'h0000}} : in_sin;
          key_vector<=in_is_key; head<=in_head; layer<=in_layer; position<=in_pos;
        end
        if (owned && !result_valid) begin
          age<=age+1'b1;
          if (age==39) begin
            mean<=mean_packed[32] ? 32'd0 : mean_packed[31:0];
            mean_failed<=tree_failed[1] || mean_packed[32] || head_failed;
          end
          if (age==132) begin
            result_valid<=1;
            result_failed<=head_failed || (|rotated_failed);
            result_data<=head_failed || (|rotated_failed) ?
              {SD*16{1'b0}} : rounded_output;
          end
        end
        if (out_valid && out_ready) begin
          owned<=0; result_valid<=0; result_failed<=0; age<=0;
        end
      end
    end
    genvar i, level, node, pair_index;
    for (i=0;i<128;i=i+1) begin: squares
      if (i<SD) begin: active_coordinate
        assign invalid_element[i]=bf16_invalid(in_data[i*16+:16]) ||
          bf16_invalid(in_gamma[i*16+:16]);
        anvil_qn1_fp32_mul square (
          .clk(clk),.rst_n(rst_n),.flush(flush),.ce(1'b1),
          .a({captured[i*16+:16],16'd0}),.b({captured[i*16+:16],16'd0}),
          .in_error(head_failed),.result(tree[128+i]),.out_error(tree_failed[128+i])
        );
      end else begin: alignment_padding
        assign tree[128+i]=32'd0;
        assign tree_failed[128+i]=1'b0;
      end
    end
    for (level=0;level<7;level=level+1) begin: sum_levels
      for (node=0;node<(64>>level);node=node+1) begin: adjacent_pairs
        localparam INDEX=(64>>level)+node;
        anvil_qn1_fp32_add sum (
          .clk(clk),.rst_n(rst_n),.flush(flush),.ce(1'b1),
          .a(tree[2*INDEX]),.b(tree[2*INDEX+1]),
          .in_error(tree_failed[2*INDEX] || tree_failed[2*INDEX+1]),
          .result(tree[INDEX]),.out_error(tree_failed[INDEX])
        );
      end
    end
    wire [31:0] scaled [0:SD-1], gamma_product [0:SD-1];
    wire [SD-1:0] scale_failed, gamma_failed;
    reg [SD*16-1:0] unit_vector, normalized_head;
    reg [SD-1:0] unit_failed, normalized_failed;
    for (i=0;i<SD;i=i+1) begin: normalize
      wire [16:0] unit_rounded=round_bf16(scaled[i]);
      wire [16:0] gamma_rounded=round_bf16(gamma_product[i]);
      anvil_qn1_fp32_mul x_scale (
        .clk(clk),.rst_n(rst_n),.flush(flush),.ce(1'b1),
        .a({captured[i*16+:16],16'd0}),.b(reciprocal),.in_error(reciprocal_failed),
        .result(scaled[i]),.out_error(scale_failed[i])
      );
      anvil_qn1_fp32_mul gamma_scale (
        .clk(clk),.rst_n(rst_n),.flush(flush),.ce(1'b1),
        .a({unit_vector[i*16+:16],16'd0}),.b({gamma[i*16+:16],16'd0}),
        .in_error(unit_failed[i]),.result(gamma_product[i]),.out_error(gamma_failed[i])
      );
      always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
          unit_vector[i*16+:16]<=0; normalized_head[i*16+:16]<=0;
          unit_failed[i]<=0; normalized_failed[i]<=0;
        end else if (flush) begin
          unit_vector[i*16+:16]<=0; normalized_head[i*16+:16]<=0;
          unit_failed[i]<=0; normalized_failed[i]<=0;
        end else begin
          unit_vector[i*16+:16]<=unit_rounded[15:0];
          unit_failed[i]<=scale_failed[i] || unit_rounded[16];
          normalized_head[i*16+:16]<=gamma_rounded[15:0];
          normalized_failed[i]<=gamma_failed[i] || gamma_rounded[16];
        end
      end
    end
    for (pair_index=0;pair_index<SH;pair_index=pair_index+1) begin: split_half_rope
      assign invalid_coefficient[pair_index]=bf16_invalid(in_cos[pair_index*16+:16]) ||
        bf16_invalid(in_sin[pair_index*16+:16]);
      wire [31:0] x={normalized_head[pair_index*16+:16],16'd0};
      wire [31:0] y={normalized_head[(pair_index+SH)*16+:16],16'd0};
      wire [31:0] c={cosine[pair_index*16+:16],16'd0};
      wire [31:0] s={sine[pair_index*16+:16],16'd0};
      wire pair_failed=normalized_failed[pair_index] || normalized_failed[pair_index+SH];
      wire [31:0] xc, ys, xs, yc, rotated_x, rotated_y;
      wire xc_failed, ys_failed, xs_failed, yc_failed, x_failed, y_failed;
      wire [16:0] final_x=round_bf16(rotated_x);
      wire [16:0] final_y=round_bf16(rotated_y);
      anvil_qn1_fp32_mul mul_xc (
        .clk(clk),.rst_n(rst_n),.flush(flush),.ce(1'b1),
        .a(x),.b(c),.in_error(pair_failed),.result(xc),.out_error(xc_failed)
      );
      anvil_qn1_fp32_mul mul_ys (
        .clk(clk),.rst_n(rst_n),.flush(flush),.ce(1'b1),
        .a(y),.b(s),.in_error(pair_failed),.result(ys),.out_error(ys_failed)
      );
      anvil_qn1_fp32_mul mul_xs (
        .clk(clk),.rst_n(rst_n),.flush(flush),.ce(1'b1),
        .a(x),.b(s),.in_error(pair_failed),.result(xs),.out_error(xs_failed)
      );
      anvil_qn1_fp32_mul mul_yc (
        .clk(clk),.rst_n(rst_n),.flush(flush),.ce(1'b1),
        .a(y),.b(c),.in_error(pair_failed),.result(yc),.out_error(yc_failed)
      );
      anvil_qn1_fp32_add rotate_x (
        .clk(clk),.rst_n(rst_n),.flush(flush),.ce(1'b1),
        .a(xc),.b({!ys[31],ys[30:0]}),.in_error(xc_failed || ys_failed),
        .result(rotated_x),.out_error(x_failed)
      );
      anvil_qn1_fp32_add rotate_y (
        .clk(clk),.rst_n(rst_n),.flush(flush),.ce(1'b1),
        .a(xs),.b(yc),.in_error(xs_failed || yc_failed),
        .result(rotated_y),.out_error(y_failed)
      );
      assign rounded_output[pair_index*16+:16]=final_x[15:0];
      assign rounded_output[(pair_index+SH)*16+:16]=final_y[15:0];
      assign rotated_failed[pair_index]=x_failed || final_x[16];
      assign rotated_failed[pair_index+SH]=y_failed || final_y[16];
    end
  end endgenerate
endmodule
