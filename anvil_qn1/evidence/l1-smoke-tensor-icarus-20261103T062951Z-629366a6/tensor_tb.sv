
module tensor_tb;
  reg clk=0,rst_n,flush=0,in_valid=0,in_w4=0,out_ready=0;
  always #5 clk=~clk;
  wire in_ready,out_valid,out_error;
  reg [1023:0] q=0,z=0;
  reg [4095:0] scale_bf16=0,activation_bf16=0,weight_bf16=0;
  reg [255:0] lane_mask=0;
  reg [31:0] in_tag=0;
  wire [31:0] out_sum,out_tag;
  integer fd,rc,format_value,error_value,accepted=0,retired=0,cycles=0,enabled=0;
  integer front=0,tail=0,queued=0,birth[0:2047],blocked=0;
  reg [31:0] expected_input,expected[0:2047],tags[0:2047];
  reg errors[0:2047];
  reg [64:0] held_payload;
  reg holding=0,was_enabled;
  reg [255:0] next_mask;
  reg [1023:0] next_q,next_z;
  reg [4095:0] next_scale,next_activation,next_weight;
  reg [31:0] next_tag;
  reg [4095:0] filename;
  anvil_qn1_tensor_array dut(.clk(clk),.rst_n(rst_n),.flush(flush),
    .in_valid(in_valid),.in_w4(in_w4),.in_ready(in_ready),.q(q),.z(z),
    .scale_bf16(scale_bf16),.activation_bf16(activation_bf16),.weight_bf16(weight_bf16),
    .lane_mask(lane_mask),.in_tag(in_tag),.out_valid(out_valid),
    .out_sum(out_sum),.out_tag(out_tag),.out_error(out_error),.out_ready(out_ready));
  task reset_outputs;
    begin
      if ({in_ready,out_valid,out_sum,out_tag,out_error}!==0) $fatal(1,"TENSOR_RESET");
    end
  endtask
  task next_vector;
    begin
      rc=$fscanf(fd,"%d %h %h %h %h %h %h %h %h %d\n",
        format_value,next_mask,next_q,next_z,next_scale,next_activation,next_weight,
        next_tag,expected_input,error_value);
      #1;
      lane_mask=next_mask;q=next_q;z=next_z;
      scale_bf16=next_scale;activation_bf16=next_activation;weight_bf16=next_weight;
      in_tag=next_tag;
      in_valid=(rc==10); in_w4=format_value;
      if (rc!=10 && rc!=0 && rc!=-1) $fatal(1,"MALFORMED_TENSOR_VECTORS");
    end
  endtask
  always @(posedge clk or negedge clk) if (!rst_n) reset_outputs();
  initial begin
    rst_n=0; #1;reset_outputs();
    if (!$value$plusargs("vectors=%s",filename)) $fatal(1,"NO_VECTORS");
    fd=$fopen(filename,"r");if (!fd) $fatal(1,"OPEN_VECTORS");
    @(negedge clk);rst_n=1;next_vector();
    while (in_valid || queued>0 || accepted==0) begin
      out_ready=(cycles%67<49);
      @(posedge clk);
      was_enabled=!out_valid || out_ready;
      if (holding && (out_valid!==1 || {out_error,out_tag,out_sum}!==held_payload))
        $fatal(1,"TENSOR_GLOBAL_STALL");
      holding=out_valid && !out_ready;held_payload={out_error,out_tag,out_sum};
      if (holding) blocked=blocked+1;
      if (out_valid && out_ready) begin
        if (queued==0 || out_tag!==tags[front] || out_error!==errors[front] ||
            (!errors[front] && out_sum!==expected[front]))
          $fatal(1,"TENSOR_COMPARE record=%0d tag=%h expected_tag=%h got=%h expected=%h error=%b expected_error=%b",
            retired,out_tag,tags[front],out_sum,expected[front],out_error,errors[front]);
        if ((^{out_sum,out_tag,out_error})===1'bx) $fatal(1,"ACTIVE_TENSOR_XZ");
        front=front+1;queued=queued-1;retired=retired+1;
      end
      if (was_enabled) enabled=enabled+1;
      if (in_valid && in_ready) begin
        if (tail>=2048) $fatal(1,"SCOREBOARD_BOUND");
        birth[tail]=enabled;expected[tail]=expected_input;tags[tail]=in_tag;
        errors[tail]=error_value;tail=tail+1;queued=queued+1;accepted=accepted+1;
      end
      #1;
      if (queued>0 && enabled-birth[front]>=48) begin
        if (out_valid!==1 || out_tag!==tags[front])
          $fatal(1,"TENSOR_LATENCY expected=48 got=%0d",enabled-birth[front]);
      end else if (out_valid!==0) $fatal(1,"EARLY_TENSOR_OUTPUT");
      cycles=cycles+1;
      @(negedge clk);
      if (was_enabled) next_vector();
    end
    if (accepted!=retired || blocked==0) $fatal(1,"TENSOR_CONSERVATION_OR_STALL_COVERAGE");
    $fclose(fd);
    in_valid=0;out_ready=0;
    #2;rst_n=0;#1;reset_outputs();
    @(negedge clk);rst_n=1;in_valid=1;
    repeat (10) @(negedge clk);
    #2;rst_n=0;in_valid=0;#1;reset_outputs();
    @(negedge clk);rst_n=1;in_valid=1;
    repeat (10) @(negedge clk);
    flush=1;in_valid=0;#1;reset_outputs();
    @(negedge clk);flush=0;out_ready=1;
    repeat (60) begin @(posedge clk);#1;if (out_valid!==0) $fatal(1,"FLUSH_TENSOR_LEAK");end
    $display("SUMMARY tensor_cases=%0d latency=48 blocked_cycles=%0d reset_during_work=1 flush_during_work=1",
      retired,blocked);
    $finish;
  end
  initial begin repeat (500000) @(posedge clk);$fatal(1,"CYCLE_BOUND");end
endmodule
