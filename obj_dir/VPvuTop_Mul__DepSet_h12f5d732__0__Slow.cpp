// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Mul.h"
#include "VPvuTop__Syms.h"

VL_ATTR_COLD void VPvuTop_Mul___stl_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__0(VPvuTop_Mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_Mul___stl_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__0\n"); );
    // Body
    vlSelf->io_pir_sign_o = ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Sign) 
                             ^ (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Sign));
}
