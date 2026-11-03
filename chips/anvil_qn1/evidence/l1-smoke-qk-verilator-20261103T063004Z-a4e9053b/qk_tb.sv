
module leaf_tb;
  parameter D=8;
  reg clk=0;
  always #5 clk=~clk;
  reg rst_n,flush=0,in_valid=0,in_is_key=0,out_ready=0;
  reg [5:0] in_head=0;
  reg [31:0] in_layer=0,in_pos=0;
  reg [D*16-1:0] in_data=0,in_gamma=0;
  reg [(D/2)*16-1:0] in_cos=0,in_sin=0;
  wire in_ready,out_valid,out_error,out_is_key;
  wire [5:0] out_head;
  wire [31:0] out_layer,out_pos;
  wire [D*16-1:0] out_data;
  reg [D*16-1:0] expected;
  integer fd,rc,expected_error,key_value,head_value,case_id=0,age,stall;
  integer position_value,layer_value;
  reg [4095:0] filename;
  anvil_qn1_qknorm_rope #(.HEAD_DIM(D)) dut(
    .clk(clk),.rst_n(rst_n),.flush(flush),.in_valid(in_valid),.in_ready(in_ready),
    .in_is_key(in_is_key),.in_head(in_head),.in_layer(in_layer),.in_pos(in_pos),
    .in_data(in_data),.in_gamma(in_gamma),.in_cos(in_cos),.in_sin(in_sin),
    .out_valid(out_valid),.out_error(out_error),.out_is_key(out_is_key),
    .out_head(out_head),.out_layer(out_layer),.out_pos(out_pos),.out_data(out_data),
    .out_ready(out_ready));
  task reset_outputs;
    begin
      if ({in_ready,out_valid,out_error,out_is_key,out_head,out_layer,out_pos,out_data}
          !== 0) $fatal(1,"RESET_XZ_OR_NONZERO");
    end
  endtask
  always @(posedge clk or negedge clk) if (!rst_n) reset_outputs();
  initial begin
    rst_n=0;
    #1; reset_outputs();
    @(negedge clk); rst_n=1;
    #1;
    if (!$value$plusargs("vectors=%s",filename)) $fatal(1,"MISSING_VECTORS");
    fd=$fopen(filename,"r");
    if (!fd) $fatal(1,"OPEN_VECTORS");
    rc=$fscanf(fd,"%d %d %d %d %h %h %h %h %d %h\n",
      key_value,head_value,layer_value,position_value,
      in_data,in_gamma,in_cos,in_sin,expected_error,expected);
    while (rc==10) begin
      if (case_id>0) @(negedge clk);
      if (in_ready!==1 || out_valid!==0) $fatal(1,"IDLE_NOT_READY case=%0d",case_id);
      in_is_key=key_value; in_head=head_value; in_layer=layer_value;
      in_pos=position_value; in_valid=1; out_ready=0;
      @(posedge clk); #1;
      if (in_ready!==0 || out_valid!==0) $fatal(1,"ACCEPT_OWNERSHIP");
      @(negedge clk); in_valid=0;
      for (age=1;age<=133;age=age+1) begin
        @(posedge clk); #1;
        if (age<133 && out_valid!==0)
          $fatal(1,"EARLY_QK_RESULT case=%0d age=%0d",case_id,age);
        if (in_ready!==0) $fatal(1,"OVERLAPPING_QK_ACCEPTANCE");
      end
      if (out_valid!==1 || out_error!==expected_error[0] ||
          out_data!==expected || out_is_key!==in_is_key || out_head!==in_head ||
          out_layer!==in_layer || out_pos!==in_pos)
        $fatal(1,"QK_COMPARE case=%0d age=133 valid=%b error=%b expected_error=%b data=%h expected=%h",
          case_id,out_valid,out_error,expected_error[0],out_data,expected);
      for (stall=0;stall<3;stall=stall+1) begin
        @(posedge clk); #1;
        if (out_valid!==1 || out_data!==expected || out_error!==expected_error[0] ||
            out_is_key!==in_is_key || out_head!==in_head || out_layer!==in_layer ||
            out_pos!==in_pos || in_ready!==0) $fatal(1,"QK_STALL_UNSTABLE");
      end
      @(negedge clk); out_ready=1;
      @(posedge clk);
      if (out_valid!==1 || in_ready!==0) $fatal(1,"RETIRE_PREEDGE");
      #1;
      if (out_valid!==0 || in_ready!==1) $fatal(1,"RETIRE_OWNERSHIP");
      @(negedge clk); out_ready=0;
      case_id=case_id+1;
      rc=$fscanf(fd,"%d %d %d %d %h %h %h %h %d %h\n",
        key_value,head_value,layer_value,position_value,
        in_data,in_gamma,in_cos,in_sin,expected_error,expected);
    end
    if (rc!=0 && rc!=-1) $fatal(1,"MALFORMED_VECTOR rc=%0d",rc);
    if (case_id==0) $fatal(1,"EMPTY_COMPARISON");
    $fclose(fd);
    @(negedge clk); in_valid=1; in_pos=0;
    @(posedge clk); #1;
    @(negedge clk); in_valid=0;
    repeat (20) @(posedge clk);
    @(negedge clk); rst_n=0;
    #1; reset_outputs();
    repeat (2) @(negedge clk);
    rst_n=1;
    @(negedge clk); in_valid=1;
    @(posedge clk); #1;
    @(negedge clk); in_valid=0;
    repeat (20) @(posedge clk);
    @(negedge clk); flush=1;
    #1; reset_outputs();
    @(posedge clk); #1;
    @(negedge clk); flush=0;
    repeat (140) begin
      @(posedge clk); #1;
      if (out_valid!==0) $fatal(1,"FLUSH_LEAK");
    end
    $display("SUMMARY qk_cases=%0d elements=%0d latency=133 stall_cycles=%0d reset_during_work=1 flush_during_work=1",
      case_id,case_id*D,3*case_id);
    $finish;
  end
  initial begin
    repeat (500000) @(posedge clk);
    $fatal(1,"CYCLE_BOUND");
  end
endmodule
