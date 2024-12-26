// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop___024root.h"

VL_INLINE_OPT void VPvuTop___024root___ico_sequent__TOP__0(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0;
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 = 0;
    CData/*0:0*/ PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0;
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0;
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 = 0;
    // Body
    vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o 
        = (1U & (((IData)(vlSelf->io_posit_i1_0) ^ (IData)(vlSelf->io_posit_i2_0)) 
                 >> 0xfU));
    vlSelf->PvuTop__DOT____VdfgTmp_h04afc9dc__0 = (
                                                   (1U 
                                                    == (IData)(vlSelf->io_op)) 
                                                   | (2U 
                                                      == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT__add__DOT___GEN = ((1U & ((IData)(vlSelf->io_posit_i1_0) 
                                                  >> 0xfU)) 
                                           == (1U & 
                                               ((IData)(vlSelf->io_posit_i2_0) 
                                                >> 0xfU)));
    vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6 
        = (0x7fffU & ((0x8000U & (IData)(vlSelf->io_posit_i1_0))
                       ? ((IData)(1U) + (~ (IData)(vlSelf->io_posit_i1_0)))
                       : (IData)(vlSelf->io_posit_i1_0)));
    vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6 
        = (0x7fffU & ((0x8000U & (IData)(vlSelf->io_posit_i2_0))
                       ? ((IData)(1U) + (~ (IData)(vlSelf->io_posit_i2_0)))
                       : (IData)(vlSelf->io_posit_i2_0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i 
        = (0x3fffffffU & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o)
                           ? ((IData)(1U) + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp))
                           : vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp));
    vlSelf->__VdfgTmp_h4be4f099__0 = ((5U != (IData)(vlSelf->io_op)) 
                                      | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h04afc9dc__0) 
                                         | ((3U == (IData)(vlSelf->io_op)) 
                                            | (4U == (IData)(vlSelf->io_op)))));
    vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
        = (0x7fffU & ((- (IData)((1U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6) 
                                        >> 0xeU)))) 
                      ^ (IData)(vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6)));
    vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
        = (0x7fffU & ((- (IData)((1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6) 
                                        >> 0xeU)))) 
                      ^ (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)));
    if (vlSelf->__VdfgTmp_h4be4f099__0) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i = 0U;
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i = 0U;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
            = vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i;
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
            = (0x1fffffffU & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i);
    }
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i) 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i) 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 1U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i) 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 2U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i) 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7U & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 3U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i) 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 4U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i) 
                 >> 9U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 5U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i) 
                 >> 8U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 6U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i) 
                 >> 7U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 7U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i) 
                 >> 6U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 8U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i) 
                 >> 5U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 9U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i) 
                 >> 4U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 0xaU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i) 
                 >> 3U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 0xbU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i) 
                 >> 2U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 0xcU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i) 
                 >> 1U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 0xdU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 0xeU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i) 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i) 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 1U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i) 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 2U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i) 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 3U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i) 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 4U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i) 
                 >> 9U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 5U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i) 
                 >> 8U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 6U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i) 
                 >> 7U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 7U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i) 
                 >> 6U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 8U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i) 
                 >> 5U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 9U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i) 
                 >> 4U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 0xaU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i) 
                 >> 3U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 0xbU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i) 
                 >> 2U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 0xcU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i) 
                 >> 1U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 0xdU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_h30c0cece__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x1cU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffeU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x1bU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffdU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 1U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x1aU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffbU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 2U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x19U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffff7U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 3U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffefU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 4U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdfU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 5U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbfU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 6U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7fU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 7U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffeffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 8U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 9U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7ffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffefffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdfffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbfffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7fffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0xfU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffeffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x10U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x11U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x12U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7ffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x13U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fefffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x14U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdfffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x15U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbfffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x16U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7fffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x17U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1effffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x18U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dffffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x19U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bffffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x1aU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17ffffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x1bU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i);
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x1cU));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__0(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__0\n"); );
    // Init
    SData/*14:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    SData/*14:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    SData/*14:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    // Body
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffU & ((8U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes)))
                       ? ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6) 
                          << 8U) : (IData)(vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6)));
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffU & ((4U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes)))
                       ? ((IData)(PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2) 
                          << 4U) : (IData)(PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2)));
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffU & ((2U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes)))
                       ? ((IData)(PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2) 
                          << 2U) : (IData)(PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2)));
    vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
        = (0x7fffU & ((1U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes)))
                       ? ((IData)(PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2) 
                          << 1U) : (IData)(PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2)));
    vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
        = (((IData)((0U != (IData)(vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6))) 
            << 0xbU) | (0x7ffU & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o) 
                                  >> 2U)));
    vlSelf->__VdfgTmp_h35df4b14__0 = (0x1fU & (((0x4000U 
                                                 & (IData)(vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6))
                                                 ? 
                                                (0xfU 
                                                 & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes) 
                                                    - (IData)(1U)))
                                                 : 
                                                (0x10U 
                                                 | (0xfU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes)))))) 
                                               | (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o) 
                                                                >> 0xeU))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
        = ((0U != (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6))
            ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)
            : 0U);
    vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp 
        = (((IData)(vlSelf->__VdfgTmp_h35df4b14__0) 
            << 2U) | (3U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o) 
                            >> 0xdU)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__1(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__1\n"); );
    // Init
    SData/*14:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    SData/*14:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    SData/*14:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    // Body
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffU & ((8U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes)))
                       ? ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6) 
                          << 8U) : (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)));
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffU & ((4U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes)))
                       ? ((IData)(PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2) 
                          << 4U) : (IData)(PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2)));
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffU & ((2U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes)))
                       ? ((IData)(PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2) 
                          << 2U) : (IData)(PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2)));
    vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
        = (0x7fffU & ((1U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes)))
                       ? ((IData)(PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2) 
                          << 1U) : (IData)(PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_4__io_code 
        = (((IData)((0U != (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6))) 
            << 2U) | (3U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                            >> 0xbU)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800U == (0xc00U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((8U == (0xcU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = ((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
               >> 0xcU)) & (0U != (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20U == (0x30U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80U == (0xc0U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200U == (0x300U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))));
    vlSelf->__VdfgTmp_h5d8e5814__0 = (0x1fU & (((0x4000U 
                                                 & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6))
                                                 ? 
                                                (0xfU 
                                                 & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes) 
                                                    - (IData)(1U)))
                                                 : 
                                                (0x10U 
                                                 | (0xfU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes)))))) 
                                               | (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                                                >> 0xeU))))));
    vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac 
        = (((IData)((0U != (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6))) 
            << 0xbU) | (0x7ffU & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                  >> 2U)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800U == (0xa00U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                  >> 3U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = (((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                >> 0xbU)) & (0U != (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6))) 
           | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20U == (0x28U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80U == (0xa0U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200U == (0x280U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))));
    vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp 
        = (((IData)(vlSelf->__VdfgTmp_h5d8e5814__0) 
            << 2U) | (3U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                            >> 0xdU)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full 
        = (0x3ffffffffffULL & ((QData)((IData)((0xfffffffU 
                                                & VL_DIV_III(28, (IData)(0x4000U), (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac))))) 
                               * (QData)((IData)((0xfffffffU 
                                                  & ((IData)(0x8000U) 
                                                     - 
                                                     ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                      * 
                                                      (0xfffffffU 
                                                       & VL_DIV_III(28, (IData)(0x4000U), (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac))))))))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full 
        = (0x3ffffffffffULL & ((0x3ffffffffffULL & 
                                (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full 
                                 >> 0xeU)) * (QData)((IData)(
                                                             (0xfffffffU 
                                                              & ((IData)(0x8000U) 
                                                                 - 
                                                                 ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                                  * 
                                                                  (0xfffffffU 
                                                                   & (IData)(
                                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full 
                                                                              >> 0xeU))))))))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
        = (0x3ffffffffffULL & ((0x3ffffffffffULL & 
                                (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full 
                                 >> 0xeU)) * (QData)((IData)(
                                                             (0xfffffffU 
                                                              & ((IData)(0x8000U) 
                                                                 - 
                                                                 ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                                  * 
                                                                  (0xfffffffU 
                                                                   & (IData)(
                                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full 
                                                                              >> 0xeU))))))))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x8000ULL == (0xc000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000ULL == (0x30000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000ULL == (0x30000000ULL 
                                     & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000ULL == (0x300000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000ULL == (0xc00000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000ULL == (0x3000000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000ULL == (0xc0000000ULL 
                                     & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000000ULL == (0x300000000ULL 
                                      & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000000ULL == (0xc00000000ULL 
                                      & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000000ULL == (0x3000000000ULL 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000000ULL == (0xc000000000ULL 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000000ULL == (0x30000000000ULL 
                                        & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                          >> 0xfU)) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000ULL == (0x28000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000ULL == (0x28000000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000ULL == (0xa0000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000ULL == (0x280000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000ULL == (0xa00000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000ULL == (0x2800000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000ULL == (0xa0000000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000000ULL == (0x280000000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000000ULL == (0xa00000000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000000ULL == (0x2800000000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000000ULL == (0xa000000000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000000ULL == (0x28000000000ULL 
                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000ULL == (0xa000000ULL & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__2(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__2\n"); );
    // Init
    QData/*63:0*/ __Vtemp_h30ed196b__0;
    // Body
    __Vtemp_h30ed196b__0 = (0xe00000000000000ULL | 
                            (((QData)((IData)(((0x1000U 
                                                & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))
                                                ? 0xcU
                                                : 0xdU))) 
                              << 0x34U) | (((QData)((IData)(
                                                            ((0x400U 
                                                              & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))
                                                              ? 0xaU
                                                              : 0xbU))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((0x100U 
                                                                 & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))
                                                                 ? 8U
                                                                 : 9U))) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  ((0x40U 
                                                                    & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))
                                                                    ? 6U
                                                                    : 7U))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((0x10U 
                                                                       & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))
                                                                       ? 4U
                                                                       : 5U))) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        ((4U 
                                                                          & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))
                                                                          ? 2U
                                                                          : 3U))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((((1U 
                                                                             & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))
                                                                             ? 0U
                                                                             : 1U) 
                                                                           << 0x1cU) 
                                                                          | ((0xf000000U 
                                                                              & (((0x2000U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x34U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x38U))) 
                                                                                << 0x18U)) 
                                                                             | ((0xf00000U 
                                                                                & (((0x800U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x2cU))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x30U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & (((0x200U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x24U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x28U))) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & (((0x80U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x1cU))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x20U))) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & (((0x20U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x18U))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x10U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & ((2U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 8U))))))))))))))))))));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf000000000000000ULL & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes) 
           | __Vtemp_h30ed196b__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__3(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__3\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h957e97dd__0;
    // Body
    __Vtemp_h957e97dd__0 = ((0x4000U & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
                            | (((IData)((0U != (0x3000U 
                                                & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)))) 
                                << 0xdU) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xc00U 
                                                       & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)))) 
                                             << 0xcU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x300U 
                                                          & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)))) 
                                                << 0xbU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xc0U 
                                                             & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)))) 
                                                   << 0xaU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0x30U 
                                                                & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)))) 
                                                      << 9U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)))) 
                                                         << 8U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)))) 
                                                            << 7U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x6000U 
                                                                         & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                               << 6U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1800U 
                                                                            & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                  << 5U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x600U 
                                                                               & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                     << 4U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                        << 3U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                           << 2U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                              << 1U) 
                                                                             | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000U & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)) 
           | __Vtemp_h957e97dd__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__4(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__4\n"); );
    // Init
    QData/*63:0*/ __Vtemp_hebe3c189__0;
    // Body
    __Vtemp_hebe3c189__0 = (0xe00000000000000ULL | 
                            (((QData)((IData)(((0x1000U 
                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))
                                                ? 0xcU
                                                : 0xdU))) 
                              << 0x34U) | (((QData)((IData)(
                                                            ((0x400U 
                                                              & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))
                                                              ? 0xaU
                                                              : 0xbU))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((0x100U 
                                                                 & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))
                                                                 ? 8U
                                                                 : 9U))) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  ((0x40U 
                                                                    & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))
                                                                    ? 6U
                                                                    : 7U))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((0x10U 
                                                                       & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))
                                                                       ? 4U
                                                                       : 5U))) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        ((4U 
                                                                          & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))
                                                                          ? 2U
                                                                          : 3U))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((((1U 
                                                                             & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))
                                                                             ? 0U
                                                                             : 1U) 
                                                                           << 0x1cU) 
                                                                          | ((0xf000000U 
                                                                              & (((0x2000U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x34U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x38U))) 
                                                                                << 0x18U)) 
                                                                             | ((0xf00000U 
                                                                                & (((0x800U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x2cU))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x30U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & (((0x200U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x24U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x28U))) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & (((0x80U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x1cU))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x20U))) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & (((0x20U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x18U))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x10U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & ((2U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 8U))))))))))))))))))));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf000000000000000ULL & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes) 
           | __Vtemp_hebe3c189__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__5(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__5\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h9e281d98__0;
    // Body
    __Vtemp_h9e281d98__0 = ((0x4000U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)) 
                            | (((IData)((0U != (0x3000U 
                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)))) 
                                << 0xdU) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xc00U 
                                                       & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)))) 
                                             << 0xcU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x300U 
                                                          & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)))) 
                                                << 0xbU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xc0U 
                                                             & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)))) 
                                                   << 0xaU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0x30U 
                                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)))) 
                                                      << 9U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)))) 
                                                         << 8U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)))) 
                                                            << 7U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x6000U 
                                                                         & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                               << 6U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1800U 
                                                                            & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                  << 5U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x600U 
                                                                               & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                     << 4U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                        << 3U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                           << 2U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                              << 1U) 
                                                                             | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)) 
           | __Vtemp_h9e281d98__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__6(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__6\n"); );
    // Init
    IData/*31:0*/ __Vtemp_hb087112f__0;
    // Body
    __Vtemp_hb087112f__0 = ((0x20000000U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                            << 1U)) 
                            | (((IData)((0U != (0xc000000U 
                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1cU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1bU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1aU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0x300000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x15U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x14U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x13U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x12U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x11U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x10U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_hb087112f__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__7(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__7\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h912a9201__0;
    VlWide<3>/*95:0*/ __Vtemp_h2e3d1e64__0;
    // Body
    __Vtemp_h912a9201__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h912a9201__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h2e3d1e64__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h912a9201__0[0U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h912a9201__0[1U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h2e3d1e64__0[2U])))));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x380000U | ((0xf8000000U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]) 
                        | ((((0x4000000U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                              ? 0x1aU : 0x1bU) << 0xcU) 
                           | ((((0x1000000U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                 ? 0x18U : 0x19U) << 7U) 
                              | ((((0x400000U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                    ? 0x16U : 0x17U) 
                                  << 2U) | (((0x100000U 
                                              & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0x14U
                                              : 0x15U) 
                                            >> 3U))))));
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 
        = (0x3fffffffU & ((0x10U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                              << 0x10U) : vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i));
    vlSelf->__VdfgTmp_hebc8eb6b__0 = ((0U == (0x1fU 
                                              & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                       ? ((0xe0U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((((IData)(1U) 
                                                             - 
                                                             vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            - (IData)(1U)) 
                                                           >> 4U)))) 
                                            << 5U)) 
                                          | (0x1fU 
                                             & (((IData)(1U) 
                                                 - 
                                                 vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                - (IData)(1U))))
                                       : ((0xe0U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((- 
                                                            vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                           >> 4U)))) 
                                            << 5U)) 
                                          | (0x1fU 
                                             & (- vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))));
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 
        = (0x3fffffffU & ((8U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 
        = (0x3fffffffU & ((4U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
        = (0x3fffffffU & ((2U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o 
        = (0x3fffffffU & ((1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__8(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__8\n"); );
    // Init
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount1_T;
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T = 0;
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount2_T;
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T = 0;
    CData/*0:0*/ PvuTop__DOT__fracalign_1__DOT___GEN;
    PvuTop__DOT__fracalign_1__DOT___GEN = 0;
    CData/*0:0*/ PvuTop__DOT__fracalign_1__DOT___GEN_1;
    PvuTop__DOT__fracalign_1__DOT___GEN_1 = 0;
    CData/*0:0*/ PvuTop__DOT__fracalign_1__DOT___GEN_2;
    PvuTop__DOT__fracalign_1__DOT___GEN_2 = 0;
    SData/*13:0*/ PvuTop__DOT__fracalign_1__DOT____VdfgTmp_hbb437e3c__0;
    PvuTop__DOT__fracalign_1__DOT____VdfgTmp_hbb437e3c__0 = 0;
    SData/*13:0*/ PvuTop__DOT__fracalign_1__DOT____VdfgTmp_he7ed29e3__0;
    PvuTop__DOT__fracalign_1__DOT____VdfgTmp_he7ed29e3__0 = 0;
    IData/*27:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14b30c59__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14b30c59__0 = 0;
    IData/*27:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h154455bf__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h154455bf__0 = 0;
    IData/*27:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a391ba__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a391ba__0 = 0;
    IData/*27:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14b30c59__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14b30c59__0 = 0;
    IData/*27:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h154455bf__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h154455bf__0 = 0;
    QData/*55:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0;
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0;
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0;
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 = 0;
    // Body
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x7fffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                      ^ ((4U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))
                          ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)
                          : ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 1U) : 0U))));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h154455bf__0 
        = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod) 
            << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                        << 0xaU));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x7fffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x1000U == 
                                         (0x1800U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                | (IData)((0x800U == 
                                           (0x1800U 
                                            & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))
                          ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)
                          : ((1U & (((~ (IData)((0U 
                                                 != (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)))) 
                                     & (IData)((0x1800U 
                                                == 
                                                (0x1800U 
                                                 & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))) 
                                    | ((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                           >> 0xbU)) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 1U) : 0U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x7fffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x10U == (0x18U 
                                                   & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                | (IData)((8U == (0x18U 
                                                  & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))
                          ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)
                          : ((1U & ((IData)((0x18U 
                                             == (0x38U 
                                                 & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                    | ((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                           >> 3U)) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 1U) : 0U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x7fffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x40U == (0x60U 
                                                   & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                | (IData)((0x20U == 
                                           (0x60U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))
                          ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)
                          : ((1U & ((IData)((0x60U 
                                             == (0xe0U 
                                                 & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                    | ((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                           >> 5U)) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 1U) : 0U))));
    vlSelf->__VdfgTmp_h2b13085d__0 = ((0x7fff00U & 
                                       (((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                         ^ ((1U & ((IData)(
                                                           (0x400U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                                   | (IData)(
                                                             (0x200U 
                                                              == 
                                                              (0x600U 
                                                               & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))
                                             ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)
                                             : ((1U 
                                                 & ((IData)(
                                                            (0x600U 
                                                             == 
                                                             (0xe00U 
                                                              & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                                         >> 9U)) 
                                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                 << 1U)
                                                 : 0U))) 
                                        << 8U)) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                   << 6U));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x7fffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                      ^ ((1U & ((IData)((0x100U == 
                                         (0x180U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                | (IData)((0x80U == 
                                           (0x180U 
                                            & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))
                          ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)
                          : ((1U & ((IData)((0x180U 
                                             == (0x380U 
                                                 & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                    | ((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                           >> 7U)) 
                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 1U) : 0U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum 
        = (0xffU & (((0x80U & ((IData)(vlSelf->__VdfgTmp_h35df4b14__0) 
                               << 3U)) | (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)) 
                    + ((0x80U & ((IData)(vlSelf->__VdfgTmp_h5d8e5814__0) 
                                 << 3U)) | (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp))));
    vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp 
        = (VL_GTS_III(7, (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp), (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp))
            ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)
            : (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                            >> 0xeU)))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 0xeU) : ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                 << 0xfU)
                                              : 0U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10000ULL 
                                             == (0x18000ULL 
                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                    | (IData)((0x8000ULL 
                                               == (0x18000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 0xeU) : ((1U & 
                                              ((IData)(
                                                       (0x18000ULL 
                                                        == 
                                                        (0x38000ULL 
                                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                               | ((~ (IData)(
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                              >> 0xfU))) 
                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                 << 0xfU)
                                              : 0U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40000ULL 
                                             == (0x60000ULL 
                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                    | (IData)((0x20000ULL 
                                               == (0x60000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 0xeU) : ((1U & 
                                              ((IData)(
                                                       (0x60000ULL 
                                                        == 
                                                        (0xe0000ULL 
                                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                               | ((~ (IData)(
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                              >> 0x11U))) 
                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                 << 0xfU)
                                              : 0U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100000ULL 
                                             == (0x180000ULL 
                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                    | (IData)((0x80000ULL 
                                               == (0x180000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 0xeU) : ((1U & 
                                              ((IData)(
                                                       (0x180000ULL 
                                                        == 
                                                        (0x380000ULL 
                                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                               | ((~ (IData)(
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                              >> 0x13U))) 
                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                 << 0xfU)
                                              : 0U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400000ULL 
                                             == (0x600000ULL 
                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                    | (IData)((0x200000ULL 
                                               == (0x600000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 0xeU) : ((1U & 
                                              ((IData)(
                                                       (0x600000ULL 
                                                        == 
                                                        (0xe00000ULL 
                                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                               | ((~ (IData)(
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                              >> 0x15U))) 
                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                 << 0xfU)
                                              : 0U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000000ULL 
                                             == (0x1800000ULL 
                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                    | (IData)((0x800000ULL 
                                               == (0x1800000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 0xeU) : ((1U & 
                                              ((IData)(
                                                       (0x1800000ULL 
                                                        == 
                                                        (0x3800000ULL 
                                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                               | ((~ (IData)(
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                              >> 0x17U))) 
                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                 << 0xfU)
                                              : 0U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40000000ULL 
                                             == (0x60000000ULL 
                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                    | (IData)((0x20000000ULL 
                                               == (0x60000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 0xeU) : ((1U & 
                                              ((IData)(
                                                       (0x60000000ULL 
                                                        == 
                                                        (0xe0000000ULL 
                                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                               | ((~ (IData)(
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                              >> 0x1dU))) 
                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                 << 0xfU)
                                              : 0U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100000000ULL 
                                             == (0x180000000ULL 
                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                    | (IData)((0x80000000ULL 
                                               == (0x180000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 0xeU) : ((1U & 
                                              ((IData)(
                                                       (0x180000000ULL 
                                                        == 
                                                        (0x380000000ULL 
                                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                               | ((~ (IData)(
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                              >> 0x1fU))) 
                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                 << 0xfU)
                                              : 0U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400000000ULL 
                                             == (0x600000000ULL 
                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                    | (IData)((0x200000000ULL 
                                               == (0x600000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 0xeU) : ((1U & 
                                              ((IData)(
                                                       (0x600000000ULL 
                                                        == 
                                                        (0xe00000000ULL 
                                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                               | ((~ (IData)(
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                              >> 0x21U))) 
                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                 << 0xfU)
                                              : 0U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000000000ULL 
                                             == (0x1800000000ULL 
                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                    | (IData)((0x800000000ULL 
                                               == (0x1800000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 0xeU) : ((1U & 
                                              ((IData)(
                                                       (0x1800000000ULL 
                                                        == 
                                                        (0x3800000000ULL 
                                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                               | ((~ (IData)(
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                              >> 0x23U))) 
                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                 << 0xfU)
                                              : 0U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x4000000000ULL 
                                             == (0x6000000000ULL 
                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                    | (IData)((0x2000000000ULL 
                                               == (0x6000000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 0xeU) : ((1U & 
                                              ((IData)(
                                                       (0x6000000000ULL 
                                                        == 
                                                        (0xe000000000ULL 
                                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                               | ((~ (IData)(
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                              >> 0x25U))) 
                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                 << 0xfU)
                                              : 0U))));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(((1U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                            >> 0x29U)))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 0xeU) : 0U))) << 0x1cU) 
           | (QData)((IData)(((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                              << 0x1aU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10000000000ULL 
                                             == (0x18000000000ULL 
                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                    | (IData)((0x8000000000ULL 
                                               == (0x18000000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 0xeU) : ((1U & 
                                              ((IData)(
                                                       (0x18000000000ULL 
                                                        == 
                                                        (0x38000000000ULL 
                                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                               | ((~ (IData)(
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                              >> 0x27U))) 
                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                 << 0xfU)
                                              : 0U))));
    vlSelf->__VdfgTmp_h2ac9f9df__0 = (((QData)((IData)(
                                                       (0x1fffffffU 
                                                        & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           ((1U 
                                                             & ((IData)(
                                                                        (0x10000000ULL 
                                                                         == 
                                                                         (0x18000000ULL 
                                                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                                                | (IData)(
                                                                          (0x8000000ULL 
                                                                           == 
                                                                           (0x18000000ULL 
                                                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                                                             ? 
                                                            ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                             << 0xeU)
                                                             : 
                                                            ((1U 
                                                              & ((IData)(
                                                                         (0x18000000ULL 
                                                                          == 
                                                                          (0x38000000ULL 
                                                                           & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                                                 | ((~ (IData)(
                                                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                                                >> 0x1bU))) 
                                                                    & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                              ? 
                                                             ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                              << 0xfU)
                                                              : 0U)))))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x4000000ULL 
                                             == (0x6000000ULL 
                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                    | (IData)((0x2000000ULL 
                                               == (0x6000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 0xeU) : ((1U & 
                                              ((IData)(
                                                       (0x6000000ULL 
                                                        == 
                                                        (0xe000000ULL 
                                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                               | ((~ (IData)(
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                              >> 0x19U))) 
                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                 << 0xfU)
                                              : 0U))));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14b30c59__0 
        = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                        << 8U));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14b30c59__0 
        = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod) 
            << 2U) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h154455bf__0 
        = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                      << 2U));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a391ba__0 
        = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod) 
            << 6U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                      << 4U));
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp) 
                    - (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)));
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp) 
                    - (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (QData)((IData)(((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                            << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod)) 
            << 4U) | (QData)((IData)(((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                      << 2U))));
    vlSelf->__VdfgTmp_h7861aef0__0 = (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod)) 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod)) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod)) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod)) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod)) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod)) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__VdfgTmp_h9e108f72__0 = (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod)) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U))));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod)) 
            << 0x18U) | (QData)((IData)(((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                         << 0x16U))));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod)) 
            << 0x1aU) | (QData)((IData)(((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                         << 0x18U))));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod)) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__VdfgTmp_h76900ab1__0 = (vlSelf->__VdfgTmp_h2b13085d__0 
                                      ^ (PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14b30c59__0 
                                         ^ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h154455bf__0));
    vlSelf->__VdfgTmp_h1ba49810__0 = ((vlSelf->__VdfgTmp_h2b13085d__0 
                                       & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14b30c59__0) 
                                      | ((PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h14b30c59__0 
                                          | vlSelf->__VdfgTmp_h2b13085d__0) 
                                         & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h154455bf__0));
    vlSelf->__VdfgTmp_h6b6721ad__0 = ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                      ^ (PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14b30c59__0 
                                         ^ (PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h154455bf__0 
                                            ^ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a391ba__0)));
    vlSelf->__VdfgTmp_h3bbcfaf3__0 = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14b30c59__0) 
                                      | ((PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14b30c59__0 
                                          & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h154455bf__0) 
                                         | ((PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h154455bf__0 
                                             & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a391ba__0) 
                                            | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h154455bf__0) 
                                               | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                   | PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h14b30c59__0) 
                                                  & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a391ba__0)))));
    PvuTop__DOT__fracalign_1__DOT____VdfgTmp_hbb437e3c__0 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T))))
            : 0U);
    PvuTop__DOT__fracalign_1__DOT____VdfgTmp_he7ed29e3__0 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T))))
            : 0U);
    PvuTop__DOT__fracalign_1__DOT___GEN = ((~ (IData)(
                                                      (0U 
                                                       != (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T)))) 
                                           & (0U != (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T)));
    PvuTop__DOT__fracalign_1__DOT___GEN_1 = ((~ (IData)(
                                                        (0U 
                                                         != (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T)))) 
                                             & (0U 
                                                != (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T)));
    PvuTop__DOT__fracalign_1__DOT___GEN_2 = (1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T)))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T))))));
    vlSelf->__VdfgTmp_h4535eaf9__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h2d675acb__0 = (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          | (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h1cd9f180__0 = (vlSelf->__VdfgTmp_h2ac9f9df__0 
                                      ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_hd62918e5__0 = ((vlSelf->__VdfgTmp_h2ac9f9df__0 
                                       & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h2ac9f9df__0 
                                                & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h2ac9f9df__0 
                                                   | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_h764cf51b__0 = (vlSelf->__VdfgTmp_h9e108f72__0 
                                      ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_h27cac1ce__0 = ((vlSelf->__VdfgTmp_h9e108f72__0 
                                       & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h9e108f72__0 
                                                & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h9e108f72__0 
                                                   | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_h692db4f3__0 = (vlSelf->__VdfgTmp_h7861aef0__0 
                                      ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_h509c563d__0 = ((vlSelf->__VdfgTmp_h7861aef0__0 
                                       & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h7861aef0__0 
                                                & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h7861aef0__0 
                                                   | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    if (PvuTop__DOT__fracalign_1__DOT___GEN) {
        vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align 
            = vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac;
        vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align 
            = PvuTop__DOT__fracalign_1__DOT____VdfgTmp_he7ed29e3__0;
    } else {
        vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align 
            = ((IData)(PvuTop__DOT__fracalign_1__DOT___GEN_1)
                ? (IData)(PvuTop__DOT__fracalign_1__DOT____VdfgTmp_hbb437e3c__0)
                : ((IData)(PvuTop__DOT__fracalign_1__DOT___GEN_2)
                    ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)
                    : (IData)(PvuTop__DOT__fracalign_1__DOT____VdfgTmp_hbb437e3c__0)));
        vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align 
            = (((IData)(PvuTop__DOT__fracalign_1__DOT___GEN_1) 
                | (IData)(PvuTop__DOT__fracalign_1__DOT___GEN_2))
                ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)
                : (IData)(PvuTop__DOT__fracalign_1__DOT____VdfgTmp_he7ed29e3__0));
    }
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h1cd9f180__0 & vlSelf->__VdfgTmp_hd62918e5__0) 
           | ((vlSelf->__VdfgTmp_hd62918e5__0 & vlSelf->__VdfgTmp_h764cf51b__0) 
              | ((vlSelf->__VdfgTmp_h764cf51b__0 & vlSelf->__VdfgTmp_h27cac1ce__0) 
                 | ((vlSelf->__VdfgTmp_h1cd9f180__0 
                     & vlSelf->__VdfgTmp_h764cf51b__0) 
                    | ((vlSelf->__VdfgTmp_h1cd9f180__0 
                        | vlSelf->__VdfgTmp_hd62918e5__0) 
                       & vlSelf->__VdfgTmp_h27cac1ce__0)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h1cd9f180__0 ^ (vlSelf->__VdfgTmp_hd62918e5__0 
                                             ^ (vlSelf->__VdfgTmp_h764cf51b__0 
                                                ^ vlSelf->__VdfgTmp_h27cac1ce__0)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h4535eaf9__0 & vlSelf->__VdfgTmp_h2d675acb__0) 
           | ((vlSelf->__VdfgTmp_h2d675acb__0 & vlSelf->__VdfgTmp_h692db4f3__0) 
              | ((vlSelf->__VdfgTmp_h692db4f3__0 & vlSelf->__VdfgTmp_h509c563d__0) 
                 | ((vlSelf->__VdfgTmp_h4535eaf9__0 
                     & vlSelf->__VdfgTmp_h692db4f3__0) 
                    | ((vlSelf->__VdfgTmp_h4535eaf9__0 
                        | vlSelf->__VdfgTmp_h2d675acb__0) 
                       & vlSelf->__VdfgTmp_h509c563d__0)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h4535eaf9__0 ^ (vlSelf->__VdfgTmp_h2d675acb__0 
                                             ^ (vlSelf->__VdfgTmp_h692db4f3__0 
                                                ^ vlSelf->__VdfgTmp_h509c563d__0)));
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater = 
        ((IData)(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align) 
         > (IData)(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align));
    vlSelf->PvuTop__DOT__add__DOT__sum = (0x7fffU & 
                                          ((IData)(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align) 
                                           + (IData)(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align)));
    vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
        = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h04afc9dc__0)
            ? 0U : (0x3fffffffU & ((3U == (IData)(vlSelf->io_op))
                                    ? ((0x80U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                        ? 0U : ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                                  ^ 
                                                  (vlSelf->__VdfgTmp_h76900ab1__0 
                                                   ^ vlSelf->__VdfgTmp_h1ba49810__0))) 
                                                + (
                                                   (vlSelf->__VdfgTmp_h6b6721ad__0 
                                                    & vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                                   | ((vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                                       & vlSelf->__VdfgTmp_h76900ab1__0) 
                                                      | ((vlSelf->__VdfgTmp_h76900ab1__0 
                                                          & vlSelf->__VdfgTmp_h1ba49810__0) 
                                                         | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                             & vlSelf->__VdfgTmp_h76900ab1__0) 
                                                            | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                                | vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                                               & vlSelf->__VdfgTmp_h1ba49810__0)))))))
                                    : ((4U == (IData)(vlSelf->io_op))
                                        ? (0xfffffffU 
                                           & (IData)(
                                                     (0xfffffffULL 
                                                      & (((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                           ^ 
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                            ^ 
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                             ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                          + 
                                                          ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                           | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                               & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                              | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                 | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                     & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                    | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                        | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                         >> 0xeU))))
                                        : 0U))));
    vlSelf->__VdfgTmp_h132b72d8__0 = (0x3fffU & ((IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align) 
                                                  - (IData)(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align))
                                                  : 
                                                 ((IData)(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align) 
                                                  - (IData)(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align))));
    vlSelf->PvuTop__DOT__add__DOT__io_overflow = ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                                  & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                                                     >> 0xeU));
    vlSelf->__VdfgTmp_hf89a3cfa__0 = (0x3fffU & ((0x4000U 
                                                  & (IData)(vlSelf->PvuTop__DOT__add__DOT__sum))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                                                  >> 1U)
                                                  : (IData)(vlSelf->PvuTop__DOT__add__DOT__sum)));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x1dU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffeU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x1cU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffdU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 1U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x1bU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffbU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 2U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x1aU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffff7U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 3U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x19U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffefU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 4U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffdfU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 5U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffbfU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 6U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffff7fU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 7U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffeffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 8U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffdffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 9U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffbffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffff7ffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffefffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffdfffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffbfffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fff7fffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xfU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffeffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x10U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffdffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x11U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffbffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x12U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ff7ffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x13U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fefffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x14U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fdfffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x15U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fbfffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x16U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3f7fffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x17U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3effffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x18U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3dffffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x19U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3bffffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x1aU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x37ffffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x1bU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x2fffffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x1cU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i);
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x1dU));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
        = ((1U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                              ? (IData)(vlSelf->__VdfgTmp_hf89a3cfa__0)
                                              : (IData)(vlSelf->__VdfgTmp_h132b72d8__0))
            : 0U);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
        = (((2U != (IData)(vlSelf->io_op)) | (1U == (IData)(vlSelf->io_op)))
            ? 0U : ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                     ? (IData)(vlSelf->__VdfgTmp_h132b72d8__0)
                     : (IData)(vlSelf->__VdfgTmp_hf89a3cfa__0)));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffeU & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffdU & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 1U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffbU & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 2U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ff7U & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 3U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fefU & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 4U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fdfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 5U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fbfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 6U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3f7fU & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 7U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3effU & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 8U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3dffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 9U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3bffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x37ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x2fffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffeU & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffdU & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 1U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffbU & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 2U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ff7U & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 3U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fefU & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 4U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fdfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 5U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fbfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 6U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3f7fU & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 7U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3effU & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 8U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3dffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 9U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3bffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x37ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i) 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x2fffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h896ed7ed__0) 
              << 0xdU));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__9(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__9\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c39e73a__0;
    PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c39e73a__0 = 0;
    QData/*43:0*/ PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    QData/*43:0*/ PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    QData/*43:0*/ PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    // Body
    PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c39e73a__0 
        = ((5U == (IData)(vlSelf->io_op)) & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                             & ((IData)(vlSelf->__VdfgTmp_hebc8eb6b__0) 
                                                >> 6U)));
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0xfU & (((IData)(PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c39e73a__0)
                     ? ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                        ? ((1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                            ? (~ ((IData)(vlSelf->__VdfgTmp_hebc8eb6b__0) 
                                                  >> 2U))
                                            : 0xfU)
                                        : 0xfU)) : 
                    ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                     ? ((1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                         ? ((IData)(vlSelf->__VdfgTmp_hebc8eb6b__0) 
                                            >> 2U) : 0U)
                                     : 0U))) - (IData)(1U)));
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i 
        = (((QData)((IData)(((IData)(PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c39e73a__0)
                              ? 1U : 0x7ffeU))) << 0x1dU) 
           | (QData)((IData)(((((5U == (IData)(vlSelf->io_op))
                                 ? ((1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                     ? (3U & (IData)(vlSelf->__VdfgTmp_hebc8eb6b__0))
                                     : 0U) : 0U) << 0x1bU) 
                              | (((5U == (IData)(vlSelf->io_op))
                                   ? ((0xffeU & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o 
                                                 >> 0x11U)) 
                                      | (0U != (0x1ffffU 
                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o)))
                                   : 0U) << 0xfU)))));
    PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0xfffffffffffULL & ((8U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i 
                                   << 8U) : vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i));
    PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0xfffffffffffULL & ((4U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2 
                                   << 4U) : PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0xfffffffffffULL & ((2U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2 
                                   << 2U) : PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o 
        = (0xfffffffffffULL & ((1U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2 
                                   << 1U) : PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->io_posit_dot_o = ((5U == (IData)(vlSelf->io_op))
                               ? (((5U == (IData)(vlSelf->io_op)) 
                                   & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o 
                                      >> 0x1dU)) ? 
                                  (0x7fffU & ((IData)(
                                                      (vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o 
                                                       >> 0xfU)) 
                                              + (1U 
                                                 & ((IData)(
                                                            (vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o 
                                                             >> 0xeU)) 
                                                    & (IData)(
                                                              (0ULL 
                                                               != 
                                                               (0xbfffULL 
                                                                & vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o)))))))
                                   : 0U) : 0U);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__10(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__10\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h1649c375__0;
    // Body
    __Vtemp_h1649c375__0 = (((IData)((0U != (0x30000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                             << 0x1dU) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                           << 0x1cU) 
                                          | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1bU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1aU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0x300000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x15U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x14U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x13U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x12U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x11U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x10U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h1649c375__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__11(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__11\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h40f8e84a__0;
    VlWide<3>/*95:0*/ __Vtemp_hc01cdb27__0;
    // Body
    __Vtemp_h40f8e84a__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h40f8e84a__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hc01cdb27__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h40f8e84a__0[0U];
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h40f8e84a__0[1U];
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hc01cdb27__0[2U])))));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | ((((0x10000000U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                 ? 0x1cU : 0x1dU) << 0x11U) | ((((0x4000000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x1aU
                                                  : 0x1bU) 
                                                << 0xcU) 
                                               | ((((0x1000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0x18U
                                                     : 0x19U) 
                                                   << 7U) 
                                                  | ((((0x400000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0x16U
                                                        : 0x17U) 
                                                      << 2U) 
                                                     | (((0x100000U 
                                                          & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                          ? 0x14U
                                                          : 0x15U) 
                                                        >> 3U))))));
    PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_3_T_2 
        = (0x3fffffffU & ((0x10U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i 
                              << 0x10U) : vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i));
    PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_2_T_2 
        = (0x3fffffffU & ((8U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_1_T_2 
        = (0x3fffffffU & ((4U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_0_T_2 
        = (0x3fffffffU & ((2U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
        = (0x3fffffffU & ((1U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__frac_norm__DOT__shifter__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__12(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__12\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h13e8dee9__0;
    // Body
    __Vtemp_h13e8dee9__0 = (((IData)((0U != (0x3000U 
                                             & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                             << 0xdU) | (((IData)((0U 
                                                   != 
                                                   (0xc00U 
                                                    & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                          << 0xcU) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                             << 0xbU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0xc0U 
                                                          & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                << 0xaU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x30U 
                                                             & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0xcU 
                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0x6000U 
                                                                      & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x1800U 
                                                                         & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x600U 
                                                                            & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x180U 
                                                                               & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                           << 1U) 
                                                                          | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000U & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)) 
           | __Vtemp_h13e8dee9__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__13(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__13\n"); );
    // Init
    SData/*13:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2 = 0;
    SData/*13:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2 = 0;
    SData/*13:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2 = 0;
    QData/*63:0*/ __Vtemp_hb20c7cfc__0;
    // Body
    __Vtemp_hb20c7cfc__0 = (((QData)((IData)(((0x1000U 
                                               & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                               ? 0xcU
                                               : 0xdU))) 
                             << 0x34U) | (((QData)((IData)(
                                                           ((0x400U 
                                                             & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                                             ? 0xaU
                                                             : 0xbU))) 
                                           << 0x30U) 
                                          | (((QData)((IData)(
                                                              ((0x100U 
                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                                                ? 8U
                                                                : 9U))) 
                                              << 0x2cU) 
                                             | (((QData)((IData)(
                                                                 ((0x40U 
                                                                   & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                                                   ? 6U
                                                                   : 7U))) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    ((0x10U 
                                                                      & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                                                      ? 4U
                                                                      : 5U))) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       ((4U 
                                                                         & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                                                         ? 2U
                                                                         : 3U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((((1U 
                                                                            & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                                                            ? 0U
                                                                            : 1U) 
                                                                          << 0x1cU) 
                                                                         | ((0xf000000U 
                                                                             & (((0x2000U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x34U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x38U))) 
                                                                                << 0x18U)) 
                                                                            | ((0xf00000U 
                                                                                & (((0x800U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x2cU))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x30U))) 
                                                                                << 0x14U)) 
                                                                               | ((0xf0000U 
                                                                                & (((0x200U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x24U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x28U))) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & (((0x80U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x1cU))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x20U))) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & (((0x20U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x18U))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x10U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & ((2U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 8U)))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf000000000000000ULL & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes) 
           | __Vtemp_hb20c7cfc__0);
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2 
        = (0x3fffU & ((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                     >> 3U))) ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i) 
                                                 << 8U)
                       : (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i)));
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2 
        = (0x3fffU & ((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                     >> 2U))) ? ((IData)(PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2) 
                                                 << 4U)
                       : (IData)(PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2)));
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2 
        = (0x3fffU & ((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                     >> 1U))) ? ((IData)(PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2) 
                                                 << 2U)
                       : (IData)(PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2)));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o 
        = (0x3fffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes))
                       ? ((IData)(PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2) 
                          << 1U) : (IData)(PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__14(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__14\n"); );
    // Init
    SData/*31:0*/ __Vtemp_he9886ff1__0;
    // Body
    __Vtemp_he9886ff1__0 = (((IData)((0U != (0x3000U 
                                             & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                             << 0xdU) | (((IData)((0U 
                                                   != 
                                                   (0xc00U 
                                                    & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                          << 0xcU) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                             << 0xbU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0xc0U 
                                                          & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                << 0xaU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x30U 
                                                             & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0xcU 
                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0x6000U 
                                                                      & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x1800U 
                                                                         & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x600U 
                                                                            & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x180U 
                                                                               & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                           << 1U) 
                                                                          | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000U & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)) 
           | __Vtemp_he9886ff1__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__15(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__15\n"); );
    // Init
    SData/*13:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2 = 0;
    SData/*13:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2 = 0;
    SData/*13:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2 = 0;
    QData/*63:0*/ __Vtemp_h679b4071__0;
    // Body
    __Vtemp_h679b4071__0 = (((QData)((IData)(((0x1000U 
                                               & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                               ? 0xcU
                                               : 0xdU))) 
                             << 0x34U) | (((QData)((IData)(
                                                           ((0x400U 
                                                             & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                                             ? 0xaU
                                                             : 0xbU))) 
                                           << 0x30U) 
                                          | (((QData)((IData)(
                                                              ((0x100U 
                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                                                ? 8U
                                                                : 9U))) 
                                              << 0x2cU) 
                                             | (((QData)((IData)(
                                                                 ((0x40U 
                                                                   & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                                                   ? 6U
                                                                   : 7U))) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    ((0x10U 
                                                                      & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                                                      ? 4U
                                                                      : 5U))) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       ((4U 
                                                                         & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                                                         ? 2U
                                                                         : 3U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((((1U 
                                                                            & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                                                            ? 0U
                                                                            : 1U) 
                                                                          << 0x1cU) 
                                                                         | ((0xf000000U 
                                                                             & (((0x2000U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x34U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x38U))) 
                                                                                << 0x18U)) 
                                                                            | ((0xf00000U 
                                                                                & (((0x800U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x2cU))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x30U))) 
                                                                                << 0x14U)) 
                                                                               | ((0xf0000U 
                                                                                & (((0x200U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x24U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x28U))) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & (((0x80U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x1cU))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x20U))) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & (((0x20U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x18U))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x10U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & ((2U 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 8U)))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf000000000000000ULL & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes) 
           | __Vtemp_h679b4071__0);
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2 
        = (0x3fffU & ((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                     >> 3U))) ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i) 
                                                 << 8U)
                       : (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i)));
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2 
        = (0x3fffU & ((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                     >> 2U))) ? ((IData)(PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2) 
                                                 << 4U)
                       : (IData)(PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2)));
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2 
        = (0x3fffU & ((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes 
                                     >> 1U))) ? ((IData)(PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2) 
                                                 << 2U)
                       : (IData)(PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2)));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o 
        = (0x3fffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes))
                       ? ((IData)(PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2) 
                          << 1U) : (IData)(PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__16(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__16\n"); );
    // Init
    QData/*55:0*/ PvuTop__DOT___GEN_8;
    PvuTop__DOT___GEN_8 = 0;
    // Body
    PvuTop__DOT___GEN_8 = (((QData)((IData)((0x7fU 
                                             & ((IData)(0x12U) 
                                                + (
                                                   (1U 
                                                    & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                     ? 
                                                    ((0xe0U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((((IData)(1U) 
                                                                          - 
                                                                          vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                         - (IData)(1U)) 
                                                                        >> 4U)))) 
                                                         << 5U)) 
                                                     | (0x1fU 
                                                        & (((IData)(1U) 
                                                            - 
                                                            vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                           - (IData)(1U))))
                                                     : 
                                                    ((0xe0U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((- 
                                                                         vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                        >> 4U)))) 
                                                         << 5U)) 
                                                     | (0x1fU 
                                                        & (- 
                                                           vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                    : 0U))))) 
                            << 0x1cU) | (QData)((IData)(
                                                        ((0xfe00000U 
                                                          & (((IData)(0x12U) 
                                                              + 
                                                              ((1U 
                                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                ? 
                                                               ((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                                 ? 
                                                                ((0xe0U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(1U) 
                                                                                - 
                                                                                vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 4U)))) 
                                                                     << 5U)) 
                                                                 | (0x1fU 
                                                                    & (((IData)(1U) 
                                                                        - 
                                                                        vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                       - (IData)(1U))))
                                                                 : 
                                                                ((0xe0U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                >> 4U)))) 
                                                                     << 5U)) 
                                                                 | (0x1fU 
                                                                    & (- 
                                                                       vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                                : 0U)) 
                                                             << 0x15U)) 
                                                         | ((0x1fc000U 
                                                             & (((IData)(2U) 
                                                                 + 
                                                                 ((1U 
                                                                   & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                   ? 
                                                                  ((0U 
                                                                    == 
                                                                    (0xfU 
                                                                     & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)))
                                                                    ? 
                                                                   ((0x70U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(1U) 
                                                                                - (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)) 
                                                                                - (IData)(1U)) 
                                                                                >> 3U)))) 
                                                                        << 4U)) 
                                                                    | (0xfU 
                                                                       & (((IData)(1U) 
                                                                           - (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)) 
                                                                          - (IData)(1U))))
                                                                    : 
                                                                   ((0x70U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((- (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)) 
                                                                                >> 3U)))) 
                                                                        << 4U)) 
                                                                    | (0xfU 
                                                                       & (- (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)))))
                                                                   : 0U)) 
                                                                << 0xeU)) 
                                                            | (0x3f80U 
                                                               & (((IData)(2U) 
                                                                   + 
                                                                   ((1U 
                                                                     & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                                     ? 
                                                                    ((0U 
                                                                      == 
                                                                      (0xfU 
                                                                       & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)))
                                                                      ? 
                                                                     ((0x70U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(1U) 
                                                                                - (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)) 
                                                                                - (IData)(1U)) 
                                                                                >> 3U)))) 
                                                                          << 4U)) 
                                                                      | (0xfU 
                                                                         & (((IData)(1U) 
                                                                             - (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)) 
                                                                            - (IData)(1U))))
                                                                      : 
                                                                     ((0x70U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((- (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)) 
                                                                                >> 3U)))) 
                                                                          << 4U)) 
                                                                      | (0xfU 
                                                                         & (- (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)))))
                                                                     : 0U)) 
                                                                  << 7U)))))));
    vlSelf->__VdfgTmp_h8f00dd97__0 = (0x7fU & (((1U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp) 
                                                 + (IData)(vlSelf->PvuTop__DOT__add__DOT__io_overflow))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? 
                                                 ((1U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                                                        >> 0xeU)) 
                                                      | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)))
                                                   ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                                    ? 0x3fU
                                                    : (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp) 
                                                    - (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp))
                                                    : 0U)))) 
                                               + ((0x37U 
                                                   >= 
                                                   (0x3fU 
                                                    & ((IData)(7U) 
                                                       * (IData)(vlSelf->io_op))))
                                                   ? (IData)(
                                                             (PvuTop__DOT___GEN_8 
                                                              >> 
                                                              (0x3fU 
                                                               & ((IData)(7U) 
                                                                  * (IData)(vlSelf->io_op)))))
                                                   : 0U)));
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c39e73a__0 
        = ((5U != (IData)(vlSelf->io_op)) & ((IData)(vlSelf->__VdfgTmp_h8f00dd97__0) 
                                             >> 6U));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0xfU & (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c39e73a__0)
                     ? ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                        ? 0xfU : (~ 
                                                  ((IData)(vlSelf->__VdfgTmp_h8f00dd97__0) 
                                                   >> 2U))))
                     : ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                        ? 0U : ((IData)(vlSelf->__VdfgTmp_h8f00dd97__0) 
                                                >> 2U)))) 
                   - (IData)(1U)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__17(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__17\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hba6f0e99__0;
    // Body
    __Vtemp_hba6f0e99__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o)))) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            (0xfffU 
                                                             & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o) 
                                                                >> 2U)))) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             (0x40000000U 
                                                              & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o) 
                                                                 << 0x1eU)))))));
    __Vtemp_hba6f0e99__0[1U] = ((0xe0000000U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o) 
                                                << 0x1bU)) 
                                | (IData)(((((QData)((IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o)))) 
                                             << 0x3cU) 
                                            | (((QData)((IData)(
                                                                (0xfffU 
                                                                 & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o) 
                                                                    >> 2U)))) 
                                                << 0x1fU) 
                                               | (QData)((IData)(
                                                                 (0x40000000U 
                                                                  & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o) 
                                                                     << 0x1eU)))))) 
                                           >> 0x20U)));
    __Vtemp_hba6f0e99__0[2U] = ((((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                              >> 0x11U)) 
                                  | (0U != (0x1ffffU 
                                            & vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o))) 
                                 << 0x1aU) | (0x1ffU 
                                              & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o) 
                                                 >> 5U)));
    __Vtemp_hba6f0e99__0[3U] = ((((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                              >> 0x11U)) 
                                  | (0U != (0x1ffffU 
                                            & vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o))) 
                                 << 0x18U) | (((0x1ffeU 
                                                & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                                   >> 0x11U)) 
                                               | (0U 
                                                  != 
                                                  (0x1ffffU 
                                                   & vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o))) 
                                              >> 6U));
    __Vtemp_hba6f0e99__0[4U] = (((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                             >> 0x11U)) 
                                 | (0U != (0x1ffffU 
                                           & vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o))) 
                                >> 8U);
    __Vtemp_hba6f0e99__0[5U] = 0U;
    __Vtemp_hba6f0e99__0[6U] = 0U;
    __Vtemp_hba6f0e99__0[7U] = 0U;
    vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac 
        = ((0xefU >= (0xffU & ((IData)(0x1eU) * (IData)(vlSelf->io_op))))
            ? (0x1fffU & (((0U == (0x1fU & ((IData)(0x1eU) 
                                            * (IData)(vlSelf->io_op))))
                            ? 0U : (__Vtemp_hba6f0e99__0[
                                    (((IData)(0xcU) 
                                      + (0xffU & ((IData)(0x1eU) 
                                                  * (IData)(vlSelf->io_op)))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x1eU) 
                                                     * (IData)(vlSelf->io_op)))))) 
                          | (__Vtemp_hba6f0e99__0[(7U 
                                                   & (((IData)(0x1eU) 
                                                       * (IData)(vlSelf->io_op)) 
                                                      >> 5U))] 
                             >> (0x1fU & ((IData)(0x1eU) 
                                          * (IData)(vlSelf->io_op))))))
            : 0U);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__18(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__18\n"); );
    // Init
    QData/*43:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    QData/*43:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    QData/*43:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    // Body
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i 
        = (((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c39e73a__0)
                              ? 1U : 0x7ffeU))) << 0x1dU) 
           | (QData)((IData)(((((5U == (IData)(vlSelf->io_op))
                                 ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_h8f00dd97__0))) 
                               << 0x1bU) | (0x7ff8000U 
                                            & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac) 
                                               << 0xfU))))));
    PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0xfffffffffffULL & ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i 
                                   >> 8U) : vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i));
    PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0xfffffffffffULL & ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2 
                                   >> 4U) : PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0xfffffffffffULL & ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2 
                                   >> 2U) : PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o 
        = (0xfffffffffffULL & ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2 
                                   >> 1U) : PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T 
        = (0x7fffU & ((IData)((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o 
                               >> 0xfU)) + (1U & ((IData)(
                                                          (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o 
                                                           >> 0xeU)) 
                                                  & (IData)(
                                                            (0ULL 
                                                             != 
                                                             (0xbfffULL 
                                                              & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o)))))));
    vlSelf->io_posit_o_0 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x1000U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac))
                                      ? ((1U & ((1U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                                  | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                                  ? 
                                                 ((IData)(vlSelf->io_posit_i1_0) 
                                                  >> 0xfU)
                                                  : 
                                                 ((IData)(vlSelf->io_posit_i2_0) 
                                                  >> 0xfU))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? 
                                                 (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                                   & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                                  ^ 
                                                  ((IData)(vlSelf->io_posit_i1_0) 
                                                   >> 0xfU))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op)) 
                                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))))))
                                          ? (0x8000U 
                                             | (0x7fffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T)))))
                                          : (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))
                                      : 0U));
}

void VPvuTop___024root___eval_ico(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VPvuTop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U))) {
        VPvuTop___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(6U))) {
        VPvuTop___024root___ico_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U))) {
        VPvuTop___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(2U))) {
        VPvuTop___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(4U))) {
        VPvuTop___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U))) {
        VPvuTop___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(8U))) {
        VPvuTop___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U))) {
        VPvuTop___024root___ico_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
         | vlSelf->__VicoTriggered.at(6U))) {
        VPvuTop___024root___ico_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U)) 
         | vlSelf->__VicoTriggered.at(8U))) {
        VPvuTop___024root___ico_comb__TOP__9(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xeU))) {
        VPvuTop___024root___ico_comb__TOP__10(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xdU))) {
        VPvuTop___024root___ico_comb__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xaU))) {
        VPvuTop___024root___ico_comb__TOP__12(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(9U))) {
        VPvuTop___024root___ico_comb__TOP__13(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xcU))) {
        VPvuTop___024root___ico_comb__TOP__14(vlSelf);
    }
    if ((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
          | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(0xbU))) {
        VPvuTop___024root___ico_comb__TOP__15(vlSelf);
    }
    if (((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
               | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(9U)) 
             | vlSelf->__VicoTriggered.at(0xaU)) | vlSelf->__VicoTriggered.at(0xbU)) 
           | vlSelf->__VicoTriggered.at(0xcU)) | vlSelf->__VicoTriggered.at(0xdU)) 
         | vlSelf->__VicoTriggered.at(0xeU))) {
        VPvuTop___024root___ico_comb__TOP__16(vlSelf);
    }
    if ((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
            | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(9U)) 
          | vlSelf->__VicoTriggered.at(0xbU)) | vlSelf->__VicoTriggered.at(0xdU))) {
        VPvuTop___024root___ico_comb__TOP__17(vlSelf);
    }
    if (((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
               | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(9U)) 
             | vlSelf->__VicoTriggered.at(0xaU)) | vlSelf->__VicoTriggered.at(0xbU)) 
           | vlSelf->__VicoTriggered.at(0xcU)) | vlSelf->__VicoTriggered.at(0xdU)) 
         | vlSelf->__VicoTriggered.at(0xeU))) {
        VPvuTop___024root___ico_comb__TOP__18(vlSelf);
    }
}

void VPvuTop___024root___eval_act(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(2U)) {
        VPvuTop___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VPvuTop___024root___ico_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VPvuTop___024root___ico_comb__TOP__2(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VPvuTop___024root___ico_comb__TOP__3(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VPvuTop___024root___ico_comb__TOP__4(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VPvuTop___024root___ico_comb__TOP__5(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VPvuTop___024root___ico_comb__TOP__6(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VPvuTop___024root___ico_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U))) {
        VPvuTop___024root___ico_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((vlSelf->__VactTriggered.at(6U) | vlSelf->__VactTriggered.at(7U))) {
        VPvuTop___024root___ico_comb__TOP__9(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xdU))) {
        VPvuTop___024root___ico_comb__TOP__10(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xcU))) {
        VPvuTop___024root___ico_comb__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(9U))) {
        VPvuTop___024root___ico_comb__TOP__12(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(8U))) {
        VPvuTop___024root___ico_comb__TOP__13(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xbU))) {
        VPvuTop___024root___ico_comb__TOP__14(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(0xaU))) {
        VPvuTop___024root___ico_comb__TOP__15(vlSelf);
    }
    if ((((((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
              | vlSelf->__VactTriggered.at(8U)) | vlSelf->__VactTriggered.at(9U)) 
            | vlSelf->__VactTriggered.at(0xaU)) | vlSelf->__VactTriggered.at(0xbU)) 
          | vlSelf->__VactTriggered.at(0xcU)) | vlSelf->__VactTriggered.at(0xdU))) {
        VPvuTop___024root___ico_comb__TOP__16(vlSelf);
    }
    if (((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
           | vlSelf->__VactTriggered.at(8U)) | vlSelf->__VactTriggered.at(0xaU)) 
         | vlSelf->__VactTriggered.at(0xcU))) {
        VPvuTop___024root___ico_comb__TOP__17(vlSelf);
    }
    if ((((((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(5U)) 
              | vlSelf->__VactTriggered.at(8U)) | vlSelf->__VactTriggered.at(9U)) 
            | vlSelf->__VactTriggered.at(0xaU)) | vlSelf->__VactTriggered.at(0xbU)) 
          | vlSelf->__VactTriggered.at(0xcU)) | vlSelf->__VactTriggered.at(0xdU))) {
        VPvuTop___024root___ico_comb__TOP__18(vlSelf);
    }
}

VL_INLINE_OPT void VPvuTop___024root___nba_sequent__TOP__0(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0;
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 = 0;
    VlWide<8>/*255:0*/ __Vtemp_hba6f0e99__0;
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"pir_frac_rst_add: %b\n",
                   14,vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i);
        __Vtemp_hba6f0e99__0[0U] = (IData)((((QData)((IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o)))) 
                                             << 0x3cU) 
                                            | (((QData)((IData)(
                                                                (0xfffU 
                                                                 & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o) 
                                                                    >> 2U)))) 
                                                << 0x1fU) 
                                               | (QData)((IData)(
                                                                 (0x40000000U 
                                                                  & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o) 
                                                                     << 0x1eU)))))));
        __Vtemp_hba6f0e99__0[1U] = ((0xe0000000U & 
                                     ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o) 
                                      << 0x1bU)) | (IData)(
                                                           ((((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o)))) 
                                                              << 0x3cU) 
                                                             | (((QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o) 
                                                                                >> 2U)))) 
                                                                 << 0x1fU) 
                                                                | (QData)((IData)(
                                                                                (0x40000000U 
                                                                                & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o) 
                                                                                << 0x1eU)))))) 
                                                            >> 0x20U)));
        __Vtemp_hba6f0e99__0[2U] = ((((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                                  >> 0x11U)) 
                                      | (0U != (0x1ffffU 
                                                & vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o))) 
                                     << 0x1aU) | (0x1ffU 
                                                  & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o) 
                                                     >> 5U)));
        __Vtemp_hba6f0e99__0[3U] = ((((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                                  >> 0x11U)) 
                                      | (0U != (0x1ffffU 
                                                & vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o))) 
                                     << 0x18U) | ((
                                                   (0x1ffeU 
                                                    & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                                       >> 0x11U)) 
                                                   | (0U 
                                                      != 
                                                      (0x1ffffU 
                                                       & vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o))) 
                                                  >> 6U));
        __Vtemp_hba6f0e99__0[4U] = (((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                                 >> 0x11U)) 
                                     | (0U != (0x1ffffU 
                                               & vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o))) 
                                    >> 8U);
        __Vtemp_hba6f0e99__0[5U] = 0U;
        __Vtemp_hba6f0e99__0[6U] = 0U;
        __Vtemp_hba6f0e99__0[7U] = 0U;
        VL_FWRITEF(0x80000002U,"pir_frac_normed: %b\n",
                   30,((0xefU >= (0xffU & ((IData)(0x1eU) 
                                           * (IData)(vlSelf->io_op))))
                        ? (0x3fffffffU & (((0U == (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      * (IData)(vlSelf->io_op))))
                                            ? 0U : 
                                           (__Vtemp_hba6f0e99__0[
                                            (((IData)(0x1dU) 
                                              + (0xffU 
                                                 & ((IData)(0x1eU) 
                                                    * (IData)(vlSelf->io_op)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      * (IData)(vlSelf->io_op)))))) 
                                          | (__Vtemp_hba6f0e99__0[
                                             (7U & 
                                              (((IData)(0x1eU) 
                                                * (IData)(vlSelf->io_op)) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1eU) 
                                                    * (IData)(vlSelf->io_op))))))
                        : 0U));
    }
    if (vlSelf->reset) {
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp = 0U;
    } else if (vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o) {
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp 
            = vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_0_T_1;
    }
    vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_0_T_1 
        = (0x3fffffffU & ((IData)(1U) + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp)));
    vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i 
        = (0x3fffffffU & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o)
                           ? ((IData)(1U) + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp))
                           : vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp));
    if (vlSelf->__VdfgTmp_h4be4f099__0) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i = 0U;
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i = 0U;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
            = vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i;
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
            = (0x1fffffffU & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i);
    }
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x1cU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffeU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x1bU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffdU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 1U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x1aU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffbU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 2U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x19U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffff7U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 3U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffefU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 4U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdfU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 5U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbfU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 6U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7fU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 7U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffeffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 8U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 9U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7ffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffefffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdfffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbfffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7fffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0xfU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffeffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x10U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x11U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x12U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7ffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x13U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fefffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x14U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdfffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x15U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbfffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x16U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7fffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x17U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1effffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x18U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dffffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x19U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bffffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x1aU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17ffffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x1bU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0 
        = (1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i);
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h7c9c3082__0) 
              << 0x1cU));
}

void VPvuTop___024root___eval_nba(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0xeU)) {
        VPvuTop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(7U) | vlSelf->__VnbaTriggered.at(0xeU))) {
        VPvuTop___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(0xeU))) {
        VPvuTop___024root___ico_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U)) 
         | vlSelf->__VnbaTriggered.at(0xeU))) {
        VPvuTop___024root___ico_comb__TOP__9(vlSelf);
    }
}

void VPvuTop___024root___eval_triggers__ico(VPvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__ico(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG
void VPvuTop___024root___eval_triggers__act(VPvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__act(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__nba(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG

void VPvuTop___024root___eval(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<15> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VPvuTop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VPvuTop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/wuxy/PVU/vsrc/PvuTop.sv", 1178, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VPvuTop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VPvuTop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPvuTop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wuxy/PVU/vsrc/PvuTop.sv", 1178, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VPvuTop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPvuTop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wuxy/PVU/vsrc/PvuTop.sv", 1178, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPvuTop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPvuTop___024root___eval_debug_assertions(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_op & 0xf8U))) {
        Verilated::overWidthError("io_op");}
}
#endif  // VL_DEBUG
