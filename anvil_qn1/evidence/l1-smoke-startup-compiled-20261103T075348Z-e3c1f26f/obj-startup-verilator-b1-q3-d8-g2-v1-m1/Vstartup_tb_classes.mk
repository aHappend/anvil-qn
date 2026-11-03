# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vstartup_tb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vstartup_tb \
	Vstartup_tb___024root__DepSet_h9f27fa6e__0 \
	Vstartup_tb___024root__DepSet_h9f27fa6e__1 \
	Vstartup_tb___024root__DepSet_h9f27fa6e__2 \
	Vstartup_tb___024root__DepSet_h24ff9491__0 \
	Vstartup_tb___024root__DepSet_h24ff9491__1 \
	Vstartup_tb___024root__DepSet_h24ff9491__2 \
	Vstartup_tb___024root__DepSet_h24ff9491__3 \
	Vstartup_tb___024root__DepSet_h24ff9491__4 \
	Vstartup_tb___024root__DepSet_h24ff9491__5 \
	Vstartup_tb___024root__DepSet_h24ff9491__6 \
	Vstartup_tb___024root__DepSet_h24ff9491__7 \
	Vstartup_tb___024root__DepSet_h24ff9491__8 \
	Vstartup_tb___024root__DepSet_h24ff9491__9 \
	Vstartup_tb___024root__DepSet_h24ff9491__10 \
	Vstartup_tb___024root__DepSet_h24ff9491__11 \
	Vstartup_tb___024root__DepSet_h24ff9491__12 \
	Vstartup_tb___024root__DepSet_h24ff9491__13 \
	Vstartup_tb___024root__DepSet_h24ff9491__14 \
	Vstartup_tb___024root__DepSet_h24ff9491__15 \
	Vstartup_tb___024root__DepSet_h24ff9491__16 \
	Vstartup_tb___024root__DepSet_h24ff9491__17 \
	Vstartup_tb___024root__DepSet_h24ff9491__18 \
	Vstartup_tb___024root__DepSet_h24ff9491__19 \
	Vstartup_tb___024root__DepSet_h24ff9491__20 \
	Vstartup_tb___024root__DepSet_h24ff9491__21 \
	Vstartup_tb___024root__DepSet_h24ff9491__22 \
	Vstartup_tb___024root__DepSet_h24ff9491__23 \
	Vstartup_tb___024root__DepSet_h24ff9491__24 \
	Vstartup_tb___024root__DepSet_h24ff9491__25 \
	Vstartup_tb___024root__DepSet_h24ff9491__26 \
	Vstartup_tb___024root__DepSet_h24ff9491__27 \
	Vstartup_tb___024root__DepSet_h24ff9491__28 \
	Vstartup_tb___024root__DepSet_h24ff9491__29 \
	Vstartup_tb___024root__DepSet_h24ff9491__30 \
	Vstartup_tb___024root__DepSet_h24ff9491__31 \
	Vstartup_tb___024root__DepSet_h24ff9491__32 \
	Vstartup_tb___024root__DepSet_h24ff9491__33 \
	Vstartup_tb___024root__DepSet_h24ff9491__34 \
	Vstartup_tb___024root__DepSet_h24ff9491__35 \
	Vstartup_tb___024root__DepSet_h24ff9491__36 \
	Vstartup_tb___024root__DepSet_h24ff9491__37 \
	Vstartup_tb___024root__DepSet_h24ff9491__38 \
	Vstartup_tb___024root__DepSet_h24ff9491__39 \
	Vstartup_tb___024root__DepSet_h24ff9491__40 \
	Vstartup_tb___024root__DepSet_h24ff9491__41 \
	Vstartup_tb___024root__DepSet_h24ff9491__42 \
	Vstartup_tb___024root__DepSet_h24ff9491__43 \
	Vstartup_tb___024root__DepSet_h24ff9491__44 \
	Vstartup_tb_anvil_qn1_scalar__DepSet_h1b38e9af__0 \
	Vstartup_tb_anvil_qn1_scalar__DepSet_h1b38e9af__1 \
	Vstartup_tb_anvil_qn1_scalar__DepSet_ha914a3d0__0 \
	Vstartup_tb__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vstartup_tb__ConstPool_0 \
	Vstartup_tb___024root__Slow \
	Vstartup_tb___024root__DepSet_h9f27fa6e__0__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__0__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__1__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__2__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__3__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__4__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__5__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__6__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__7__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__8__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__9__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__10__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__11__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__12__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__13__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__14__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__15__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__16__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__17__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__18__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__19__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__20__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__21__Slow \
	Vstartup_tb___024root__DepSet_h24ff9491__22__Slow \
	Vstartup_tb_anvil_qn1_scalar__Slow \
	Vstartup_tb_anvil_qn1_scalar__DepSet_h1b38e9af__0__Slow \
	Vstartup_tb_anvil_qn1_scalar__DepSet_ha914a3d0__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vstartup_tb__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
