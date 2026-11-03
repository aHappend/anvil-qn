
module control_tb;
  reg clk=0;
  always #5 clk=~clk;
  reg [0:0] rst_n;
  reg [0:0] csr_valid;
  reg [0:0] csr_write;
  reg [11:0] csr_addr;
  reg [31:0] csr_wdata;
  reg [3:0] csr_wstrb;
  reg [0:0] csr_rsp_ready;
  reg [0:0] busy;
  reg [0:0] think_active;
  reg [0:0] qk_busy;
  reg [0:0] qk_blocked;
  reg [0:0] arith_error;
  reg [0:0] mem_error;
  reg [0:0] sequence_done;
  reg [2:0] direct_tokens;
  reg [2:0] think_tokens;
  reg [2:0] draft_nodes;
  reg [2:0] verified_nodes;
  reg [2:0] accepted_nodes;
  reg [2:0] rejected_nodes;
  reg [0:0] score_valid;
  reg [31:0] score_fp32;
  wire [0:0] csr_ready;
  wire [0:0] csr_rsp_valid;
  wire [31:0] csr_rdata;
  wire [0:0] csr_error;
  wire [0:0] mode_valid;
  wire [0:0] mode_value;
  reg [109:0] stimulus;
  reg [36:0] expected_before,expected_after;
  reg [4095:0] filename;
  integer fd,rc,count=0,responses=0,errors=0,modes=0,stalls=0;
  anvil_qn1_csr_perf dut(.clk(clk),.rst_n(rst_n),.csr_valid(csr_valid),.csr_write(csr_write),.csr_addr(csr_addr),.csr_wdata(csr_wdata),.csr_wstrb(csr_wstrb),.csr_rsp_ready(csr_rsp_ready),.busy(busy),.think_active(think_active),.qk_busy(qk_busy),.qk_blocked(qk_blocked),.arith_error(arith_error),.mem_error(mem_error),.sequence_done(sequence_done),.direct_tokens(direct_tokens),.think_tokens(think_tokens),.draft_nodes(draft_nodes),.verified_nodes(verified_nodes),.accepted_nodes(accepted_nodes),.rejected_nodes(rejected_nodes),.score_valid(score_valid),.score_fp32(score_fp32),.csr_ready(csr_ready),.csr_rsp_valid(csr_rsp_valid),.csr_rdata(csr_rdata),.csr_error(csr_error),.mode_valid(mode_valid),.mode_value(mode_value));
  task reset_outputs;
    begin
      if ({csr_ready,csr_rsp_valid,csr_rdata,csr_error,mode_valid,mode_value}!==0) $fatal(1,"CONTROL_RESET_XZ_OR_NONZERO");
    end
  endtask
  always @(posedge clk or negedge clk) if (!rst_n) reset_outputs();
  initial begin
    {rst_n,csr_valid,csr_write,csr_addr,csr_wdata,csr_wstrb,csr_rsp_ready,busy,think_active,qk_busy,qk_blocked,arith_error,mem_error,sequence_done,direct_tokens,think_tokens,draft_nodes,verified_nodes,accepted_nodes,rejected_nodes,score_valid,score_fp32}=0;
    rst_n=0;
    #1;reset_outputs();
    if (!$value$plusargs("vectors=%s",filename)) $fatal(1,"NO_VECTORS");
    fd=$fopen(filename,"r");if (!fd) $fatal(1,"OPEN_VECTORS");
    rc=$fscanf(fd,"%h %h %h\n",stimulus,expected_before,expected_after);
    while (rc==3) begin
      @(negedge clk);
      #1;{rst_n,csr_valid,csr_write,csr_addr,csr_wdata,csr_wstrb,csr_rsp_ready,busy,think_active,qk_busy,qk_blocked,arith_error,mem_error,sequence_done,direct_tokens,think_tokens,draft_nodes,verified_nodes,accepted_nodes,rejected_nodes,score_valid,score_fp32}=stimulus;
      #1;
      if ({csr_ready,csr_rsp_valid,csr_rdata,csr_error,mode_valid,mode_value}!==expected_before)
        $fatal(1,"CONTROL_PRE_COMPARE edge=%0d got=%h expected=%h",
          count,{csr_ready,csr_rsp_valid,csr_rdata,csr_error,mode_valid,mode_value},expected_before);
      @(posedge clk);
      if ({csr_ready,csr_rsp_valid,csr_rdata,csr_error,mode_valid,mode_value}!==expected_before)
        $fatal(1,"CONTROL_ACTIVE_COMPARE edge=%0d got=%h expected=%h",
          count,{csr_ready,csr_rsp_valid,csr_rdata,csr_error,mode_valid,mode_value},expected_before);
      if (csr_rsp_valid && csr_rsp_ready) begin
        responses=responses+1;if (csr_error) errors=errors+1;
      end
      if (csr_rsp_valid && !csr_rsp_ready) stalls=stalls+1;
      if (mode_valid) modes=modes+1;
      #1;
      if ({csr_ready,csr_rsp_valid,csr_rdata,csr_error,mode_valid,mode_value}!==expected_after)
        $fatal(1,"CONTROL_POST_COMPARE edge=%0d got=%h expected=%h",
          count,{csr_ready,csr_rsp_valid,csr_rdata,csr_error,mode_valid,mode_value},expected_after);
      count=count+1;
      rc=$fscanf(fd,"%h %h %h\n",stimulus,expected_before,expected_after);
    end
    if (rc!=0 && rc!=-1) $fatal(1,"MALFORMED_VECTORS");
    $display("SUMMARY edges=%0d responses=%0d errors=%0d modes=%0d stalls=%0d",
      count,responses,errors,modes,stalls);
    $finish;
  end
  initial begin repeat (500000) @(posedge clk);$fatal(1,"CYCLE_BOUND");end
endmodule
