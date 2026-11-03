module anvil_qn1_head_buffer #(
  parameter HEAD_DIM=128, MAX_SEQ_LEN=40960
) (
  input wire clk, rst_n, flush, start_valid,
  output wire start_ready,
  input wire start_is_key,
  input wire [5:0] start_heads,
  input wire [31:0] start_layer, start_pos,
  input wire [(HEAD_DIM>0 ? HEAD_DIM : 1)*16-1:0] start_gamma,
  input wire [(HEAD_DIM>1 ? HEAD_DIM/2 : 1)*16-1:0] start_cos, start_sin,
  input wire in_valid,
  output wire in_ready,
  input wire [31:0] in_index,
  input wire [15:0] in_data,
  output wire head_valid,
  input wire head_ready,
  output wire head_is_key,
  output wire [5:0] head_index,
  output wire [31:0] head_layer, head_pos,
  output wire [(HEAD_DIM>0 ? HEAD_DIM : 1)*16-1:0] head_data, head_gamma,
  output wire [(HEAD_DIM>1 ? HEAD_DIM/2 : 1)*16-1:0] head_cos, head_sin,
  output wire head_last, input_done, error
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

  generate if ((HEAD_DIM==8 || HEAD_DIM==16 || HEAD_DIM==32 ||
      HEAD_DIM==64 || HEAD_DIM==128) && MAX_SEQ_LEN>=1 && MAX_SEQ_LEN<=40960) begin: legal
    localparam DS=$clog2(HEAD_DIM);
    localparam FREE=0, CAPTURE=1, READY=2;
    reg [1:0] state [0:1];
    reg fill_slot, drain_slot, capturing, failed, done_reg, is_key;
    reg [5:0] heads;
    reg [31:0] layer, position, expected_index;
    reg [HEAD_DIM*16-1:0] gamma, data [0:1], gammas [0:1];
    reg [(HEAD_DIM/2)*16-1:0] cosine, sine, cosines [0:1], sines [0:1];
    reg [1:0] keys, lasts;
    reg [5:0] indices [0:1];
    reg [31:0] layers [0:1], positions [0:1];
    wire accepting=in_valid && in_ready;
    wire malformed=accepting && in_index!=expected_index;
    wire first_coordinate=expected_index[DS-1:0]==0;
    wire final_coordinate=&expected_index[DS-1:0];
    wire final_head=(expected_index >> DS)==({26'd0,heads}-1'b1);
    assign start_ready=rst_n && !flush && !failed && !capturing && !done_reg;
    assign in_ready=rst_n && !flush && !failed && capturing &&
      (state[fill_slot]==FREE || state[fill_slot]==CAPTURE);
    assign head_valid=rst_n && !flush && !failed && !malformed && state[drain_slot]==READY;
    assign head_is_key=head_valid && keys[drain_slot];
    assign head_index=head_valid ? indices[drain_slot] : 6'd0;
    assign head_layer=head_valid ? layers[drain_slot] : 32'd0;
    assign head_pos=head_valid ? positions[drain_slot] : 32'd0;
    assign head_data=head_valid ? data[drain_slot] : {HEAD_DIM*16{1'b0}};
    assign head_gamma=head_valid ? gammas[drain_slot] : {HEAD_DIM*16{1'b0}};
    assign head_cos=head_valid ? cosines[drain_slot] : {(HEAD_DIM/2)*16{1'b0}};
    assign head_sin=head_valid ? sines[drain_slot] : {(HEAD_DIM/2)*16{1'b0}};
    assign head_last=head_valid && lasts[drain_slot];
    assign input_done=rst_n && !flush && !failed && done_reg;
    assign error=rst_n && !flush && (failed || malformed);
    integer slot;
    always @(posedge clk or negedge rst_n) begin
      if (!rst_n) begin
        fill_slot<=0; drain_slot<=0; capturing<=0; failed<=0; done_reg<=0; is_key<=0;
        heads<=0; layer<=0; position<=0; expected_index<=0;
        gamma<=0; cosine<=0; sine<=0; keys<=0; lasts<=0;
        for (slot=0;slot<2;slot=slot+1) begin
          state[slot]<=FREE; data[slot]<=0; gammas[slot]<=0;
          cosines[slot]<=0; sines[slot]<=0; indices[slot]<=0;
          layers[slot]<=0; positions[slot]<=0;
        end
      end else if (flush) begin
        fill_slot<=0; drain_slot<=0; capturing<=0; failed<=0; done_reg<=0;
        state[0]<=FREE; state[1]<=FREE;
      end else begin
        done_reg<=0;
        if (malformed) begin failed<=1; capturing<=0; state[0]<=FREE; state[1]<=FREE; end
        else begin
          if (start_valid && start_ready) begin
            is_key<=start_is_key; heads<=start_heads; layer<=start_layer;
            position<=start_pos; gamma<=start_gamma; cosine<=start_cos; sine<=start_sin;
            expected_index<=0;
            if (start_heads<1 || start_heads>32 || (start_is_key && start_heads>8) ||
                start_pos>=MAX_SEQ_LEN) failed<=1;
            else capturing<=1;
          end
          if (accepting) begin
            data[fill_slot][expected_index[DS-1:0]*16+:16]<=in_data;
            expected_index<=expected_index+1'b1;
            if (first_coordinate) begin
              state[fill_slot]<=CAPTURE; gammas[fill_slot]<=gamma;
              cosines[fill_slot]<=cosine; sines[fill_slot]<=sine;
              indices[fill_slot]<=6'(expected_index >> DS);
              layers[fill_slot]<=layer; positions[fill_slot]<=position;
              keys[fill_slot]<=is_key; lasts[fill_slot]<=final_head;
            end
            if (final_coordinate) begin
              state[fill_slot]<=READY; fill_slot<=~fill_slot;
              if (final_head) begin capturing<=0; done_reg<=1; end
            end
          end
          if (head_valid && head_ready) begin state[drain_slot]<=FREE; drain_slot<=~drain_slot; end
        end
      end
    end
  end else begin: invalid
    initial $fatal(1,"ANVIL_QN1 PARAMETER ERROR: projected-head buffer geometry");
    assign start_ready=0; assign in_ready=0; assign head_valid=0; assign head_is_key=0;
    assign head_index=0; assign head_layer=0; assign head_pos=0; assign head_data=0;
    assign head_gamma=0; assign head_cos=0; assign head_sin=0;
    assign head_last=0; assign input_done=0; assign error=0;
  end endgenerate
endmodule
