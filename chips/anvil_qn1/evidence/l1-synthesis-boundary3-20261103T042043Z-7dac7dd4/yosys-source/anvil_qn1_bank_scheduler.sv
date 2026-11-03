module anvil_qn1_bank_scheduler #(
  parameter BANKS=8, QUEUE_DEPTH=3
) (
  input wire clk, rst_n, cancel,
  input wire req_valid,
  output wire req_ready,
  input wire req_write,
  input wire [3:0] req_kind,
  input wire [31:0] req_layer, req_row, req_col, req_wdata, req_tag,
  input wire [2:0] req_proj,
  output wire rsp_valid,
  input wire rsp_ready,
  output wire [31:0] rsp_data, rsp_tag,
  output wire rsp_error, fault, drained,
  output wire [(BANKS>0 ? BANKS : 1)-1:0] mem_req_valid,
  input wire [(BANKS>0 ? BANKS : 1)-1:0] mem_req_ready,
  output wire [(BANKS>0 ? BANKS : 1)-1:0] mem_req_write,
  output wire [(BANKS>0 ? BANKS : 1)*4-1:0] mem_req_kind,
  output wire [(BANKS>0 ? BANKS : 1)*32-1:0] mem_req_layer, mem_req_row,
    mem_req_col, mem_req_wdata,
  output wire [(BANKS>0 ? BANKS : 1)*3-1:0] mem_req_proj,
  output wire [(BANKS>0 ? BANKS : 1)*64-1:0] mem_req_tag,
  input wire [(BANKS>0 ? BANKS : 1)-1:0] mem_rsp_valid, mem_rsp_error,
  output wire [(BANKS>0 ? BANKS : 1)-1:0] mem_rsp_ready,
  input wire [(BANKS>0 ? BANKS : 1)*32-1:0] mem_rsp_rdata,
  input wire [(BANKS>0 ? BANKS : 1)*64-1:0] mem_rsp_tag
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

  generate if ((BANKS==1 || BANKS==2 || BANKS==4 || BANKS==8) &&
      QUEUE_DEPTH>=1 && QUEUE_DEPTH<=16) begin: legal
    localparam SLOTS=BANKS*QUEUE_DEPTH;
    localparam FREE=0, PENDING=1, WAITING=2, COMPLETE=3;
    reg [1:0] state [0:SLOTS-1];
    reg [3:0] kind [0:SLOTS-1];
    reg [2:0] projection [0:SLOTS-1];
    reg [31:0] layer [0:SLOTS-1], row [0:SLOTS-1], col [0:SLOTS-1];
    reg [31:0] wdata [0:SLOTS-1], client_tag [0:SLOTS-1], rdata [0:SLOTS-1];
    reg [63:0] tag [0:SLOTS-1];
    reg [SLOTS-1:0] writing, failed;
    // Host reset annuls ownership, but must not reuse a tag from before reset.
    reg [63:0] serial=64'd1;
    reg [2:0] next_bank;
    reg draining, fault_reg, output_valid, output_error;
    reg [31:0] output_data, output_tag;
    reg have_free, have_complete, any_owned, transaction_fault;
    integer free_slot, complete_slot;
    integer selected [0:BANKS-1], matched [0:BANKS-1];
    integer waiting_slot [0:BANKS-1];
    reg [BANKS-1:0] request_owned, waiting_request;
    reg [6:0] request_slot [0:BANKS-1];
    reg [BANKS-1:0] have_request, have_match;
    integer b, s, offset, candidate;
    always @* begin
      have_free=0; free_slot=0; have_complete=0; complete_slot=0;
      any_owned=0; transaction_fault=0;
      have_request=request_owned; have_match=0; waiting_request=0;
      for (b=0;b<BANKS;b=b+1) begin
        selected[b]=32'(request_slot[b]); matched[b]=0; waiting_slot[b]=0;
        for (s=0;s<QUEUE_DEPTH;s=s+1) begin
          if (!waiting_request[b] && state[b*QUEUE_DEPTH+s]==PENDING) begin
            waiting_slot[b]=b*QUEUE_DEPTH+s; waiting_request[b]=1;
          end
        end
      end
      for (offset=0;offset<BANKS;offset=offset+1) begin
        candidate=32'(next_bank)+offset;
        if (candidate>=BANKS) candidate=candidate-BANKS;
        for (s=0;s<QUEUE_DEPTH;s=s+1)
          if (!have_free && state[candidate*QUEUE_DEPTH+s]==FREE) begin
            have_free=1; free_slot=candidate*QUEUE_DEPTH+s;
          end
      end
      for (s=0;s<SLOTS;s=s+1) begin
        if (state[s]!=FREE) any_owned=1;
        if (!have_complete && state[s]==COMPLETE) begin
          have_complete=1; complete_slot=s;
        end
      end
      for (b=0;b<BANKS;b=b+1) begin
        for (s=0;s<QUEUE_DEPTH;s=s+1) begin
          if (tag[b*QUEUE_DEPTH+s]==mem_rsp_tag[b*64+:64] &&
              (state[b*QUEUE_DEPTH+s]==WAITING ||
               (!draining && !cancel && have_request[b] &&
                selected[b]==b*QUEUE_DEPTH+s && mem_req_ready[b]))) begin
            matched[b]=b*QUEUE_DEPTH+s; have_match[b]=1;
          end
        end
        if (rst_n && mem_rsp_valid[b] &&
            (!have_match[b] || mem_rsp_error[b])) transaction_fault=1;
      end
    end
    assign req_ready=rst_n && !cancel && !draining && !transaction_fault &&
      have_free && !(&serial);
    assign rsp_valid=rst_n && !cancel && !draining && !transaction_fault && output_valid;
    assign rsp_data=rsp_valid ? output_data : 32'd0;
    assign rsp_tag=rsp_valid ? output_tag : 32'd0;
    assign rsp_error=rsp_valid && output_error;
    assign fault=rst_n && (fault_reg || transaction_fault);
    assign drained=rst_n && !any_owned && !output_valid;
    genvar bank;
    for (bank=0;bank<BANKS;bank=bank+1) begin: banks
      wire issuing=rst_n && !cancel && !draining && !transaction_fault &&
        have_request[bank];
      assign mem_req_valid[bank]=issuing;
      assign mem_req_write[bank]=issuing && writing[selected[bank]];
      assign mem_req_kind[bank*4+:4]=issuing ? kind[selected[bank]] : 4'd0;
      assign mem_req_layer[bank*32+:32]=issuing ? layer[selected[bank]] : 32'd0;
      assign mem_req_proj[bank*3+:3]=issuing ? projection[selected[bank]] : 3'd0;
      assign mem_req_row[bank*32+:32]=issuing ? row[selected[bank]] : 32'd0;
      assign mem_req_col[bank*32+:32]=issuing ? col[selected[bank]] : 32'd0;
      assign mem_req_wdata[bank*32+:32]=issuing ? wdata[selected[bank]] : 32'd0;
      assign mem_req_tag[bank*64+:64]=issuing ? tag[selected[bank]] : 64'd0;
      assign mem_rsp_ready[bank]=rst_n;
    end
    integer index, bank_index;
    always @(posedge clk) begin
      if (rst_n && req_valid && req_ready) serial<=event_add64(serial,3'd1);
    end
    always @(posedge clk or negedge rst_n) begin
      if (!rst_n) begin
        next_bank<=0; draining<=0; fault_reg<=0;
        output_valid<=0; output_error<=0; output_data<=0; output_tag<=0;
        writing<=0; failed<=0;
        request_owned<=0;
        for (bank_index=0;bank_index<BANKS;bank_index=bank_index+1)
          request_slot[bank_index]<=0;
        for (index=0;index<SLOTS;index=index+1) begin
          state[index]<=FREE; kind[index]<=0; projection[index]<=0;
          layer[index]<=0; row[index]<=0; col[index]<=0; wdata[index]<=0;
          client_tag[index]<=0; rdata[index]<=0; tag[index]<=0;
        end
      end else begin
        fault_reg<=0;
        if (cancel || transaction_fault || (req_valid && (&serial))) begin
          draining<=1; output_valid<=0; request_owned<=0;
          if (transaction_fault || (req_valid && (&serial))) fault_reg<=1;
          for (index=0;index<SLOTS;index=index+1)
            if (state[index]!=WAITING) state[index]<=FREE;
        end else if (draining) begin
          output_valid<=0;
          if (!any_owned) draining<=0;
        end else begin
          if (output_valid && rsp_ready) output_valid<=0;
          if ((!output_valid || rsp_ready) && have_complete) begin
            output_valid<=1; output_data<=rdata[complete_slot];
            output_tag<=client_tag[complete_slot]; output_error<=failed[complete_slot];
            state[complete_slot]<=FREE;
          end
          if (req_valid && req_ready) begin
            state[free_slot]<=PENDING; writing[free_slot]<=req_write;
            kind[free_slot]<=req_kind; projection[free_slot]<=req_proj;
            layer[free_slot]<=req_layer; row[free_slot]<=req_row;
            col[free_slot]<=req_col; wdata[free_slot]<=req_wdata;
            client_tag[free_slot]<=req_tag; tag[free_slot]<=serial;
            if (next_bank==BANKS-1) next_bank<=0;
            else next_bank<=next_bank+1'b1;
          end
          for (bank_index=0;bank_index<BANKS;bank_index=bank_index+1)
            if (mem_req_valid[bank_index] && mem_req_ready[bank_index]) begin
              state[selected[bank_index]]<=WAITING;
              request_owned[bank_index]<=0;
            end else if (!request_owned[bank_index] && waiting_request[bank_index]) begin
              request_owned[bank_index]<=1;
              request_slot[bank_index]<=7'(waiting_slot[bank_index]);
            end
        end
        for (bank_index=0;bank_index<BANKS;bank_index=bank_index+1) begin
          if (mem_rsp_valid[bank_index] && have_match[bank_index]) begin
            if (cancel || draining || transaction_fault)
              state[matched[bank_index]]<=FREE;
            else begin
              state[matched[bank_index]]<=COMPLETE;
              rdata[matched[bank_index]]<=mem_rsp_rdata[bank_index*32+:32];
              failed[matched[bank_index]]<=mem_rsp_error[bank_index];
            end
          end
        end
      end
    end
  end else begin: invalid
    initial $fatal(1,"ANVIL_QN1 PARAMETER ERROR: memory scheduler geometry");
    assign req_ready=0; assign rsp_valid=0; assign rsp_data=0;
    assign rsp_tag=0; assign rsp_error=0; assign fault=0; assign drained=0;
    assign mem_req_valid=0; assign mem_req_write=0; assign mem_req_kind=0;
    assign mem_req_layer=0; assign mem_req_proj=0; assign mem_req_row=0;
    assign mem_req_col=0; assign mem_req_wdata=0; assign mem_req_tag=0;
    assign mem_rsp_ready=0;
  end endgenerate
endmodule
