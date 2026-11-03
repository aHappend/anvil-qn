# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vanvil_qn1_tensor_array.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
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
	Vanvil_qn1_tensor_array \
	Vanvil_qn1_tensor_array___024root__DepSet_h208889c4__0 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__0 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__1 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__2 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__3 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__4 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__5 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__6 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__7 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__8 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__9 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__10 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__11 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__12 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__13 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__14 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__15 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__16 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__17 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__18 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__19 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__20 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__21 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__22 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__23 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__24 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__25 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__26 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__27 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__28 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__29 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__30 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__31 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__32 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__33 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__34 \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__35 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vanvil_qn1_tensor_array___024root__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h208889c4__0__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__0__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__1__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__2__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__3__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__4__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__5__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__6__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__7__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__8__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__9__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__10__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__11__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__12__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__13__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__14__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__15__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__16__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__17__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__18__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__19__Slow \
	Vanvil_qn1_tensor_array___024root__DepSet_h84bf73fc__20__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vanvil_qn1_tensor_array__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
