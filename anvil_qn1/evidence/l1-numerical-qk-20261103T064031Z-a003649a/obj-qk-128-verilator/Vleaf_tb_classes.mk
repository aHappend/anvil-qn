# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vleaf_tb.mk for the caller.

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
	Vleaf_tb \
	Vleaf_tb___024root__DepSet_hd51be7eb__0 \
	Vleaf_tb___024root__DepSet_h589f1b9e__0 \
	Vleaf_tb___024root__DepSet_h589f1b9e__1 \
	Vleaf_tb___024root__DepSet_h589f1b9e__2 \
	Vleaf_tb___024root__DepSet_h589f1b9e__3 \
	Vleaf_tb___024root__DepSet_h589f1b9e__4 \
	Vleaf_tb___024root__DepSet_h589f1b9e__5 \
	Vleaf_tb___024root__DepSet_h589f1b9e__6 \
	Vleaf_tb___024root__DepSet_h589f1b9e__7 \
	Vleaf_tb___024root__DepSet_h589f1b9e__8 \
	Vleaf_tb___024root__DepSet_h589f1b9e__9 \
	Vleaf_tb___024root__DepSet_h589f1b9e__10 \
	Vleaf_tb___024root__DepSet_h589f1b9e__11 \
	Vleaf_tb___024root__DepSet_h589f1b9e__12 \
	Vleaf_tb___024root__DepSet_h589f1b9e__13 \
	Vleaf_tb___024root__DepSet_h589f1b9e__14 \
	Vleaf_tb___024root__DepSet_h589f1b9e__15 \
	Vleaf_tb___024root__DepSet_h589f1b9e__16 \
	Vleaf_tb___024root__DepSet_h589f1b9e__17 \
	Vleaf_tb___024root__DepSet_h589f1b9e__18 \
	Vleaf_tb___024root__DepSet_h589f1b9e__19 \
	Vleaf_tb___024root__DepSet_h589f1b9e__20 \
	Vleaf_tb___024root__DepSet_h589f1b9e__21 \
	Vleaf_tb___024root__DepSet_h589f1b9e__22 \
	Vleaf_tb___024root__DepSet_h589f1b9e__23 \
	Vleaf_tb___024root__DepSet_h589f1b9e__24 \
	Vleaf_tb___024root__DepSet_h589f1b9e__25 \
	Vleaf_tb___024root__DepSet_h589f1b9e__26 \
	Vleaf_tb___024root__DepSet_h589f1b9e__27 \
	Vleaf_tb___024root__DepSet_h589f1b9e__28 \
	Vleaf_tb___024root__DepSet_h589f1b9e__29 \
	Vleaf_tb___024root__DepSet_h589f1b9e__30 \
	Vleaf_tb___024root__DepSet_h589f1b9e__31 \
	Vleaf_tb___024root__DepSet_h589f1b9e__32 \
	Vleaf_tb___024root__DepSet_h589f1b9e__33 \
	Vleaf_tb___024root__DepSet_h589f1b9e__34 \
	Vleaf_tb___024root__DepSet_h589f1b9e__35 \
	Vleaf_tb___024root__DepSet_h589f1b9e__36 \
	Vleaf_tb__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vleaf_tb__ConstPool_0 \
	Vleaf_tb___024root__Slow \
	Vleaf_tb___024root__DepSet_hd51be7eb__0__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__0__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__1__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__2__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__3__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__4__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__5__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__6__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__7__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__8__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__9__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__10__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__11__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__12__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__13__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__14__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__15__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__16__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__17__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__18__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__19__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__20__Slow \
	Vleaf_tb___024root__DepSet_h589f1b9e__21__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vleaf_tb__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
