module anvil_qn1_attention #(
  parameter HEAD_DIM=128, NUM_Q_HEADS=32, NUM_KV_HEADS=8, MAX_SEQ_LEN=40960
) (
  input wire clk, rst_n, flush, start_valid,
  output wire start_ready,
  input wire [31:0] start_layer, start_pos,
  input wire [5:0] start_head,
  input wire [(HEAD_DIM>0 ? HEAD_DIM : 1)*16-1:0] start_query,
  output wire out_valid,
  input wire out_ready,
  output wire [31:0] out_index,
  output wire [15:0] out_data,
  output wire done, error,
  output wire score_valid,
  output wire [31:0] score_fp32,
  output wire req_valid,
  input wire req_ready,
  output wire [3:0] req_kind,
  output wire [31:0] req_layer, req_row, req_col, req_tag,
  input wire rsp_valid,
  output wire rsp_ready,
  input wire [31:0] rsp_data, rsp_tag,
  input wire rsp_error
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
      HEAD_DIM==64 || HEAD_DIM==128) && NUM_KV_HEADS>=1 && NUM_KV_HEADS<=8 &&
      NUM_Q_HEADS<=32 && (NUM_Q_HEADS==2*NUM_KV_HEADS || NUM_Q_HEADS==4*NUM_KV_HEADS) &&
      MAX_SEQ_LEN>=1 && MAX_SEQ_LEN<=40960) begin: legal
    localparam DS=$clog2(HEAD_DIM);
    localparam GQA_SHIFT=NUM_Q_HEADS==2*NUM_KV_HEADS ? 1 : 2;
    localparam DOT_LATENCY=4+5*DS;
    localparam [31:0] DOT_SCALE=HEAD_DIM==8 ? 32'h3eb504f3 :
      HEAD_DIM==16 ? 32'h3e800000 : HEAD_DIM==32 ? 32'h3e3504f3 :
      HEAD_DIM==64 ? 32'h3e000000 : 32'h3db504f3;
    localparam IDLE=0, CLEAR=1, K_LOAD=2, DOT=3, DOT_WAIT=4, SCORE=5;
    localparam DIFFERENCE=6, EXP_REQ=7, EXP_WAIT=8, DENOMINATOR=9, V_LOAD=10;
    localparam NUM_READ=11, PRODUCT=12, NUM_ADD=13, NEXT_POSITION=14;
    localparam DIV_READ=15, DIVIDE=16, ROUND=17, OUTPUT=18, FINISH=19, FAULT=20;
    reg [4:0] state;
    reg second_pass, waiting, done_reg, error_reg, score_event;
    reg [31:0] layer, last_position, position, cursor;
    reg [5:0] head, elapsed;
    reg [8:0] issued, received;
    reg [HEAD_DIM-1:0] seen;
    reg [HEAD_DIM*16-1:0] query, key, value;
    reg [31:0] maximum, score, difference, exponential, denominator, product, quotient;
    reg [15:0] result;
    (* ramstyle="M20K", nomem2reg *) reg [31:0] numerators [0:HEAD_DIM-1];
    reg [31:0] numerator_q;
    wire [31:0] tree [1:2*HEAD_DIM-1];
    wire [2*HEAD_DIM-1:1] tree_failed;
    wire unit_flush=flush || state==FAULT;
    wire load_state=state==K_LOAD || state==V_LOAD;
    wire response_bad=rsp_valid && (!load_state || rsp_error || rsp_tag[31:9]!=0 ||
      rsp_tag[8]!=(state==V_LOAD) || rsp_tag[7:0]>=HEAD_DIM ||
      {1'b0,rsp_tag[7:0]}>=issued || seen[rsp_tag[DS-1:0]] ||
      rsp_data[31:16]!=0 || bf16_invalid(rsp_data[15:0]));
    wire [31:0] head_base={26'd0,head} << DS;
    wire [31:0] kv_base=({26'd0,head} >> GQA_SHIFT) << DS;
    reg query_bad;
    integer check_lane;
    always @* begin
      query_bad=0;
      for (check_lane=0;check_lane<HEAD_DIM;check_lane=check_lane+1)
        if (bf16_invalid(start_query[check_lane*16+:16])) query_bad=1;
    end
    genvar lane, level, node;
    for (lane=0;lane<HEAD_DIM;lane=lane+1) begin: dot_lanes
      anvil_qn1_fp32_mul multiply (
        .clk(clk),.rst_n(rst_n),.flush(unit_flush),.ce(1'b1),
        .a({query[lane*16+:16],16'd0}),.b({key[lane*16+:16],16'd0}),
        .in_error(1'b0),.result(tree[HEAD_DIM+lane]),.out_error(tree_failed[HEAD_DIM+lane])
      );
    end
    for (level=0;level<DS;level=level+1) begin: dot_levels
      for (node=0;node<(HEAD_DIM >> (level+1));node=node+1) begin: pairs
        localparam INDEX=(HEAD_DIM >> (level+1))+node;
        anvil_qn1_fp32_add add (
          .clk(clk),.rst_n(rst_n),.flush(unit_flush),.ce(1'b1),
          .a(tree[2*INDEX]),.b(tree[2*INDEX+1]),
          .in_error(tree_failed[2*INDEX] || tree_failed[2*INDEX+1]),
          .result(tree[INDEX]),.out_error(tree_failed[INDEX])
        );
      end
    end
    reg [2:0] alu_op;
    reg [31:0] alu_a, alu_b;
    wire arithmetic_state=state==SCORE || state==DIFFERENCE || state==DENOMINATOR ||
      state==PRODUCT || state==NUM_ADD || state==DIVIDE;
    wire alu_ready, alu_valid, alu_error;
    wire [31:0] alu_data;
    always @* begin
      alu_op=0; alu_a=0; alu_b=0;
      case (state)
        SCORE: begin alu_op=2; alu_a=product; alu_b=DOT_SCALE; end
        DIFFERENCE: begin alu_op=1; alu_a=score; alu_b=maximum; end
        DENOMINATOR: begin alu_op=0; alu_a=denominator; alu_b=exponential; end
        PRODUCT: begin alu_op=2; alu_a={value[cursor*16+:16],16'd0}; alu_b=exponential; end
        NUM_ADD: begin alu_op=0; alu_a=numerator_q; alu_b=product; end
        DIVIDE: begin alu_op=3; alu_a=numerator_q; alu_b=denominator; end
        default: begin end
      endcase
    end
    anvil_qn1_scalar arithmetic (
      .clk(clk),.rst_n(rst_n),.flush(unit_flush),
      .in_valid(arithmetic_state && !waiting),.in_ready(alu_ready),
      .in_op(alu_op),.in_a(alu_a),.in_b(alu_b),.in_error(1'b0),
      .out_valid(alu_valid),.out_ready(waiting),.out_data(alu_data),.out_error(alu_error)
    );
    wire exp_ready, exp_valid, exp_error;
    wire [31:0] exp_data;
    anvil_qn1_exp exponential_unit (
      .clk(clk),.rst_n(rst_n),.flush(unit_flush),.in_valid(state==EXP_REQ),
      .in_ready(exp_ready),.in_data(difference),.out_valid(exp_valid),
      .out_ready(state==EXP_WAIT),.out_data(exp_data),.out_error(exp_error)
    );
    wire [16:0] rounded=round_bf16(quotient);
    always @(posedge clk) begin
      numerator_q<=numerators[cursor[DS-1:0]];
      if (rst_n && !flush) begin
        if (state==CLEAR) numerators[cursor[DS-1:0]]<=0;
        else if (state==NUM_ADD && alu_valid && waiting && !alu_error)
          numerators[cursor[DS-1:0]]<=alu_data;
      end
    end
    assign start_ready=rst_n && !flush && state==IDLE && !done_reg && !error_reg;
    assign out_valid=rst_n && !flush && !response_bad && state==OUTPUT;
    assign out_index=out_valid ? head_base+cursor : 32'd0;
    assign out_data=out_valid ? result : 16'd0;
    assign done=rst_n && !flush && done_reg;
    assign error=rst_n && !flush && (state==FAULT || error_reg);
    assign score_valid=rst_n && !flush && score_event;
    assign score_fp32=score_valid ? score : 32'd0;
    assign req_valid=rst_n && !flush && !response_bad && load_state && issued<HEAD_DIM;
    assign req_kind=!req_valid ? 4'd0 : state==K_LOAD ? 4'd9 : 4'd10;
    assign req_layer=req_valid ? layer : 32'd0;
    assign req_row=req_valid ? position : 32'd0;
    assign req_col=req_valid ? kv_base+{23'd0,issued} : 32'd0;
    assign req_tag=req_valid ? {23'd0,(state==V_LOAD),issued[7:0]} : 32'd0;
    assign rsp_ready=rst_n && !flush;
    always @(posedge clk or negedge rst_n) begin
      if (!rst_n) begin
        state<=IDLE; second_pass<=0; waiting<=0; done_reg<=0; error_reg<=0; score_event<=0;
        layer<=0; last_position<=0; position<=0; cursor<=0; head<=0; elapsed<=0;
        issued<=0; received<=0; seen<=0; query<=0; key<=0; value<=0;
        maximum<=0; score<=0; difference<=0; exponential<=0; denominator<=0;
        product<=0; quotient<=0; result<=0;
      end else if (flush) begin
        state<=IDLE; waiting<=0; done_reg<=0; error_reg<=0; score_event<=0;
      end else begin
        done_reg<=0; error_reg<=0; score_event<=0;
        if (response_bad) state<=FAULT;
        else begin
          if (req_valid && req_ready) issued<=issued+1'b1;
          if (rsp_valid && load_state) begin
            seen[rsp_tag[DS-1:0]]<=1; received<=received+1'b1;
            if (state==K_LOAD) key[rsp_tag[7:0]*16+:16]<=rsp_data[15:0];
            else value[rsp_tag[7:0]*16+:16]<=rsp_data[15:0];
          end
          if (arithmetic_state && !waiting && alu_ready) waiting<=1;
          if (alu_valid && waiting) begin
            waiting<=0;
            if (alu_error) state<=FAULT;
            else case (state)
              SCORE: begin
                score<=alu_data; score_event<=1;
                if (second_pass) state<=DIFFERENCE;
                else begin
                  if (position==0 || fp32_greater(alu_data,maximum)) maximum<=alu_data;
                  state<=NEXT_POSITION;
                end
              end
              DIFFERENCE: begin difference<=alu_data; state<=EXP_REQ; end
              DENOMINATOR: begin
                denominator<=alu_data; issued<=0; received<=0; seen<=0; state<=V_LOAD;
              end
              PRODUCT: begin product<=alu_data; state<=NUM_ADD; end
              NUM_ADD: begin
                if (cursor==HEAD_DIM-1) state<=NEXT_POSITION;
                else begin cursor<=cursor+1'b1; state<=NUM_READ; end
              end
              DIVIDE: begin quotient<=alu_data; state<=ROUND; end
              default: state<=FAULT;
            endcase
          end else case (state)
            IDLE: if (start_valid && start_ready) begin
              layer<=start_layer; last_position<=start_pos; head<=start_head;
              query<=start_query; cursor<=0; second_pass<=0; waiting<=0;
              denominator<=0; maximum<=0; position<=0; issued<=0; received<=0; seen<=0;
              if (start_pos>=MAX_SEQ_LEN || start_head>=NUM_Q_HEADS || query_bad) state<=FAULT;
              else state<=CLEAR;
            end
            CLEAR: begin
              if (cursor==HEAD_DIM-1) state<=K_LOAD;
              else cursor<=cursor+1'b1;
            end
            K_LOAD: if (issued==HEAD_DIM && received==HEAD_DIM) state<=DOT;
            DOT: begin elapsed<=0; state<=DOT_WAIT; end
            DOT_WAIT: begin
              if (elapsed==DOT_LATENCY) begin
                if (tree_failed[1]) state<=FAULT;
                else begin product<=tree[1]; state<=SCORE; end
              end else elapsed<=elapsed+1'b1;
            end
            EXP_REQ: if (exp_ready) state<=EXP_WAIT;
            EXP_WAIT: if (exp_valid) begin
              if (exp_error) state<=FAULT;
              else begin exponential<=exp_data; state<=DENOMINATOR; end
            end
            V_LOAD: if (issued==HEAD_DIM && received==HEAD_DIM) begin cursor<=0; state<=NUM_READ; end
            NUM_READ: state<=PRODUCT;
            NEXT_POSITION: begin
              issued<=0; received<=0; seen<=0;
              if (position==last_position) begin
                if (second_pass) begin cursor<=0; state<=DIV_READ; end
                else begin second_pass<=1; position<=0; state<=K_LOAD; end
              end else begin position<=position+1'b1; state<=K_LOAD; end
            end
            DIV_READ: state<=DIVIDE;
            ROUND: begin
              if (rounded[16]) state<=FAULT;
              else begin result<=rounded[15:0]; state<=OUTPUT; end
            end
            OUTPUT: if (out_valid && out_ready) begin
              if (cursor==HEAD_DIM-1) state<=FINISH;
              else begin cursor<=cursor+1'b1; state<=DIV_READ; end
            end
            FINISH: begin done_reg<=1; state<=IDLE; end
            FAULT: begin error_reg<=1; waiting<=0; state<=IDLE; end
            default: begin end
          endcase
        end
      end
    end
  end else begin: invalid
    initial $fatal(1,"ANVIL_QN1 PARAMETER ERROR: attention geometry");
    assign start_ready=0; assign out_valid=0; assign out_index=0; assign out_data=0;
    assign done=0; assign error=0; assign score_valid=0; assign score_fp32=0;
    assign req_valid=0; assign req_kind=0; assign req_layer=0; assign req_row=0;
    assign req_col=0; assign req_tag=0; assign rsp_ready=0;
  end endgenerate
endmodule
