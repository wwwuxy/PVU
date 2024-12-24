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
    vlSelf->io_pir_sign_o_0 = (1U & (((IData)(vlSymsp->TOP.io_posit_i1_0) 
                                      ^ (IData)(vlSymsp->TOP.io_posit_i2_0)) 
                                     >> 0xfU));
    vlSelf->io_pir_sign_o_1 = (1U & (((IData)(vlSymsp->TOP.io_posit_i1_1) 
                                      ^ (IData)(vlSymsp->TOP.io_posit_i2_1)) 
                                     >> 0xfU));
    vlSelf->io_pir_sign_o_2 = (1U & (((IData)(vlSymsp->TOP.io_posit_i1_2) 
                                      ^ (IData)(vlSymsp->TOP.io_posit_i2_2)) 
                                     >> 0xfU));
    vlSelf->io_pir_sign_o_3 = (1U & (((IData)(vlSymsp->TOP.io_posit_i1_3) 
                                      ^ (IData)(vlSymsp->TOP.io_posit_i2_3)) 
                                     >> 0xfU));
}
