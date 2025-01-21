// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Compressor4to2.h"
#include "VPvuTop_Mul.h"
#include "VPvuTop__Syms.h"

VL_INLINE_OPT void VPvuTop_Mul___nba_sequent__TOP__PvuTop__DOT__mul__0(VPvuTop_Mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_Mul___nba_sequent__TOP__PvuTop__DOT__mul__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"mul result:\n\npir_sign_o = %b\npir_exp_o = %b\npir_frac_o = %b\n",
                   1,((vlSymsp->TOP.io_posit_i1_0 ^ vlSymsp->TOP.io_posit_i2_0) 
                      >> 0x1fU),8,((0x100U & (IData)(vlSelf->__PVT__sum))
                                    ? 0x7fU : (0xffU 
                                               & (IData)(vlSelf->__PVT__sum))),
                   56,((0x100U & (IData)(vlSelf->__PVT__sum))
                        ? 0ULL : (0xffffffffffffffULL 
                                  & (vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor->__PVT__io_carry_o 
                                     + vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor->__PVT__io_sum_o))));
    }
}
