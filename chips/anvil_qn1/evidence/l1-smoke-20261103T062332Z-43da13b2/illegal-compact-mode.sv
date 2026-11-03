module illegal_tb;
 anvil_qn1_top #(.COMPACT(2),.NUM_LAYERS(1),.HIDDEN_SIZE(8),.INTERMEDIATE_SIZE(8),.NUM_Q_HEADS(2),.NUM_KV_HEADS(1),.HEAD_DIM(8),.VOCAB_SIZE(8),.MAX_SEQ_LEN(16),.GROUP_SIZE(8),.BANKS(1),.QUEUE_DEPTH(3)) dut();
 initial begin #5;$fatal(1,"MISSING_PARAMETER_ERROR");end
endmodule
