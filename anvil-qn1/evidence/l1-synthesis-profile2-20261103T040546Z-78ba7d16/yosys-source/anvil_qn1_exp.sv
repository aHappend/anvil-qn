module anvil_qn1_exp (
  input wire clk, rst_n, flush, in_valid,
  output wire in_ready,
  input wire [31:0] in_data,
  output wire out_valid,
  input wire out_ready,
  output wire [31:0] out_data,
  output wire out_error
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

  localparam IDLE=0, REDUCE=1, MULTIPLE=2, RESIDUAL=3, TERM_MUL=4;
  localparam TERM_DIV=5, SUM=6, SCALE=7, HOLD=8;
  reg [3:0] state;
  reg waiting, failed;
  reg [31:0] x, r, term, sum, temporary, result;
  reg [28:0] remainder;
  reg [4:0] exponent;
  reg [2:0] order;
  reg [2:0] op;
  reg [31:0] a, b;
  wire arithmetic_state=state>=MULTIPLE && state<=SUM;
  wire alu_valid=rst_n && !flush && arithmetic_state && !waiting;
  wire alu_ready, alu_out_valid, alu_error;
  wire [31:0] alu_data;
  wire [31:0] exponent32=unsigned32_to_fp32({27'd0,exponent});
  wire [31:0] order32=unsigned32_to_fp32({29'd0,order});
  wire [31:0] clamped=sum[31] ? 32'd0 :
    fp32_greater(sum,32'h3f800000) ? 32'h3f800000 : sum;
  wire [32:0] scaled=scale32(clamped,-$signed({7'd0,exponent}));
  always @* begin
    op=0; a=0; b=0;
    case (state)
      MULTIPLE: begin op=2; a=exponent32; b=32'h3f317218; end
      RESIDUAL: begin op=0; a=x; b=temporary; end
      TERM_MUL: begin op=2; a=term; b=r; end
      TERM_DIV: begin op=3; a=temporary; b=order32; end
      SUM: begin op=0; a=sum; b=term; end
      default: begin op=0; a=0; b=0; end
    endcase
  end
  anvil_qn1_scalar arithmetic (
    .clk(clk),.rst_n(rst_n),.flush(flush),.in_valid(alu_valid),
    .in_ready(alu_ready),.in_op(op),.in_a(a),.in_b(b),.in_error(1'b0),
    .out_valid(alu_out_valid),.out_ready(waiting),.out_data(alu_data),
    .out_error(alu_error)
  );
  assign in_ready=rst_n && !flush && state==IDLE;
  assign out_valid=rst_n && !flush && state==HOLD;
  assign out_data=out_valid ? result : 32'd0;
  assign out_error=out_valid && failed;
  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state<=IDLE; waiting<=0; failed<=0; x<=0; r<=0; term<=0;
      sum<=0; temporary<=0; result<=0; remainder<=0; exponent<=0; order<=0;
    end else if (flush) begin
      state<=IDLE; waiting<=0; failed<=0; result<=0;
    end else begin
      if (alu_valid && alu_ready) waiting<=1;
      if (alu_out_valid && waiting) begin
        waiting<=0;
        if (alu_error) begin failed<=1; result<=0; state<=HOLD; end
        else case (state)
          MULTIPLE: begin temporary<=alu_data; state<=RESIDUAL; end
          RESIDUAL: begin
            r<=alu_data; term<=32'h3f800000; sum<=32'h3f800000;
            order<=1; state<=TERM_MUL;
          end
          TERM_MUL: begin temporary<=alu_data; state<=TERM_DIV; end
          TERM_DIV: begin term<=alu_data; state<=SUM; end
          SUM: begin
            sum<=alu_data;
            if (order==6) state<=SCALE;
            else begin order<=order+1'b1; state<=TERM_MUL; end
          end
          default: begin failed<=1; result<=0; state<=HOLD; end
        endcase
      end else case (state)
        IDLE: if (in_valid && in_ready) begin
          x<=in_data; exponent<=0; failed<=0; waiting<=0;
          if (fp32_invalid(in_data) || (!in_data[31] && in_data[30:0]!=0)) begin
            failed<=1; result<=0; state<=HOLD;
          end else if (in_data[30:0]==0) begin result<=32'h3f800000; state<=HOLD; end
          else if (in_data[30:0]>31'h41800000) begin result<=0; state<=HOLD; end
          else begin
            remainder<=in_data[30:0]<31'h3f317218 ? 29'd0 :
              {5'd0,1'b1,in_data[22:0]} << (in_data[30:23]-8'd126);
            state<=REDUCE;
          end
        end
        REDUCE: begin
          // Exact represented-value range reduction; no rounded quotient.
          if (remainder>=29'h0b17218) begin
            remainder<=remainder-29'h0b17218; exponent<=exponent+1'b1;
          end else state<=MULTIPLE;
        end
        SCALE: begin
          result<=scaled[32] ? 32'd0 : scaled[31:0];
          failed<=scaled[32]; state<=HOLD;
        end
        HOLD: if (out_ready) state<=IDLE;
        default: begin end
      endcase
    end
  end
endmodule
