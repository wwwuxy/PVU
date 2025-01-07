# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VPvuTop.mk for the caller.

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
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VPvuTop \
	VPvuTop___024root__DepSet_h08eac463__0 \
	VPvuTop___024root__DepSet_h6498118e__0 \
	VPvuTop___024root__DepSet_h6498118e__1 \
	VPvuTop_Mul__DepSet_h16f1ba1a__0 \
	VPvuTop_Mul__DepSet_h12f5d732__0 \
	VPvuTop_Compressor4to2__DepSet_h621f074e__0 \
	VPvuTop_Compressor4to2__DepSet_h621f074e__1 \
	VPvuTop_Compressor4to2__DepSet_h621f074e__2 \
	VPvuTop_Compressor4to2_6__DepSet_h6886782c__0 \
	VPvuTop_Compressor4to2_6__DepSet_h6886782c__1 \
	VPvuTop_Compressor4to2_6__DepSet_h6886782c__2 \
	VPvuTop_Compressor4to2_6__DepSet_h6886782c__3 \
	VPvuTop_Compressor4to2_6__DepSet_h6886782c__4 \
	VPvuTop_Compressor4to2_6__DepSet_h6886782c__5 \
	VPvuTop_Compressor4to2_6__DepSet_h6886782c__6 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VPvuTop__ConstPool_0 \
	VPvuTop___024root__Slow \
	VPvuTop___024root__DepSet_h08eac463__0__Slow \
	VPvuTop___024root__DepSet_h6498118e__0__Slow \
	VPvuTop_Mul__Slow \
	VPvuTop_Mul__DepSet_he434566a__0__Slow \
	VPvuTop_Compressor4to2__Slow \
	VPvuTop_Compressor4to2__DepSet_h49a2d95a__0__Slow \
	VPvuTop_Compressor4to2_6__Slow \
	VPvuTop_Compressor4to2_6__DepSet_h3276d08d__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VPvuTop__Trace__0 \
	VPvuTop__Trace__1 \
	VPvuTop__Trace__2 \
	VPvuTop__Trace__3 \
	VPvuTop__Trace__4 \
	VPvuTop__Trace__5 \
	VPvuTop__Trace__6 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VPvuTop__Syms \
	VPvuTop__Trace__0__Slow \
	VPvuTop__Trace__1__Slow \
	VPvuTop__Trace__2__Slow \
	VPvuTop__Trace__3__Slow \
	VPvuTop__Trace__4__Slow \
	VPvuTop__Trace__5__Slow \
	VPvuTop__Trace__6__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
