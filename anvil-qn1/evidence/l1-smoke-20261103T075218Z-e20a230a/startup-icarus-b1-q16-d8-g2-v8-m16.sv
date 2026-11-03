
module startup_tb;
  parameter B=1,Q=3,H=8,I=8,D=8,QH=2,KH=1,V=8,M=16;
  reg clk=0,rst_n,cancel=0,token_valid=0,new_sequence=0,token_phase=0;
  always #5 clk=~clk;
  reg [31:0] token_id=0,token_pos=0;
  reg logit_ready=0,commit_ready=0,draft_valid=1;
  wire token_ready,logit_valid,done,error,cancel_done;
  wire [31:0] logit_index,logit_data;
  wire [B-1:0] mem_req_valid,mem_req_write,mem_rsp_ready;
  reg [B-1:0] mem_req_ready=0,mem_rsp_valid=0,mem_rsp_error=0;
  wire [B*4-1:0] mem_req_kind;
  wire [B*3-1:0] mem_req_proj;
  wire [B*32-1:0] mem_req_layer,mem_req_row,mem_req_col,mem_req_wdata;
  wire [B*64-1:0] mem_req_tag;
  reg [B*32-1:0] mem_rsp_rdata=0;
  reg [B*64-1:0] mem_rsp_tag=0;
  wire draft_ready,commit_valid,think_active,csr_ready,csr_rsp_valid,csr_error;
  wire [2:0] commit_count;
  wire [159:0] commit_tokens;
  wire [31:0] commit_pos,csr_rdata;
  reg [63:0] saved_tag;
  reg [B*200-1:0] saved_request;
  integer guard,b,selected,tests=0,stalls=0,drains=0,request_errors=0;
  anvil_qn1_top #(.COMPACT(1),.NUM_LAYERS(1),.HIDDEN_SIZE(H),
    .INTERMEDIATE_SIZE(I),.HEAD_DIM(D),.NUM_Q_HEADS(QH),.NUM_KV_HEADS(KH),
    .VOCAB_SIZE(V),.MAX_SEQ_LEN(M),.GROUP_SIZE(8),.BANKS(B),.QUEUE_DEPTH(Q)) dut(
    .clk(clk),.rst_n(rst_n),.cancel(cancel),.token_valid(token_valid),
    .new_sequence(new_sequence),.token_phase(token_phase),.token_id(token_id),
    .token_pos(token_pos),.token_ready(token_ready),.logit_valid(logit_valid),
    .logit_ready(logit_ready),.logit_index(logit_index),.logit_data(logit_data),
    .done(done),.error(error),.cancel_done(cancel_done),
    .mem_req_valid(mem_req_valid),.mem_req_ready(mem_req_ready),
    .mem_req_write(mem_req_write),.mem_req_kind(mem_req_kind),
    .mem_req_layer(mem_req_layer),.mem_req_proj(mem_req_proj),
    .mem_req_row(mem_req_row),.mem_req_col(mem_req_col),
    .mem_req_wdata(mem_req_wdata),.mem_req_tag(mem_req_tag),
    .mem_rsp_valid(mem_rsp_valid),.mem_rsp_ready(mem_rsp_ready),
    .mem_rsp_error(mem_rsp_error),.mem_rsp_rdata(mem_rsp_rdata),.mem_rsp_tag(mem_rsp_tag),
    .draft_valid(draft_valid),.draft_ready(draft_ready),.draft_count(3'd1),
    .draft_tokens(128'd0),.draft_parents(12'd4),.commit_valid(commit_valid),
    .commit_ready(commit_ready),.commit_count(commit_count),.commit_tokens(commit_tokens),
    .commit_pos(commit_pos),.think_active(think_active),
    .csr_valid(1'b0),.csr_ready(csr_ready),.csr_write(1'b0),.csr_addr(12'd0),
    .csr_wdata(32'd0),.csr_wstrb(4'd0),.csr_rsp_valid(csr_rsp_valid),
    .csr_rsp_ready(1'b0),.csr_rdata(csr_rdata),.csr_error(csr_error));
  task reset_outputs;
    begin
      if ({token_ready,logit_valid,done,error,cancel_done,logit_index,logit_data,
           mem_req_valid,mem_req_write,mem_req_kind,mem_req_layer,mem_req_proj,
           mem_req_row,mem_req_col,mem_req_wdata,mem_req_tag,mem_rsp_ready,
           draft_ready,commit_valid,commit_count,commit_tokens,commit_pos,think_active,
           csr_ready,csr_rsp_valid,csr_rdata,csr_error}!==0)
        $fatal(1,"STARTUP_RESET_XZ_OR_NONZERO");
    end
  endtask
  always @(posedge clk or negedge clk) if (!rst_n) reset_outputs();
  task tick;
    begin @(posedge clk);#1;@(negedge clk);#1;end
  endtask
  task no_publication;
    begin
      if (done!==0 || logit_valid!==0 || commit_valid!==0 || draft_ready!==0 ||
          think_active!==0) $fatal(1,"STARTUP_UNEXPECTED_PUBLICATION");
    end
  endtask
  task start;
    begin
      guard=0;
      while (token_ready!==1 && guard<100) begin tick();guard=guard+1;end
      if (token_ready!==1) $fatal(1,"STARTUP_READY");
      if (draft_ready!==0) $fatal(1,"IDLE_DRAFT_QUEUED");
      token_valid=1;new_sequence=1;
      @(posedge clk);
      if (token_ready!==1 || draft_ready!==0) $fatal(1,"STARTUP_TOKEN_HANDSHAKE");
      #1;if (token_ready!==0 || logit_valid!==0 || done!==0)
        $fatal(1,"STARTUP_TOKEN_ORDER");
      @(negedge clk);#1;token_valid=0;new_sequence=0;
      guard=0;
      while (mem_req_valid===0 && guard<100) begin tick();guard=guard+1;end
      if ((^mem_req_valid)===1'bx || mem_req_valid==0) $fatal(1,"STARTUP_NO_REQUEST");
      selected=-1;
      for (b=0;b<B;b=b+1) if (mem_req_valid[b]) begin
        if (selected!=-1 || mem_req_write[b]!==0 || mem_req_kind[b*4+:4]!==0 ||
            mem_req_layer[b*32+:32]!==0 || mem_req_row[b*32+:32]!==0 ||
            mem_req_col[b*32+:32]!==0)
          $fatal(1,"STARTUP_EMBEDDING_ADDRESS");
        selected=b;
      end
      saved_tag=mem_req_tag[selected*64+:64];
      saved_request={mem_req_write,mem_req_kind,mem_req_layer,mem_req_proj,
                     mem_req_row,mem_req_col,mem_req_wdata,mem_req_tag};
      repeat (5) begin
        tick();no_publication();
        if (mem_req_valid!==(B'(1)<<selected) ||
            {mem_req_write,mem_req_kind,mem_req_layer,mem_req_proj,
             mem_req_row,mem_req_col,mem_req_wdata,mem_req_tag}!==saved_request)
          $fatal(1,"STARTUP_REQUEST_STABILITY");
        stalls=stalls+1;
      end
      tests=tests+1;
    end
  endtask
  task wait_cancel;
    begin
      guard=0;
      while (cancel_done!==1 && guard<100) begin
        no_publication();if (error!==0) $fatal(1,"CANCEL_BECAME_ERROR");
        tick();guard=guard+1;
      end
      if (cancel_done!==1 || token_ready!==0) $fatal(1,"CANCEL_DRAIN_COMPLETION");
      tick();if (cancel_done!==0) $fatal(1,"DUPLICATE_CANCEL_DONE");
      drains=drains+1;
    end
  endtask
  task accept_request;
    begin
      mem_req_ready=B'(1)<<selected;
      @(posedge clk);
      if (!mem_req_valid[selected]) $fatal(1,"STARTUP_REQUEST_TRANSFER");
      #1;@(negedge clk);#1;mem_req_ready=0;
    end
  endtask
  initial begin
    rst_n=0;#1;reset_outputs();tick();rst_n=1;#1;
    start();
    cancel=1;#1;if (mem_req_valid!==0) $fatal(1,"CANCEL_UNACCEPTED_REQUEST");
    tick();cancel=0;wait_cancel();
    start();accept_request();
    cancel=1;tick();cancel=0;
    repeat (5) begin
      if (cancel_done!==0 || mem_req_valid!==0) $fatal(1,"EARLY_CANCEL_DRAIN");
      tick();
    end
    mem_rsp_valid=B'(1)<<selected;mem_rsp_tag[selected*64+:64]=saved_tag;
    mem_rsp_rdata[selected*32+:32]=32'h00003f80;
    guard=0;
    while (mem_rsp_ready[selected]!==1 && guard<100) begin tick();guard=guard+1;end
    if (mem_rsp_ready[selected]!==1) $fatal(1,"DRAIN_RESPONSE_NOT_READY");
    tick();mem_rsp_valid=0;wait_cancel();
    start();accept_request();
    mem_rsp_valid=B'(1)<<selected;mem_rsp_tag[selected*64+:64]=saved_tag;
    mem_rsp_error=B'(1)<<selected;
    guard=0;
    while (mem_rsp_ready[selected]!==1 && guard<100) begin tick();guard=guard+1;end
    if (mem_rsp_ready[selected]!==1) $fatal(1,"ERROR_RESPONSE_NOT_READY");
    tick();mem_rsp_valid=0;mem_rsp_error=0;
    guard=0;
    while (error!==1 && guard<100) begin no_publication();tick();guard=guard+1;end
    if (error!==1 || done!==0 || commit_valid!==0) $fatal(1,"READ_ERROR_NOT_VISIBLE");
    request_errors=request_errors+1;tick();
    start();accept_request();
    rst_n=0;#1;reset_outputs();tick();tick();rst_n=1;#1;
    if (mem_req_valid!==0 || logit_valid!==0 || commit_valid!==0)
      $fatal(1,"RESET_OWNERSHIP_LEAK");
    $display("SUMMARY startup_tests=%0d request_stalls=%0d cancel_drains=%0d read_errors=%0d reset_owned=1",
      tests,stalls,drains,request_errors);
    $finish;
  end
  initial begin repeat (500000) @(posedge clk);$fatal(1,"CYCLE_BOUND");end
endmodule
