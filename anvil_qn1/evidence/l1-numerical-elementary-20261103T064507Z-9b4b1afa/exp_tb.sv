
module scalar_tb;
  reg clk=0,rst_n,flush=0,in_valid=0,out_ready=0;
  always #5 clk=~clk;
  reg [2:0] in_op=0;
  reg [31:0] in_a=0,in_b=0;
  reg in_error=0;
  wire in_ready,out_valid,out_error;
  wire [31:0] out_data;
  integer fd,rc,operation,error_value,expected_error,count=0,cycles,stall;
  reg [31:0] expected;
  reg [4095:0] filename;
  anvil_qn1_exp dut(.clk(clk),.rst_n(rst_n),.flush(flush),
    .in_valid(in_valid),.in_ready(in_ready),.in_data(in_a),
    .out_valid(out_valid),.out_ready(out_ready),.out_data(out_data),.out_error(out_error));
  task reset_outputs;
    begin
      if ({in_ready,out_valid,out_data,out_error}!==0) $fatal(1,"SCALAR_RESET");
    end
  endtask
  always @(posedge clk or negedge clk) if (!rst_n) reset_outputs();
  initial begin
    rst_n=0; #1; reset_outputs();
    @(negedge clk); rst_n=1; #1;
    if (!$value$plusargs("vectors=%s",filename)) $fatal(1,"NO_VECTORS");
    fd=$fopen(filename,"r"); if (!fd) $fatal(1,"OPEN_VECTORS");
    rc=$fscanf(fd,"%d %h %h %d %h %d\n",
      operation,in_a,in_b,error_value,expected,expected_error);
    while (rc==6) begin
      @(negedge clk);
      if (in_ready!==1 || out_valid!==0) $fatal(1,"SCALAR_NOT_READY");
      in_op=operation; in_error=error_value; in_valid=1; out_ready=0;
      @(posedge clk); #1;
      if (in_ready!==0) $fatal(1,"SCALAR_ACCEPT");
      @(negedge clk); in_valid=0; cycles=0;
      while (out_valid===0 && cycles<1000) begin
        @(posedge clk); #1; cycles=cycles+1;
      end
      if (out_valid!==1 || out_data!==expected || out_error!==expected_error[0])
        $fatal(1,"SCALAR_COMPARE case=%0d op=%0d a=%h b=%h got=%h expected=%h error=%b expected_error=%b cycles=%0d",
          count,operation,in_a,in_b,out_data,expected,out_error,expected_error[0],cycles);
      for (stall=0;stall<2;stall=stall+1) begin
        @(posedge clk); #1;
        if (out_valid!==1 || out_data!==expected || out_error!==expected_error[0] ||
            in_ready!==0) $fatal(1,"SCALAR_STALL");
      end
      @(negedge clk); out_ready=1;
      @(posedge clk); #1;
      if (out_valid!==0 || in_ready!==1) $fatal(1,"SCALAR_RETIRE");
      @(negedge clk); out_ready=0; count=count+1;
      rc=$fscanf(fd,"%d %h %h %d %h %d\n",
        operation,in_a,in_b,error_value,expected,expected_error);
    end
    if (rc!=0 && rc!=-1) $fatal(1,"MALFORMED_VECTORS");
    if (count==0) $fatal(1,"NO_COMPARISONS");
    $fclose(fd);
    $display("SUMMARY scalar_cases=%0d stalled_outputs=%0d",count,count);
    $finish;
  end
  initial begin repeat (500000) @(posedge clk); $fatal(1,"CYCLE_BOUND"); end
endmodule
