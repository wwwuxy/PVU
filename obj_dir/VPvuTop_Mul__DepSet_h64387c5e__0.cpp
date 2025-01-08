// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Compressor4to2.h"
#include "VPvuTop_Mul.h"
#include "VPvuTop__Syms.h"

VL_INLINE_OPT void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__3(VPvuTop_Mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__3\n"); );
    // Body
    vlSelf->io_pir_frac_o = ((0x100U & (((0x100U & 
                                          ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp) 
                                           << 1U)) 
                                         | (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp)) 
                                        + ((0x100U 
                                            & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp) 
                                               << 1U)) 
                                           | (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp))))
                              ? 0ULL : (0xfffffffffffffeULL 
                                        & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor->__PVT__io_sum_o 
                                            + vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor->__PVT__io_carry_o) 
                                           << 1U)));
}
