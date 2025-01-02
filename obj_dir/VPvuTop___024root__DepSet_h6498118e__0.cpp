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
    CData/*0:0*/ PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0;
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0;
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0;
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 = 0;
    // Body
    vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o 
        = ((vlSelf->io_posit_i1_0 ^ vlSelf->io_posit_i2_0) 
           >> 0x1fU);
    vlSelf->PvuTop__DOT__add__DOT___GEN = ((vlSelf->io_posit_i1_0 
                                            >> 0x1fU) 
                                           == (vlSelf->io_posit_i2_0 
                                               >> 0x1fU));
    vlSelf->PvuTop__DOT____VdfgTmp_h04afc9dc__0 = (
                                                   (1U 
                                                    == (IData)(vlSelf->io_op)) 
                                                   | (2U 
                                                      == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6 
        = (0x7fffffffU & ((vlSelf->io_posit_i1_0 >> 0x1fU)
                           ? ((IData)(1U) + (~ vlSelf->io_posit_i1_0))
                           : vlSelf->io_posit_i1_0));
    vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6 
        = (0x7fffffffU & ((vlSelf->io_posit_i2_0 >> 0x1fU)
                           ? ((IData)(1U) + (~ vlSelf->io_posit_i2_0))
                           : vlSelf->io_posit_i2_0));
    vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i 
        = (0x3fffffffffffffffULL & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o)
                                     ? (1ULL + (~ vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp))
                                     : vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp));
    vlSelf->PvuTop__DOT____VdfgTmp_h248979d2__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h04afc9dc__0) 
                                                   | (3U 
                                                      == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
        = (0x7fffffffU & ((- (IData)((1U & (vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6 
                                            >> 0x1eU)))) 
                          ^ vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6));
    vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
        = (0x7fffffffU & ((- (IData)((1U & (vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6 
                                            >> 0x1eU)))) 
                          ^ vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6));
    vlSelf->__VdfgTmp_h62078fbd__0 = ((5U != (IData)(vlSelf->io_op)) 
                                      | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h248979d2__0) 
                                         | (4U == (IData)(vlSelf->io_op))));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1eU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1dU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1cU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1bU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1aU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x19U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i);
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode1__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1eU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1dU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1cU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1bU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1aU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x19U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i);
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__decode2__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    if (vlSelf->__VdfgTmp_h62078fbd__0) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i = 0ULL;
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i = 0ULL;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
            = vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i;
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
            = (0x1fffffffffffffffULL & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i);
    }
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x3cU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffffeULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x3bU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffffdULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 1U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x3aU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffffbULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 2U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x39U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffff7ULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 3U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x38U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffffefULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 4U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x37U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffffdfULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 5U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x36U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffffbfULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 6U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x35U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffff7fULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 7U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x34U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffeffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 8U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x33U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffdffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 9U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x32U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffbffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0xaU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x31U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffff7ffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0xbU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x30U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffefffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0xcU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2fU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffdfffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0xdU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2eU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffbfffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0xeU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2dU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffff7fffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0xfU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2cU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffeffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x10U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2bU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffdffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x11U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2aU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffbffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x12U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x29U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffff7ffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x13U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x28U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffefffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x14U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x27U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffdfffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x15U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x26U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffbfffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x16U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x25U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffff7fffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x17U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x24U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffeffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x18U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x23U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffdffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x19U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x22U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffbffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x1aU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x21U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffff7ffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x1bU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x20U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffefffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x1cU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1fU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffdfffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x1dU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1eU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffbfffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x1eU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1dU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffff7fffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x1fU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1cU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffeffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x20U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1bU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffdffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x21U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1aU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffbffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x22U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x19U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffff7ffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x23U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x18U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffefffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x24U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x17U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x25U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x16U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x26U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x15U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7fffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x27U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x14U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffeffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x28U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x13U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x29U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x12U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x2aU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x11U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7ffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x2bU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x10U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffefffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x2cU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xfU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x2dU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xeU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x2eU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xdU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7fffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x2fU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xcU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffeffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x30U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xbU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x31U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xaU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x32U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 9U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7ffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x33U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 8U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fefffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x34U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 7U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x35U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 6U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x36U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 5U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7fffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x37U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 4U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1effffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x38U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 3U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x39U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 2U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x3aU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i 
                         >> 1U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17ffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x3bU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h1783f529__0)) 
              << 0x3cU));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__0(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__0\n"); );
    // Init
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    // Body
    vlSelf->__VdfgTmp_h4d079806__0 = ((0x40000000U 
                                       & vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6)
                                       ? (0x1fU & (
                                                   vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                   - (IData)(1U)))
                                       : (0x20U | (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ 
                                                       vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])))));
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6 
                              << 0x10U) : vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6));
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp 
        = (((IData)(vlSelf->__VdfgTmp_h4d079806__0) 
            << 2U) | (3U & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
                            >> 0x1dU)));
    vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
        = (((IData)((0U != vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6)) 
            << 0x1bU) | (0x7ffffffU & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
                                       >> 2U)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProdLast_io_partial_prod 
        = (((0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6) 
            & (0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6))
            ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
            : 0U);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__1(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__1\n"); );
    // Init
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h884d45a4__0;
    VlWide<3>/*95:0*/ __Vtemp_hbef773e5__0;
    VlWide<3>/*95:0*/ __Vtemp_h7bd9a186__0;
    VlWide<3>/*95:0*/ __Vtemp_h6397ca1b__0;
    VlWide<3>/*95:0*/ __Vtemp_h58e813c4__0;
    VlWide<3>/*95:0*/ __Vtemp_hf17bc73a__0;
    VlWide<3>/*95:0*/ __Vtemp_he9690592__0;
    VlWide<3>/*95:0*/ __Vtemp_h20ac1591__0;
    VlWide<3>/*95:0*/ __Vtemp_h7063c603__0;
    VlWide<3>/*95:0*/ __Vtemp_h81b4fa32__0;
    VlWide<3>/*95:0*/ __Vtemp_h38dce03f__0;
    // Body
    vlSelf->__VdfgTmp_h73314445__0 = ((0x40000000U 
                                       & vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)
                                       ? (0x1fU & (
                                                   vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                   - (IData)(1U)))
                                       : (0x20U | (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ 
                                                       vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])))));
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6 
                              << 0x10U) : vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6));
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0xfU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0xfU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 3U))) | (2U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                  >> 3U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 3U))) | (4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                  >> 3U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 5U))) | (2U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                  >> 5U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 5U))) | (4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                  >> 5U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 7U))) | (2U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                  >> 7U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 7U))) | (4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                  >> 7U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 9U))) | (2U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                  >> 9U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 9U))) | (4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                  >> 9U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0xbU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0xbU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0xdU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0xdU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 0x11U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 0x11U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 0x13U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 0x13U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 0x15U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 0x15U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 0x17U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 0x17U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0x19U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 0x19U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0x19U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 0x19U))));
    vlSelf->__VdfgTmp_h17e4e3f4__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                    >> 2U))) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 2U))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0xfU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 3U))) | (6U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                  >> 3U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 5U))) | (6U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                  >> 5U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 7U))) | (6U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                  >> 7U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 9U))) | (6U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                  >> 9U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0xbU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 0x11U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 0x13U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 0x15U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 0x17U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0x19U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 0x19U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0xdU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code 
        = (((IData)((0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)) 
            << 2U) | (3U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 0x1bU)));
    vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp 
        = (((IData)(vlSelf->__VdfgTmp_h73314445__0) 
            << 2U) | (3U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 0x1dU)));
    vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac 
        = (((IData)((0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)) 
            << 0x1bU) | (0x7ffffffU & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                       >> 2U)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_h17e4e3f4__0) 
           & ((2U == (3U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 2U))) | (3U == (3U & 
                                               (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                >> 2U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 0xfU))) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 3U))) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 5U))) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 7U))) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 9U))) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 0xbU))) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 0x11U))) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0x13U))))))) 
           & ((4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 0x13U))) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0x15U))))))) 
           & ((4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 0x15U))) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                             >> 0x17U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0x17U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                    >> 0x17U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0x17U))))))) 
           & ((4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 0x17U))) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                             >> 0x19U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0x19U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                    >> 0x19U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0x19U))))))) 
           & ((4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 0x19U))) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 0xdU))) | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
           | (2U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
           | (4U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
           | (6U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)));
    __Vtemp_h884d45a4__0[0U] = (IData)((0xfffffffffffffffULL 
                                        & VL_DIV_QQQ(60, 0x40000000ULL, (QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)))));
    __Vtemp_h884d45a4__0[1U] = (IData)(((0xfffffffffffffffULL 
                                         & VL_DIV_QQQ(60, 0x40000000ULL, (QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)))) 
                                        >> 0x20U));
    __Vtemp_h884d45a4__0[2U] = 0U;
    __Vtemp_hbef773e5__0[0U] = (IData)((0xfffffffffffffffULL 
                                        & (0x80000000ULL 
                                           - ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                                              * (0xfffffffffffffffULL 
                                                 & VL_DIV_QQQ(60, 0x40000000ULL, (QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac))))))));
    __Vtemp_hbef773e5__0[1U] = (IData)(((0xfffffffffffffffULL 
                                         & (0x80000000ULL 
                                            - ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                                               * (0xfffffffffffffffULL 
                                                  & VL_DIV_QQQ(60, 0x40000000ULL, (QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac))))))) 
                                        >> 0x20U));
    __Vtemp_hbef773e5__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h7bd9a186__0, __Vtemp_h884d45a4__0, __Vtemp_hbef773e5__0);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[0U] 
        = __Vtemp_h7bd9a186__0[0U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[1U] 
        = __Vtemp_h7bd9a186__0[1U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[2U] 
        = (0x3ffffffU & __Vtemp_h7bd9a186__0[2U]);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
               | ((1U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
                  | ((2U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
                     | (3U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)))))) 
           & ((4U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
              | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h6397ca1b__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full, 0x1eU);
    __Vtemp_h58e813c4__0[0U] = __Vtemp_h6397ca1b__0[0U];
    __Vtemp_h58e813c4__0[1U] = __Vtemp_h6397ca1b__0[1U];
    __Vtemp_h58e813c4__0[2U] = (0x3ffffffU & __Vtemp_h6397ca1b__0[2U]);
    __Vtemp_hf17bc73a__0[0U] = (IData)((0xfffffffffffffffULL 
                                        & (0x80000000ULL 
                                           - ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                                              * (0xfffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                        << 2U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                          >> 0x1eU))))))));
    __Vtemp_hf17bc73a__0[1U] = (IData)(((0xfffffffffffffffULL 
                                         & (0x80000000ULL 
                                            - ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                                               * (0xfffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                      << 0x22U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                         << 2U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                           >> 0x1eU))))))) 
                                        >> 0x20U));
    __Vtemp_hf17bc73a__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_he9690592__0, __Vtemp_h58e813c4__0, __Vtemp_hf17bc73a__0);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[0U] 
        = __Vtemp_he9690592__0[0U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[1U] 
        = __Vtemp_he9690592__0[1U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[2U] 
        = (0x3ffffffU & __Vtemp_he9690592__0[2U]);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h20ac1591__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full, 0x1eU);
    __Vtemp_h7063c603__0[0U] = __Vtemp_h20ac1591__0[0U];
    __Vtemp_h7063c603__0[1U] = __Vtemp_h20ac1591__0[1U];
    __Vtemp_h7063c603__0[2U] = (0x3ffffffU & __Vtemp_h20ac1591__0[2U]);
    __Vtemp_h81b4fa32__0[0U] = (IData)((0xfffffffffffffffULL 
                                        & (0x80000000ULL 
                                           - ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                                              * (0xfffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                        << 2U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                          >> 0x1eU))))))));
    __Vtemp_h81b4fa32__0[1U] = (IData)(((0xfffffffffffffffULL 
                                         & (0x80000000ULL 
                                            - ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                                               * (0xfffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                      << 0x22U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                         << 2U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                           >> 0x1eU))))))) 
                                        >> 0x20U));
    __Vtemp_h81b4fa32__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h38dce03f__0, __Vtemp_h7063c603__0, __Vtemp_h81b4fa32__0);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
        = __Vtemp_h38dce03f__0[0U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
        = __Vtemp_h38dce03f__0[1U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
        = (0x3ffffffU & __Vtemp_h38dce03f__0[2U]);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (2U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (4U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 1U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 1U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x1bU))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x1bU))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                   >> 0x1dU)) | (2U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                   >> 0x1dU)) | (4U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (2U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (4U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x17U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x17U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 3U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 3U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 5U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 5U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 7U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 7U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 9U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 9U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x19U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x19U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 1U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 1U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 3U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 3U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 5U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 5U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 7U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 7U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 9U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 9U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x13U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x13U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x15U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x15U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x17U))));
    vlSelf->__VdfgTmp_h17e26bb5__0 = (1U & (~ ((0U 
                                                == 
                                                (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                 >> 0x1eU)) 
                                               | (1U 
                                                  == 
                                                  (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                   >> 0x1eU)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (6U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x1bU))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                   >> 0x1dU)) | (6U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 1U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (6U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x19U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x15U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 3U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 5U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 7U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 9U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 1U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 3U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 5U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 7U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 9U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x13U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x17U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_h17e26bb5__0) 
           & ((2U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                      >> 0x1eU)) | (3U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                           >> 0x1eU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x1bU))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                   >> 0x1dU)) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 1U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x19U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x15U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 3U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 5U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 7U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 9U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xbU))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xdU))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xfU))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x11U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x13U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x15U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x17U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 1U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 3U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 5U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 7U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 9U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xbU))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xdU))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xfU))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x11U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x13U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                              << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                        >> 0x1fU)))) 
               | ((1U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                 << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                           >> 0x1fU)))) 
                  | ((2U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                              >> 0x1fU)))) 
                     | (3U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                      << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                >> 0x1fU)))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x1bU))) | ((1U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x1bU))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x1bU))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1bU))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                       >> 0x1dU)) | ((1U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 0x1dU)) 
                                     | ((2U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1dU)) 
                                        | (3U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 0x1dU)))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 1U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                              << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1fU)))) 
               | ((1U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                 << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                           >> 0x1fU)))) 
                  | ((2U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                    << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                              >> 0x1fU)))) 
                     | (3U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                      << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1fU)))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x19U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x19U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x19U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x19U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x15U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 3U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 5U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 7U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 9U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xbU))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xdU))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xfU))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x11U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x13U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x15U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                             >> 0x17U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x17U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x17U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x17U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 1U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 3U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 5U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 7U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 9U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xbU))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xdU))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xfU))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x11U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x13U))))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__2(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__2\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_ha01781f4__0;
    VlWide<3>/*95:0*/ __Vtemp_h02742eb8__0;
    // Body
    __Vtemp_ha01781f4__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_ha01781f4__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h02742eb8__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_ha01781f4__0[0U];
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_ha01781f4__0[1U];
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h02742eb8__0[2U])))));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__3(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vtemp_hdbea1c50__0;
    // Body
    __Vtemp_hdbea1c50__0 = ((0x40000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_hdbea1c50__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__4(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__4\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hdd2b30ce__0;
    VlWide<3>/*95:0*/ __Vtemp_h29f13006__0;
    // Body
    __Vtemp_hdd2b30ce__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_hdd2b30ce__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h29f13006__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hdd2b30ce__0[0U];
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hdd2b30ce__0[1U];
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h29f13006__0[2U])))));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__5(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__5\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h3735abe4__0;
    // Body
    __Vtemp_h3735abe4__0 = ((0x40000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h3735abe4__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__6(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__6\n"); );
    // Init
    QData/*63:0*/ __Vtemp_hc76e8c88__0;
    // Body
    __Vtemp_hc76e8c88__0 = (((QData)((IData)((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0x3cU))))) 
                             << 0x3dU) | (((QData)((IData)(
                                                           (0ULL 
                                                            != 
                                                            (0xc00000000000000ULL 
                                                             & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                           << 0x3cU) 
                                          | (((QData)((IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x300000000000000ULL 
                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                              << 0x3bU) 
                                             | (((QData)((IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0xc0000000000000ULL 
                                                                   & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                 << 0x3aU) 
                                                | (((QData)((IData)(
                                                                    (0ULL 
                                                                     != 
                                                                     (0x30000000000000ULL 
                                                                      & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(
                                                                       (0ULL 
                                                                        != 
                                                                        (0xc000000000000ULL 
                                                                         & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                       << 0x38U) 
                                                      | (((QData)((IData)(
                                                                          (0ULL 
                                                                           != 
                                                                           (0x3000000000000ULL 
                                                                            & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                          << 0x37U) 
                                                         | (((QData)((IData)(
                                                                             (0ULL 
                                                                              != 
                                                                              (0xc00000000000ULL 
                                                                               & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                             << 0x36U) 
                                                            | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                << 0x35U) 
                                                               | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                   << 0x34U) 
                                                                  | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                      << 0x33U) 
                                                                     | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                         << 0x32U) 
                                                                        | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x3000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                            << 0x31U) 
                                                                           | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                               << 0x30U) 
                                                                              | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x3000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x3000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xcULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (3ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (6ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000000000000000ULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_hc76e8c88__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__7(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__7\n"); );
    // Init
    QData/*61:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2 = 0;
    QData/*61:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 = 0;
    QData/*61:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 = 0;
    QData/*61:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 = 0;
    QData/*61:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hfbda02e6__0;
    VlWide<3>/*95:0*/ __Vtemp_he1f80e73__0;
    VlWide<3>/*95:0*/ __Vtemp_hc9465c38__0;
    VlWide<4>/*127:0*/ __Vtemp_hc8e00bb3__0;
    VlWide<5>/*159:0*/ __Vtemp_h2405ea5a__0;
    VlWide<5>/*159:0*/ __Vtemp_h1919d06d__0;
    VlWide<6>/*191:0*/ __Vtemp_hb053c44f__0;
    VlWide<6>/*191:0*/ __Vtemp_h1b45b072__0;
    VlWide<6>/*191:0*/ __Vtemp_hb1c284bb__0;
    VlWide<8>/*255:0*/ __Vtemp_he682a339__0;
    VlWide<9>/*287:0*/ __Vtemp_h4e32360f__0;
    VlWide<9>/*287:0*/ __Vtemp_h5d569056__0;
    VlWide<11>/*351:0*/ __Vtemp_h56490d67__0;
    VlWide<12>/*383:0*/ __Vtemp_h80af16cb__0;
    // Body
    __Vtemp_hfbda02e6__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                         >> 0x13U)))
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xeU) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x12U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            (0x3fU 
                                                             & ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                            >> 0x11U)))
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x1aU) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 6U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x14U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xcU)))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0x3fU 
                                                                & ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                               >> 0xfU)))
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                     << 6U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1aU))
                                                                    : 
                                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (0x3fU 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xdU)))
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0x12U) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0xeU))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xcU) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x14U)))))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (0x3fU 
                                                                      & ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xbU)))
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x1eU) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 2U))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x18U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 8U)))))) 
                                                     << 0x1eU) 
                                                    | (QData)((IData)(
                                                                      ((0x3f000000U 
                                                                        & (((1U 
                                                                             & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 9U)))
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                              << 0xaU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x16U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 4U) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                           << 0x18U)) 
                                                                       | ((0xfc0000U 
                                                                           & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 7U)))
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x10U))) 
                                                                              << 0x12U)) 
                                                                          | ((0x3f000U 
                                                                              & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 5U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 4U))) 
                                                                                << 0xcU)) 
                                                                             | ((0xfc0U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 3U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x18U))) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 6U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xcU))))))))))))))));
    __Vtemp_hfbda02e6__0[1U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x15U)))
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 2U) | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1eU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1cU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 4U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x3fU 
                                                              & ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                             >> 0x13U)))
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xeU) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x12U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (0x3fU 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0x11U)))
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x1aU) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 6U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x14U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xcU)))))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0x3fU 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xfU)))
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                         << 6U) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1aU))
                                                                        : 
                                                                       vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])))) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      (0x3fU 
                                                                       & ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xdU)))
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0x12U) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0xeU))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xcU) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x14U)))))) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         (0x3fU 
                                                                          & ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xbU)))
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 2U))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x18U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 8U)))))) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          ((0x3f000000U 
                                                                            & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 9U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x16U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                               << 0x18U)) 
                                                                           | ((0xfc0000U 
                                                                               & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 7U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x10U))) 
                                                                                << 0x12U)) 
                                                                              | ((0x3f000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 5U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 4U))) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 3U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x18U))) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 6U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xcU))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_he1f80e73__0[2U] = ((0x3f00U & (((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x19U)))
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0xaU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 0x16U))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                  << 4U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 0x1cU))) 
                                            << 8U)) 
                                | ((0xfcU & (((1U & (IData)(
                                                            (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                             >> 0x17U)))
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x16U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xaU))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x10U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0x10U))) 
                                             << 2U)) 
                                   | (3U & (((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x15U)))
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 2U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1eU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1cU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 4U))) 
                                            >> 4U))));
    __Vtemp_hc9465c38__0[2U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x1fU)))
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                       << 6U) | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                 >> 0x1aU))
                                   : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U]) 
                                 << 0x1aU) | ((0x3f00000U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x1dU)))
                                                    ? 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                     << 0x12U) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                       >> 0xeU))
                                                    : 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                     << 0xcU) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                       >> 0x14U))) 
                                                  << 0x14U)) 
                                              | ((0xfc000U 
                                                  & (((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                        << 0x1eU) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                          >> 2U))
                                                       : 
                                                      ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                        << 0x18U) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                          >> 8U))) 
                                                     << 0xeU)) 
                                                 | __Vtemp_he1f80e73__0[2U])));
    __Vtemp_hc8e00bb3__0[3U] = ((0x3f000U & (((1U & (IData)(
                                                            (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                             >> 0x25U)))
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                   << 2U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                     >> 0x1eU))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                     >> 4U))) 
                                             << 0xcU)) 
                                | ((0xfc0U & (((1U 
                                                & (IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x23U)))
                                                ? (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 0xeU) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 0x12U))
                                                : (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 8U) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 0x18U))) 
                                              << 6U)) 
                                   | (0x3fU & ((1U 
                                                & (IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x21U)))
                                                ? (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 0x1aU) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 6U))
                                                : (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 0x14U) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 0xcU))))));
    __Vtemp_h2405ea5a__0[3U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x2bU)))
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                       >> 2U)) : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                   << 0x18U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                     >> 8U))) 
                                 << 0x1eU) | ((0x3f000000U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x29U)))
                                                    ? 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                     << 0xaU) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                       >> 0x16U))
                                                    : 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                     << 4U) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                       >> 0x1cU))) 
                                                  << 0x18U)) 
                                              | ((0xfc0000U 
                                                  & (((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                  >> 0x27U)))
                                                       ? 
                                                      ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                        << 0x16U) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                          >> 0xaU))
                                                       : 
                                                      ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                        << 0x10U) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                          >> 0x10U))) 
                                                     << 0x12U)) 
                                                 | __Vtemp_hc8e00bb3__0[3U])));
    __Vtemp_h1919d06d__0[4U] = ((0xfc00U & (((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x2fU)))
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                  << 6U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    >> 0x1aU))
                                              : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U]) 
                                            << 0xaU)) 
                                | ((0x3f0U & (((1U 
                                                & (IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x2dU)))
                                                ? (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0x12U) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 0xeU))
                                                : (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0xcU) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 0x14U))) 
                                              << 4U)) 
                                   | (0xfU & (((1U 
                                                & (IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x2bU)))
                                                ? (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 2U))
                                                : (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0x18U) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 8U))) 
                                              >> 2U))));
    __Vtemp_hb053c44f__0[4U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x35U)))
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       << 2U) | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                 >> 0x1eU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       << 0x1cU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       >> 4U))) << 0x1cU) 
                                | ((0xfc00000U & ((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x33U)))
                                                    ? 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                     << 0xeU) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                     << 8U) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                       >> 0x18U))) 
                                                  << 0x16U)) 
                                   | ((0x3f0000U & 
                                       (((1U & (IData)(
                                                       (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                        >> 0x31U)))
                                          ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                              << 0x1aU) 
                                             | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                >> 6U))
                                          : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                              << 0x14U) 
                                             | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                >> 0xcU))) 
                                        << 0x10U)) 
                                      | __Vtemp_h1919d06d__0[4U])));
    __Vtemp_h1b45b072__0[5U] = ((0x3f00U & (((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x39U)))
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  << 0xaU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    >> 0x16U))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                  << 4U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    >> 0x1cU))) 
                                            << 8U)) 
                                | ((0xfcU & (((1U & (IData)(
                                                            (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                             >> 0x37U)))
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                   << 0x16U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                     >> 0xaU))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                   << 0x10U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                     >> 0x10U))) 
                                             << 2U)) 
                                   | (3U & (((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x35U)))
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  << 2U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                    >> 0x1eU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  << 0x1cU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    >> 4U))) 
                                            >> 4U))));
    __Vtemp_hb1c284bb__0[5U] = ((((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                   ? 0U : 1U) << 0x1aU) 
                                | ((0x3f00000U & ((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x3dU)))
                                                    ? 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                     << 0x12U) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                       >> 0xeU))
                                                    : 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                     << 0xcU) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                       >> 0x14U))) 
                                                  << 0x14U)) 
                                   | ((0xfc000U & (
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                >> 0x3bU)))
                                                     ? 
                                                    ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                      << 0x1eU) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                      << 0x18U) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                        >> 8U))) 
                                                   << 0xeU)) 
                                      | __Vtemp_h1b45b072__0[5U])));
    __Vtemp_he682a339__0[6U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0xcU)))
                                   ? 0xcU : 0xdU) << 0x1eU) 
                                | ((((1U & (IData)(
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                    >> 0xaU)))
                                      ? 0xaU : 0xbU) 
                                    << 0x18U) | (((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 8U)))
                                                    ? 8U
                                                    : 9U) 
                                                  << 0x12U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 6U)))
                                                       ? 6U
                                                       : 7U) 
                                                     << 0xcU) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 4U)))
                                                          ? 4U
                                                          : 5U) 
                                                        << 6U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                      >> 2U)))
                                                           ? 2U
                                                           : 3U))))));
    __Vtemp_h4e32360f__0[7U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0x16U)))
                                   ? 0x16U : 0x17U) 
                                 << 0x1cU) | ((((1U 
                                                 & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0x14U)))
                                                 ? 0x14U
                                                 : 0x15U) 
                                               << 0x16U) 
                                              | ((((1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 0x12U)))
                                                    ? 0x12U
                                                    : 0x13U) 
                                                  << 0x10U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 0x10U)))
                                                       ? 0x10U
                                                       : 0x11U) 
                                                     << 0xaU) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 0xeU)))
                                                          ? 0xeU
                                                          : 0xfU) 
                                                        << 4U) 
                                                       | (((1U 
                                                            & (IData)(
                                                                      (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                       >> 0xcU)))
                                                            ? 0xcU
                                                            : 0xdU) 
                                                          >> 2U))))));
    __Vtemp_h5d569056__0[8U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0x20U)))
                                   ? 0x20U : 0x21U) 
                                 << 0x1aU) | ((((1U 
                                                 & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0x1eU)))
                                                 ? 0x1eU
                                                 : 0x1fU) 
                                               << 0x14U) 
                                              | ((((1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 0x1cU)))
                                                    ? 0x1cU
                                                    : 0x1dU) 
                                                  << 0xeU) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 0x1aU)))
                                                       ? 0x1aU
                                                       : 0x1bU) 
                                                     << 8U) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 0x18U)))
                                                          ? 0x18U
                                                          : 0x19U) 
                                                        << 2U) 
                                                       | (((1U 
                                                            & (IData)(
                                                                      (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                       >> 0x16U)))
                                                            ? 0x16U
                                                            : 0x17U) 
                                                          >> 4U))))));
    __Vtemp_h56490d67__0[9U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0x2cU)))
                                   ? 0x2cU : 0x2dU) 
                                 << 0x1eU) | ((((1U 
                                                 & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0x2aU)))
                                                 ? 0x2aU
                                                 : 0x2bU) 
                                               << 0x18U) 
                                              | ((((1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 0x28U)))
                                                    ? 0x28U
                                                    : 0x29U) 
                                                  << 0x12U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 0x26U)))
                                                       ? 0x26U
                                                       : 0x27U) 
                                                     << 0xcU) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 0x24U)))
                                                          ? 0x24U
                                                          : 0x25U) 
                                                        << 6U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                      >> 0x22U)))
                                                           ? 0x22U
                                                           : 0x23U))))));
    __Vtemp_h80af16cb__0[0xaU] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                   >> 0x36U)))
                                     ? 0x36U : 0x37U) 
                                   << 0x1cU) | ((((1U 
                                                   & (IData)(
                                                             (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                              >> 0x34U)))
                                                   ? 0x34U
                                                   : 0x35U) 
                                                 << 0x16U) 
                                                | ((((1U 
                                                      & (IData)(
                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                 >> 0x32U)))
                                                      ? 0x32U
                                                      : 0x33U) 
                                                    << 0x10U) 
                                                   | ((((1U 
                                                         & (IData)(
                                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                    >> 0x30U)))
                                                         ? 0x30U
                                                         : 0x31U) 
                                                       << 0xaU) 
                                                      | ((((1U 
                                                            & (IData)(
                                                                      (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                       >> 0x2eU)))
                                                            ? 0x2eU
                                                            : 0x2fU) 
                                                          << 4U) 
                                                         | (((1U 
                                                              & (IData)(
                                                                        (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                         >> 0x2cU)))
                                                              ? 0x2cU
                                                              : 0x2dU) 
                                                            >> 2U))))));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hfbda02e6__0[0U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hfbda02e6__0[1U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = __Vtemp_hc9465c38__0[2U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = __Vtemp_h2405ea5a__0[3U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = __Vtemp_hb053c44f__0[4U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
        = __Vtemp_hb1c284bb__0[5U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
        = __Vtemp_he682a339__0[6U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
        = __Vtemp_h4e32360f__0[7U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
        = __Vtemp_h5d569056__0[8U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
        = __Vtemp_h56490d67__0[9U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = __Vtemp_h80af16cb__0[0xaU];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
        = (0xf0000U | ((0xfc000000U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU]) 
                       | ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                           >> 0x3aU)))
                             ? 0x3aU : 0x3bU) << 8U) 
                          | ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                              >> 0x38U)))
                                ? 0x38U : 0x39U) << 2U) 
                             | (((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x36U)))
                                  ? 0x36U : 0x37U) 
                                >> 4U)))));
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2 
        = (0x3fffffffffffffffULL & ((0x20U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                                     ? (vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                                        << 0x20U) : vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i));
    vlSelf->__VdfgTmp_h0a432aee__0 = ((0U == (0x3fU 
                                              & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                       ? ((0x1c0U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((((IData)(1U) 
                                                             - 
                                                             vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            - (IData)(1U)) 
                                                           >> 5U)))) 
                                            << 6U)) 
                                          | (0x3fU 
                                             & (((IData)(1U) 
                                                 - 
                                                 vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                - (IData)(1U))))
                                       : ((0x1c0U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((- 
                                                            vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                           >> 5U)))) 
                                            << 6U)) 
                                          | (0x3fU 
                                             & (- vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))));
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 
        = (0x3fffffffffffffffULL & ((0x10U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                                     ? (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2 
                                        << 0x10U) : PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2));
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 
        = (0x3fffffffffffffffULL & ((8U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                                     ? (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 
                                        << 8U) : PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 
        = (0x3fffffffffffffffULL & ((4U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                                     ? (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 
                                        << 4U) : PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
        = (0x3fffffffffffffffULL & ((2U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                                     ? (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 
                                        << 2U) : PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o 
        = (0x3fffffffffffffffULL & ((1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                                     ? (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
                                        << 1U) : PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__8(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__8\n"); );
    // Init
    CData/*7:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount1_T;
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T = 0;
    CData/*7:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount2_T;
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T = 0;
    CData/*0:0*/ PvuTop__DOT__fracalign_1__DOT___GEN;
    PvuTop__DOT__fracalign_1__DOT___GEN = 0;
    CData/*0:0*/ PvuTop__DOT__fracalign_1__DOT___GEN_1;
    PvuTop__DOT__fracalign_1__DOT___GEN_1 = 0;
    CData/*0:0*/ PvuTop__DOT__fracalign_1__DOT___GEN_2;
    PvuTop__DOT__fracalign_1__DOT___GEN_2 = 0;
    IData/*29:0*/ PvuTop__DOT__fracalign_1__DOT____VdfgTmp_h81ea5a9d__0;
    PvuTop__DOT__fracalign_1__DOT____VdfgTmp_h81ea5a9d__0 = 0;
    IData/*29:0*/ PvuTop__DOT__fracalign_1__DOT____VdfgTmp_h229371d1__0;
    PvuTop__DOT__fracalign_1__DOT____VdfgTmp_h229371d1__0 = 0;
    QData/*59:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    QData/*59:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    QData/*59:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0);
    VlWide<4>/*119:0*/ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0;
    VL_ZERO_W(120, PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0);
    CData/*0:0*/ PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0;
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0;
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0;
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0;
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_hf6def8a4__0;
    VlWide<63>/*2015:0*/ __Vtemp_h6cb60d7b__0;
    VlWide<65>/*2079:0*/ __Vtemp_h08fd14c9__0;
    VlWide<65>/*2079:0*/ __Vtemp_hef0fe15e__0;
    VlWide<65>/*2079:0*/ __Vtemp_hc0efdb2f__0;
    VlWide<67>/*2143:0*/ __Vtemp_hb4e33707__0;
    VlWide<67>/*2143:0*/ __Vtemp_h4cb12782__0;
    VlWide<69>/*2207:0*/ __Vtemp_h1ca6ed6a__0;
    VlWide<69>/*2207:0*/ __Vtemp_h2c0885a1__0;
    VlWide<69>/*2207:0*/ __Vtemp_h6c00b2df__0;
    VlWide<71>/*2271:0*/ __Vtemp_hfed36292__0;
    VlWide<71>/*2271:0*/ __Vtemp_h83ac0db1__0;
    VlWide<73>/*2335:0*/ __Vtemp_h615132ea__0;
    VlWide<73>/*2335:0*/ __Vtemp_h6b39e71f__0;
    VlWide<73>/*2335:0*/ __Vtemp_h78bfcabc__0;
    VlWide<75>/*2399:0*/ __Vtemp_h774bcb7c__0;
    VlWide<75>/*2399:0*/ __Vtemp_hd9a006e8__0;
    VlWide<77>/*2463:0*/ __Vtemp_h0e246e68__0;
    VlWide<77>/*2463:0*/ __Vtemp_hfcd006c1__0;
    VlWide<77>/*2463:0*/ __Vtemp_h7b46588f__0;
    VlWide<79>/*2527:0*/ __Vtemp_h078bf2da__0;
    VlWide<79>/*2527:0*/ __Vtemp_h6467f22b__0;
    VlWide<80>/*2559:0*/ __Vtemp_hfa9992c1__0;
    VlWide<81>/*2591:0*/ __Vtemp_h2019750f__0;
    VlWide<81>/*2591:0*/ __Vtemp_h4fedcbcd__0;
    VlWide<82>/*2623:0*/ __Vtemp_hd557be92__0;
    VlWide<82>/*2623:0*/ __Vtemp_h64f3eacd__0;
    VlWide<84>/*2687:0*/ __Vtemp_haa8a4d2b__0;
    VlWide<84>/*2687:0*/ __Vtemp_hc08c7503__0;
    VlWide<84>/*2687:0*/ __Vtemp_h83a652c4__0;
    VlWide<86>/*2751:0*/ __Vtemp_h6fd1c657__0;
    VlWide<86>/*2751:0*/ __Vtemp_h9fdde22d__0;
    VlWide<88>/*2815:0*/ __Vtemp_h0706cb4e__0;
    VlWide<88>/*2815:0*/ __Vtemp_hb858e51c__0;
    VlWide<88>/*2815:0*/ __Vtemp_h2dee01de__0;
    VlWide<90>/*2879:0*/ __Vtemp_ha4642993__0;
    VlWide<90>/*2879:0*/ __Vtemp_h7569cf62__0;
    VlWide<92>/*2943:0*/ __Vtemp_ha20602e1__0;
    VlWide<92>/*2943:0*/ __Vtemp_h70589722__0;
    VlWide<92>/*2943:0*/ __Vtemp_h9028903b__0;
    VlWide<94>/*3007:0*/ __Vtemp_h2af210bb__0;
    VlWide<94>/*3007:0*/ __Vtemp_h095ff77b__0;
    VlWide<96>/*3071:0*/ __Vtemp_he6673994__0;
    VlWide<96>/*3071:0*/ __Vtemp_hf3a3cec6__0;
    VlWide<96>/*3071:0*/ __Vtemp_h908397dd__0;
    VlWide<98>/*3135:0*/ __Vtemp_hb21cbfad__0;
    VlWide<98>/*3135:0*/ __Vtemp_h74e0d99d__0;
    VlWide<100>/*3199:0*/ __Vtemp_hd440ea78__0;
    VlWide<100>/*3199:0*/ __Vtemp_h0cca8da4__0;
    VlWide<100>/*3199:0*/ __Vtemp_h40cd000a__0;
    VlWide<102>/*3263:0*/ __Vtemp_ha169bb1f__0;
    VlWide<102>/*3263:0*/ __Vtemp_h999e4928__0;
    VlWide<103>/*3295:0*/ __Vtemp_hbd860f0c__0;
    VlWide<103>/*3295:0*/ __Vtemp_h19b5f869__0;
    VlWide<103>/*3295:0*/ __Vtemp_h786a3245__0;
    VlWide<105>/*3359:0*/ __Vtemp_hbbd6fb2f__0;
    VlWide<105>/*3359:0*/ __Vtemp_h3c644f7f__0;
    VlWide<107>/*3423:0*/ __Vtemp_hb4c11e23__0;
    VlWide<107>/*3423:0*/ __Vtemp_ha46c7108__0;
    VlWide<107>/*3423:0*/ __Vtemp_hb2fd0029__0;
    VlWide<109>/*3487:0*/ __Vtemp_hdbf18f22__0;
    VlWide<109>/*3487:0*/ __Vtemp_h2422a435__0;
    VlWide<111>/*3551:0*/ __Vtemp_haafc44bf__0;
    VlWide<111>/*3551:0*/ __Vtemp_h6757dd42__0;
    VlWide<111>/*3551:0*/ __Vtemp_heaa1b205__0;
    VlWide<113>/*3615:0*/ __Vtemp_h795127fc__0;
    VlWide<113>/*3615:0*/ __Vtemp_h3ec2e97e__0;
    VlWide<3>/*95:0*/ __Vtemp_h0c0bf393__0;
    VlWide<3>/*95:0*/ __Vtemp_hc6f8af93__0;
    VlWide<3>/*95:0*/ __Vtemp_ha021ce85__0;
    // Body
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum 
        = (0x1ffU & (((0x100U & ((IData)(vlSelf->__VdfgTmp_h4d079806__0) 
                                 << 3U)) | (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)) 
                     + ((0x100U & ((IData)(vlSelf->__VdfgTmp_h73314445__0) 
                                   << 3U)) | (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp))));
    vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp 
        = (VL_GTS_III(8, (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp), (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp))
            ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)
            : (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___io_partial_prods_0_T_1 
        = (((QData)((IData)((1U & (~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
            << 0x21U) | (((QData)((IData)((3U & (- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                          << 0x1fU) | (QData)((IData)(
                                                      (0x7fffffffU 
                                                       & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != 
                                                             (3U 
                                                              & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                                 >> 2U))) 
                                                            & ((1U 
                                                                == 
                                                                (3U 
                                                                 & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                                    >> 2U))) 
                                                               | (IData)(
                                                                         ((0xcU 
                                                                           == 
                                                                           (0xcU 
                                                                            & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)) 
                                                                          & (2U 
                                                                             != 
                                                                             (3U 
                                                                              & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                                                >> 2U)))))))
                                                            ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                                                            : 
                                                           (((IData)(vlSelf->__VdfgTmp_h17e4e3f4__0) 
                                                             & (8U 
                                                                == 
                                                                (0xcU 
                                                                 & vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))
                                                             ? 
                                                            (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                             << 1U)
                                                             : 0U))))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                            >> 3U))) 
                              & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                              : (((~ ((0U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 3U))) 
                                      | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                     << 1U) : 0U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                            >> 5U))) 
                              & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                              : (((~ ((0U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 5U))) 
                                      | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                     << 1U) : 0U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                            >> 7U))) 
                              & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                              : (((~ ((0U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 7U))) 
                                      | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                     << 1U) : 0U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                            >> 9U))) 
                              & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                              : (((~ ((0U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 9U))) 
                                      | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                     << 1U) : 0U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                            >> 0xbU))) 
                              & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                              : (((~ ((0U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0xbU))) 
                                      | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                     << 1U) : 0U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                            >> 0x11U))) 
                              & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                              : (((~ ((0U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0x11U))) 
                                      | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                     << 1U) : 0U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                            >> 0x13U))) 
                              & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                              : (((~ ((0U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0x13U))) 
                                      | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                     << 1U) : 0U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                            >> 0x15U))) 
                              & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                              : (((~ ((0U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0x15U))) 
                                      | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                     << 1U) : 0U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                            >> 0x17U))) 
                              & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                              : (((~ ((0U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0x17U))) 
                                      | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                     << 1U) : 0U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                            >> 0x19U))) 
                              & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                              : (((~ ((0U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0x19U))) 
                                      | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                     << 1U) : 0U))));
    vlSelf->__VdfgTmp_hf293b01d__0 = (((QData)((IData)(
                                                       (((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                         << 0x1fU) 
                                                        | (0x7fffffffU 
                                                           & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                              ^ 
                                                              (((0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                                     >> 0xfU))) 
                                                                & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                   | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                      & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                                                                : 
                                                               (((~ 
                                                                  ((0U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                                        >> 0xfU))) 
                                                                   | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                 & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                 ? 
                                                                (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                 << 1U)
                                                                 : 0U))))))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                            >> 0xdU))) 
                              & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                              : (((~ ((0U == (7U & 
                                              (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                               >> 0xdU))) 
                                      | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                     << 1U) : 0U))));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProdLast_io_partial_prod)) 
            << 0x1cU) | (QData)((IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                         << 0x1aU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
                              & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                              : (((~ ((0U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_12__io_code)) 
                                      | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                     << 1U) : 0U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(
                                                       ((~ 
                                                         ((0U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                               >> 0x17U))) 
                                                          | ((1U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                                  >> 0x17U))) 
                                                             | ((2U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                                     >> 0x17U))) 
                                                                | (3U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                                       >> 0x17U))))))) 
                                                        & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0))))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0x17U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0x17U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    __Vtemp_hf6def8a4__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (3U 
                                                             & (- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                                            << 0x3dU) 
                                           | (0x1fffffffffffffffULL 
                                              & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                 ^ 
                                                 (((0U 
                                                    != 
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                     >> 0x1eU)) 
                                                   & ((1U 
                                                       == 
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                        >> 0x1eU)) 
                                                      | ((2U 
                                                          != 
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                           >> 0x1eU)) 
                                                         & (3U 
                                                            == 
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                             >> 0x1eU)))))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                   << 0x1eU)
                                                   : 
                                                  (((IData)(vlSelf->__VdfgTmp_h17e26bb5__0) 
                                                    & (2U 
                                                       == 
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                        >> 0x1eU)))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                    << 0x1fU)
                                                    : 0ULL)))))));
    __Vtemp_hf6def8a4__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                                             << 0x3dU) 
                                            | (0x1fffffffffffffffULL 
                                               & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                  ^ 
                                                  (((0U 
                                                     != 
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                      >> 0x1eU)) 
                                                    & ((1U 
                                                        == 
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                         >> 0x1eU)) 
                                                       | ((2U 
                                                           != 
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                            >> 0x1eU)) 
                                                          & (3U 
                                                             == 
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                              >> 0x1eU)))))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                    << 0x1eU)
                                                    : 
                                                   (((IData)(vlSelf->__VdfgTmp_h17e26bb5__0) 
                                                     & (2U 
                                                        == 
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                         >> 0x1eU)))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                     << 0x1fU)
                                                     : 0ULL)))))) 
                                        >> 0x20U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[0U] 
        = __Vtemp_hf6def8a4__0[0U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[1U] 
        = __Vtemp_hf6def8a4__0[1U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[2U] = 0U;
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[3U] = 0U;
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    << 1U) 
                                                   | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                      >> 0x1fU)))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      << 1U) 
                                                     | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                        >> 0x1fU)))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x1bU))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x1bU))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1dU)) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 0x1dU)) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 1U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 1U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    << 1U) 
                                                   | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1fU)))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      << 1U) 
                                                     | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                        >> 0x1fU)))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x19U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x19U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0x15U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0x15U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 3U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 3U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 5U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 5U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 7U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 7U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 9U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 9U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xbU))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xbU))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xdU))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xdU))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0xfU))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0xfU))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x11U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x11U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x13U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x13U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x15U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x15U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x17U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                     >> 0x17U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 1U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 1U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 3U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 3U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 5U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 5U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 7U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 7U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 9U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 9U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xbU))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xbU))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xdU))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xdU))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0xfU))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0xfU))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0x11U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0x11U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
        = (0x1fffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))) 
                                    ^ (((0U != (7U 
                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                   >> 0x13U))) 
                                        & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                        ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                           << 0x1eU)
                                        : (((~ ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     >> 0x13U))) 
                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4))) 
                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                            ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                               << 0x1fU)
                                            : 0ULL))));
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T 
        = (0xffU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp) 
                    - (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)));
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T 
        = (0xffU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp) 
                    - (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp)));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x400000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                << 0x1fU) 
                                               | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod))) 
                              << 2U) | (QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x1000000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                 << 0x1fU) 
                                                | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod))) 
                               << 4U) | (QData)((IData)(
                                                        ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                         << 2U)))));
    vlSelf->__VdfgTmp_ha92d35ff__0 = (((QData)((IData)(
                                                       (((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                         << 0x1fU) 
                                                        | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod))) 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x10000000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                  << 0x1fU) 
                                                 | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod))) 
                                << 8U) | (QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                          << 6U)))));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x40000000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                  << 0x1fU) 
                                                 | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod))) 
                                << 0xaU) | (QData)((IData)(
                                                           ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                            << 8U)))));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x1000000000000ULL | (((QData)((IData)((
                                                   ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                    << 0x1fU) 
                                                   | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_7_io_partial_prod))) 
                                  << 0x10U) | (QData)((IData)(
                                                              ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                               << 0xeU)))));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x4000000000000ULL | (((QData)((IData)((
                                                   ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                    << 0x1fU) 
                                                   | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod))) 
                                  << 0x12U) | (QData)((IData)(
                                                              ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                               << 0x10U)))));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (0x10000000000000ULL | (((QData)((IData)(
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                     << 0x1fU) 
                                                    | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod))) 
                                   << 0x14U) | (QData)((IData)(
                                                               ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                                << 0x12U)))));
    vlSelf->__VdfgTmp_h705df0d9__0 = (((QData)((IData)(
                                                       (((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                         << 0x1fU) 
                                                        | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod))) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U))));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x100000000000000ULL | (((QData)((IData)(
                                                    (((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                      << 0x1fU) 
                                                     | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod))) 
                                    << 0x18U) | (QData)((IData)(
                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                                 << 0x16U)))));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (0x100000000000ULL | (((QData)((IData)(((
                                                   (~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                   << 0x1fU) 
                                                  | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod))) 
                                 << 0xcU) | (QData)((IData)(
                                                            ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                             << 0xaU)))));
    PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x400000000000000ULL | (((QData)((IData)(
                                                    (((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                      << 0x1fU) 
                                                     | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod))) 
                                    << 0x1aU) | (QData)((IData)(
                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                                 << 0x18U)))));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg)) 
                   << 0x38U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod) 
            << 0x1aU) | (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg)) 
                                  << 0x38U) >> 0x20U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod) 
            >> 6U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod 
                               >> 0x20U)) << 0x1aU));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] 
        = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod 
                    >> 0x20U)) >> 6U);
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (IData)((((QData)((IData)((1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))))) 
                    << 0x3fU) | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                  << 2U) | (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (IData)(((((QData)((IData)((1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))))) 
                     << 0x3fU) | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                   << 2U) | (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))) 
                   >> 0x20U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] = 1U;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] = 0U;
    vlSelf->__VdfgTmp_h7d087c26__0[0U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                           << 0x1eU) 
                                          | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                                             << 0x1cU));
    vlSelf->__VdfgTmp_h7d087c26__0[1U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                           >> 2U) | 
                                          ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1eU));
    vlSelf->__VdfgTmp_h7d087c26__0[2U] = ((0x8000000U 
                                           & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg)) 
                                              << 0x1bU)) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 2U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
           << 0x1eU);
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (0x40000000U | ((0x20000000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                          << 0x1dU)) 
                          | (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                     >> 0x20U))));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] = 0U;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                      << 2U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
            >> 0x1cU) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                  >> 0x20U)) << 4U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (4U | ((2U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                        << 1U)) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x1cU)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] = 0U;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                   << 0x20U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
            << 2U) | (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                               << 0x20U) >> 0x20U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
            << 0x1fU) | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                          >> 0x1eU) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                >> 0x20U)) 
                                       << 2U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] = 1U;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
            << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                         << 0x1aU));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
            >> 4U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                               >> 0x20U)) << 0x1cU));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (0x4000000U | ((0x2000000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                        << 0x19U)) 
                         | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                     >> 0x20U)) >> 4U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] = 0U;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                   << 0x36U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
            << 0x18U) | (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                                  << 0x36U) >> 0x20U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod) 
            >> 8U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                               >> 0x20U)) << 0x18U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
        = (0x400000U | ((0x200000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg)) 
                                      << 0x15U)) | 
                        ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod 
                                  >> 0x20U)) >> 8U)));
    vlSelf->__VdfgTmp_hec8297ca__0[0U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                           << 6U) | 
                                          ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                           << 4U));
    vlSelf->__VdfgTmp_hec8297ca__0[1U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                           >> 0x1aU) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 6U));
    vlSelf->__VdfgTmp_hec8297ca__0[2U] = ((8U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                 << 3U)) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0x1aU));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                      << 6U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                  >> 0x20U)) << 8U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (0x40U | ((0x20U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                              << 5U)) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                  >> 0x20U)) 
                                         >> 0x18U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] = 0U;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                        << 8U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            >> 0x16U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                  >> 0x20U)) << 0xaU));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (0x100U | ((0x80U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                               << 7U)) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x16U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] = 0U;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
            << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                        << 0xaU));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
            >> 0x14U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                  >> 0x20U)) << 0xcU));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (0x400U | ((0x200U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                << 9U)) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                    >> 0x20U)) 
                                           >> 0x14U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] = 0U;
    vlSelf->__VdfgTmp_hfa6eb825__0[0U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                           << 0xeU) 
                                          | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_hfa6eb825__0[1U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                           >> 0x12U) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xeU));
    vlSelf->__VdfgTmp_hfa6eb825__0[2U] = ((0x800U & 
                                           ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                            << 0xbU)) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0x12U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
            << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                         << 0xeU));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
            >> 0x10U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                  >> 0x20U)) << 0x10U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (0x4000U | ((0x2000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                  << 0xdU)) | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x10U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] = 0U;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                         << 0x10U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (0x10000U | ((0x8000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                   << 0xfU)) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0xeU)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] = 0U;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
            << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                         << 0x12U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
            >> 0xcU) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                 >> 0x20U)) << 0x14U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (0x40000U | ((0x20000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                    << 0x11U)) | ((IData)(
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0xcU)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] = 0U;
    vlSelf->__VdfgTmp_h675e2a92__0[0U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                           << 0x16U) 
                                          | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                             << 0x14U));
    vlSelf->__VdfgTmp_h675e2a92__0[1U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                           >> 0xaU) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x16U));
    vlSelf->__VdfgTmp_h675e2a92__0[2U] = ((0x80000U 
                                           & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                              << 0x13U)) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0xaU));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                         << 0x16U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            >> 8U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                               >> 0x20U)) << 0x18U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (0x400000U | ((0x200000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                      << 0x15U)) | 
                        ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                  >> 0x20U)) >> 8U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] = 0U;
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                         << 0x18U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            >> 6U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                               >> 0x20U)) << 0x1aU));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (0x1000000U | ((0x800000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                       << 0x17U)) | 
                         ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                   >> 0x20U)) >> 6U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] = 0U;
    vlSelf->__VdfgTmp_h4c832caa__0[0U] = (IData)(((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                                  << 0x22U));
    vlSelf->__VdfgTmp_h4c832caa__0[1U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                           << 4U) | (IData)(
                                                            (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                                              << 0x22U) 
                                                             >> 0x20U)));
    vlSelf->__VdfgTmp_h4c832caa__0[2U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                           >> 0x1cU) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 4U));
    vlSelf->__VdfgTmp_h4c832caa__0[3U] = ((2U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                                                 << 1U)) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0x1cU));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                   << 0x24U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
            << 6U) | (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                               << 0x24U) >> 0x20U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
            >> 0x1aU) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                  >> 0x20U)) << 6U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
        = (0x10U | ((8U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                           << 3U)) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                               >> 0x20U)) 
                                      >> 0x1aU)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                   << 0x26U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
            << 8U) | (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                               << 0x26U) >> 0x20U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                  >> 0x20U)) << 8U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
        = (0x40U | ((0x20U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                              << 5U)) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                                  >> 0x20U)) 
                                         >> 0x18U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                   << 0x28U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
            << 0xaU) | (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                 << 0x28U) >> 0x20U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
            >> 0x16U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                  >> 0x20U)) << 0xaU));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] 
        = (0x100U | ((0x80U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                               << 7U)) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x16U)));
    vlSelf->__VdfgTmp_h01e20962__0[0U] = (IData)(((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                                  << 0x2aU));
    vlSelf->__VdfgTmp_h01e20962__0[1U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                           << 0xcU) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                                      << 0x2aU) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_h01e20962__0[2U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                           >> 0x14U) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_h01e20962__0[3U] = ((0x200U & 
                                           ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                                            << 9U)) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0x14U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                   << 0x2cU));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
            << 0xeU) | (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                                 << 0x2cU) >> 0x20U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
            >> 0x12U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                  >> 0x20U)) << 0xeU));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
        = (0x1000U | ((0x800U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                 << 0xbU)) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0x12U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                   << 0x2eU));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
            << 0x10U) | (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                  << 0x2eU) >> 0x20U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
            >> 0x10U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                  >> 0x20U)) << 0x10U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
        = (0x4000U | ((0x2000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                  << 0xdU)) | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x10U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                   << 0x30U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
            << 0x12U) | (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                  << 0x30U) >> 0x20U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U] 
        = (0x10000U | ((0x8000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                   << 0xfU)) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0xeU)));
    vlSelf->__VdfgTmp_h8ec4a9af__0[0U] = (IData)(((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                                  << 0x32U));
    vlSelf->__VdfgTmp_h8ec4a9af__0[1U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                           << 0x14U) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                                      << 0x32U) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_h8ec4a9af__0[2U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                                           >> 0xcU) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    vlSelf->__VdfgTmp_h8ec4a9af__0[3U] = ((0x20000U 
                                           & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                                              << 0x11U)) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                      >> 0x20U)) 
                                             >> 0xcU));
    __Vtemp_h6cb60d7b__0[0U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[0U];
    __Vtemp_h6cb60d7b__0[1U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[1U];
    __Vtemp_h6cb60d7b__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[2U];
    __Vtemp_h6cb60d7b__0[3U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                               << 0x18U) 
                                              | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[3U]));
    __Vtemp_h6cb60d7b__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod) 
                                 >> 6U) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_h6cb60d7b__0[5U] = (0x1000000U | ((0x800000U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                  << 0x17U)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 6U)));
    __Vtemp_h6cb60d7b__0[6U] = 0U;
    __Vtemp_h6cb60d7b__0[7U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 0x12U));
    __Vtemp_h6cb60d7b__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                 >> 0xcU) | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h6cb60d7b__0[9U] = (0x40000U | ((0x20000U 
                                             & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                << 0x11U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0xcU)));
    __Vtemp_h6cb60d7b__0[0xaU] = 0U;
    __Vtemp_h6cb60d7b__0[0xbU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                               << 0xcU));
    __Vtemp_h6cb60d7b__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                   >> 0x12U) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0xeU));
    __Vtemp_h6cb60d7b__0[0xdU] = (0x1000U | ((0x800U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                 << 0xbU)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x12U)));
    __Vtemp_h6cb60d7b__0[0xeU] = 0U;
    __Vtemp_h6cb60d7b__0[0xfU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                   << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                             << 6U));
    __Vtemp_h6cb60d7b__0[0x10U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
                                    >> 0x18U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 8U));
    __Vtemp_h6cb60d7b__0[0x11U] = (0x40U | ((0x20U 
                                             & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                << 5U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x18U)));
    __Vtemp_h6cb60d7b__0[0x12U] = 0U;
    __Vtemp_h6cb60d7b__0[0x13U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                    << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
    __Vtemp_h6cb60d7b__0[0x14U] = (((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                    << 0x1fU) | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                                  >> 0x1eU) 
                                                 | ((IData)(
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                             >> 0x20U)) 
                                                    << 2U)));
    __Vtemp_h6cb60d7b__0[0x15U] = 1U;
    __Vtemp_h6cb60d7b__0[0x16U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                 << 0x1aU));
    __Vtemp_h6cb60d7b__0[0x17U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    >> 4U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_h6cb60d7b__0[0x18U] = (0x4000000U | ((0x2000000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                     << 0x19U)) 
                                                 | ((IData)(
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                             >> 0x20U)) 
                                                    >> 4U)));
    __Vtemp_h6cb60d7b__0[0x19U] = 0U;
    __Vtemp_h6cb60d7b__0[0x1aU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                 << 0x14U));
    __Vtemp_h6cb60d7b__0[0x1bU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    >> 0xaU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x16U));
    __Vtemp_h6cb60d7b__0[0x1cU] = (0x100000U | ((0x80000U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                    << 0x13U)) 
                                                | ((IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 0xaU)));
    __Vtemp_h6cb60d7b__0[0x1dU] = 0U;
    __Vtemp_h6cb60d7b__0[0x1eU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                 << 0xeU));
    __Vtemp_h6cb60d7b__0[0x1fU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_h6cb60d7b__0[0x20U] = (0x4000U | ((0x2000U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                  << 0xdU)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0x10U)));
    __Vtemp_h6cb60d7b__0[0x21U] = 0U;
    __Vtemp_h6cb60d7b__0[0x22U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_h6cb60d7b__0[0x23U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xaU));
    __Vtemp_h6cb60d7b__0[0x24U] = (0x100U | ((0x80U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                 << 7U)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x16U)));
    __Vtemp_h6cb60d7b__0[0x25U] = 0U;
    __Vtemp_h6cb60d7b__0[0x26U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                              << 2U));
    __Vtemp_h6cb60d7b__0[0x27U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    >> 0x1cU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 4U));
    __Vtemp_h6cb60d7b__0[0x28U] = (4U | ((2U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                << 1U)) 
                                         | ((IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                     >> 0x20U)) 
                                            >> 0x1cU)));
    __Vtemp_h6cb60d7b__0[0x29U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    << 0x1eU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                 << 0x1cU));
    __Vtemp_h6cb60d7b__0[0x2aU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    >> 2U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1eU));
    __Vtemp_h6cb60d7b__0[0x2bU] = (0x10000000U | ((0x8000000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                      << 0x1bU)) 
                                                  | ((IData)(
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                              >> 0x20U)) 
                                                     >> 2U)));
    __Vtemp_h6cb60d7b__0[0x2cU] = 0U;
    __Vtemp_h6cb60d7b__0[0x2dU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                 << 0x16U));
    __Vtemp_h6cb60d7b__0[0x2eU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    >> 8U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x18U));
    __Vtemp_h6cb60d7b__0[0x2fU] = (0x400000U | ((0x200000U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                    << 0x15U)) 
                                                | ((IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 8U)));
    __Vtemp_h6cb60d7b__0[0x30U] = 0U;
    __Vtemp_h6cb60d7b__0[0x31U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                 << 0x10U));
    __Vtemp_h6cb60d7b__0[0x32U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    >> 0xeU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x12U));
    __Vtemp_h6cb60d7b__0[0x33U] = (0x10000U | ((0x8000U 
                                                & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                   << 0xfU)) 
                                               | ((IData)(
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0xeU)));
    __Vtemp_h6cb60d7b__0[0x34U] = 0U;
    __Vtemp_h6cb60d7b__0[0x35U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    << 0xcU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                << 0xaU));
    __Vtemp_h6cb60d7b__0[0x36U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    >> 0x14U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xcU));
    __Vtemp_h6cb60d7b__0[0x37U] = (0x400U | ((0x200U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                                 << 9U)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x14U)));
    __Vtemp_h6cb60d7b__0[0x38U] = 0U;
    __Vtemp_h6cb60d7b__0[0x39U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                    << 6U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                                              << 4U));
    __Vtemp_h6cb60d7b__0[0x3aU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                    >> 0x1aU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 6U));
    __Vtemp_h6cb60d7b__0[0x3bU] = (0x10U | ((8U & (
                                                   (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg)) 
                                                   << 3U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x1aU)));
    __Vtemp_h6cb60d7b__0[0x3cU] = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                   << 0x1eU);
    __Vtemp_h6cb60d7b__0[0x3dU] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    __Vtemp_h6cb60d7b__0[0x3eU] = ((0x20000000U & (
                                                   (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                   << 0x1dU)) 
                                   | (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                              >> 0x20U)));
    VL_CONCAT_WQW(2072,58,2014, __Vtemp_h08fd14c9__0, 1ULL, __Vtemp_h6cb60d7b__0);
    VL_CONCAT_WIW(2073,1,2072, __Vtemp_hef0fe15e__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg), __Vtemp_h08fd14c9__0);
    VL_EXTEND_WW(2074,2073, __Vtemp_hc0efdb2f__0, __Vtemp_hef0fe15e__0);
    VL_CONCAT_WQW(2135,61,2074, __Vtemp_hb4e33707__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod, __Vtemp_hc0efdb2f__0);
    VL_CONCAT_WIW(2136,1,2135, __Vtemp_h4cb12782__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg))), __Vtemp_hb4e33707__0);
    VL_CONCAT_WQW(2194,58,2136, __Vtemp_h1ca6ed6a__0, 1ULL, __Vtemp_h4cb12782__0);
    VL_CONCAT_WIW(2195,1,2194, __Vtemp_h2c0885a1__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg), __Vtemp_h1ca6ed6a__0);
    VL_EXTEND_WW(2196,2195, __Vtemp_h6c00b2df__0, __Vtemp_h2c0885a1__0);
    VL_CONCAT_WQW(2257,61,2196, __Vtemp_hfed36292__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod, __Vtemp_h6c00b2df__0);
    VL_CONCAT_WIW(2258,1,2257, __Vtemp_h83ac0db1__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))), __Vtemp_hfed36292__0);
    VL_CONCAT_WQW(2316,58,2258, __Vtemp_h615132ea__0, 1ULL, __Vtemp_h83ac0db1__0);
    VL_CONCAT_WIW(2317,1,2316, __Vtemp_h6b39e71f__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg), __Vtemp_h615132ea__0);
    VL_EXTEND_WW(2318,2317, __Vtemp_h78bfcabc__0, __Vtemp_h6b39e71f__0);
    VL_CONCAT_WQW(2379,61,2318, __Vtemp_h774bcb7c__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod, __Vtemp_h78bfcabc__0);
    VL_CONCAT_WIW(2380,1,2379, __Vtemp_hd9a006e8__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))), __Vtemp_h774bcb7c__0);
    VL_CONCAT_WQW(2438,58,2380, __Vtemp_h0e246e68__0, 1ULL, __Vtemp_hd9a006e8__0);
    VL_CONCAT_WIW(2439,1,2438, __Vtemp_hfcd006c1__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg), __Vtemp_h0e246e68__0);
    VL_EXTEND_WW(2440,2439, __Vtemp_h7b46588f__0, __Vtemp_hfcd006c1__0);
    VL_CONCAT_WQW(2501,61,2440, __Vtemp_h078bf2da__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod, __Vtemp_h7b46588f__0);
    VL_CONCAT_WIW(2502,1,2501, __Vtemp_h6467f22b__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))), __Vtemp_h078bf2da__0);
    VL_CONCAT_WQW(2560,58,2502, __Vtemp_hfa9992c1__0, 1ULL, __Vtemp_h6467f22b__0);
    VL_CONCAT_WIW(2561,1,2560, __Vtemp_h2019750f__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg), __Vtemp_hfa9992c1__0);
    VL_EXTEND_WW(2562,2561, __Vtemp_h4fedcbcd__0, __Vtemp_h2019750f__0);
    VL_CONCAT_WQW(2623,61,2562, __Vtemp_hd557be92__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod, __Vtemp_h4fedcbcd__0);
    VL_CONCAT_WIW(2624,1,2623, __Vtemp_h64f3eacd__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))), __Vtemp_hd557be92__0);
    VL_CONCAT_WQW(2682,58,2624, __Vtemp_haa8a4d2b__0, 1ULL, __Vtemp_h64f3eacd__0);
    VL_CONCAT_WIW(2683,1,2682, __Vtemp_hc08c7503__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg), __Vtemp_haa8a4d2b__0);
    VL_EXTEND_WW(2684,2683, __Vtemp_h83a652c4__0, __Vtemp_hc08c7503__0);
    VL_CONCAT_WQW(2745,61,2684, __Vtemp_h6fd1c657__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod, __Vtemp_h83a652c4__0);
    VL_CONCAT_WIW(2746,1,2745, __Vtemp_h9fdde22d__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))), __Vtemp_h6fd1c657__0);
    VL_CONCAT_WQW(2804,58,2746, __Vtemp_h0706cb4e__0, 1ULL, __Vtemp_h9fdde22d__0);
    VL_CONCAT_WIW(2805,1,2804, __Vtemp_hb858e51c__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg), __Vtemp_h0706cb4e__0);
    VL_EXTEND_WW(2806,2805, __Vtemp_h2dee01de__0, __Vtemp_hb858e51c__0);
    VL_CONCAT_WQW(2867,61,2806, __Vtemp_ha4642993__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod, __Vtemp_h2dee01de__0);
    VL_CONCAT_WIW(2868,1,2867, __Vtemp_h7569cf62__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))), __Vtemp_ha4642993__0);
    VL_CONCAT_WQW(2926,58,2868, __Vtemp_ha20602e1__0, 1ULL, __Vtemp_h7569cf62__0);
    VL_CONCAT_WIW(2927,1,2926, __Vtemp_h70589722__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg), __Vtemp_ha20602e1__0);
    VL_EXTEND_WW(2928,2927, __Vtemp_h9028903b__0, __Vtemp_h70589722__0);
    VL_CONCAT_WQW(2989,61,2928, __Vtemp_h2af210bb__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod, __Vtemp_h9028903b__0);
    VL_CONCAT_WIW(2990,1,2989, __Vtemp_h095ff77b__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))), __Vtemp_h2af210bb__0);
    VL_CONCAT_WQW(3048,58,2990, __Vtemp_he6673994__0, 1ULL, __Vtemp_h095ff77b__0);
    VL_CONCAT_WIW(3049,1,3048, __Vtemp_hf3a3cec6__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg), __Vtemp_he6673994__0);
    VL_EXTEND_WW(3050,3049, __Vtemp_h908397dd__0, __Vtemp_hf3a3cec6__0);
    VL_CONCAT_WQW(3111,61,3050, __Vtemp_hb21cbfad__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod, __Vtemp_h908397dd__0);
    VL_CONCAT_WIW(3112,1,3111, __Vtemp_h74e0d99d__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))), __Vtemp_hb21cbfad__0);
    VL_CONCAT_WQW(3170,58,3112, __Vtemp_hd440ea78__0, 1ULL, __Vtemp_h74e0d99d__0);
    VL_CONCAT_WIW(3171,1,3170, __Vtemp_h0cca8da4__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg), __Vtemp_hd440ea78__0);
    VL_EXTEND_WW(3172,3171, __Vtemp_h40cd000a__0, __Vtemp_h0cca8da4__0);
    VL_CONCAT_WQW(3233,61,3172, __Vtemp_ha169bb1f__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod, __Vtemp_h40cd000a__0);
    VL_CONCAT_WIW(3234,1,3233, __Vtemp_h999e4928__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))), __Vtemp_ha169bb1f__0);
    VL_CONCAT_WQW(3292,58,3234, __Vtemp_hbd860f0c__0, 1ULL, __Vtemp_h999e4928__0);
    VL_CONCAT_WIW(3293,1,3292, __Vtemp_h19b5f869__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg), __Vtemp_hbd860f0c__0);
    VL_EXTEND_WW(3294,3293, __Vtemp_h786a3245__0, __Vtemp_h19b5f869__0);
    VL_CONCAT_WQW(3355,61,3294, __Vtemp_hbbd6fb2f__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod, __Vtemp_h786a3245__0);
    VL_CONCAT_WIW(3356,1,3355, __Vtemp_h3c644f7f__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))), __Vtemp_hbbd6fb2f__0);
    VL_CONCAT_WQW(3414,58,3356, __Vtemp_hb4c11e23__0, 1ULL, __Vtemp_h3c644f7f__0);
    VL_CONCAT_WIW(3415,1,3414, __Vtemp_ha46c7108__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg), __Vtemp_hb4c11e23__0);
    VL_EXTEND_WW(3416,3415, __Vtemp_hb2fd0029__0, __Vtemp_ha46c7108__0);
    VL_CONCAT_WQW(3477,61,3416, __Vtemp_hdbf18f22__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_27_io_partial_prod, __Vtemp_hb2fd0029__0);
    VL_CONCAT_WIW(3478,1,3477, __Vtemp_h2422a435__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg))), __Vtemp_hdbf18f22__0);
    VL_CONCAT_WQW(3536,58,3478, __Vtemp_haafc44bf__0, 1ULL, __Vtemp_h2422a435__0);
    VL_CONCAT_WIW(3537,1,3536, __Vtemp_h6757dd42__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_27__DOT___boothEncoder_io_neg), __Vtemp_haafc44bf__0);
    VL_EXTEND_WW(3538,3537, __Vtemp_heaa1b205__0, __Vtemp_h6757dd42__0);
    VL_CONCAT_WQW(3599,61,3538, __Vtemp_h795127fc__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProdLast_io_partial_prod, __Vtemp_heaa1b205__0);
    VL_EXTEND_WW(3600,3599, __Vtemp_h3ec2e97e__0, __Vtemp_h795127fc__0);
    VL_ASSIGN_W(3600,vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods, __Vtemp_h3ec2e97e__0);
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                   << 0x34U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            << 0x16U) | (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                                  << 0x34U) >> 0x20U)));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
        = (0x100000U | ((0x80000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                                     << 0x13U)) | ((IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 0xaU)));
    PvuTop__DOT__fracalign_1__DOT____VdfgTmp_h81ea5a9d__0 
        = ((0x1dU >= ((0x1eU < (0xffU & ((IData)(2U) 
                                         + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T))))
                       ? 0x1eU : (0xffU & ((IData)(2U) 
                                           + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T)))))
            ? (0x3fffffffU & ((vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                               << 2U) >> ((0x1eU < 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T))))
                                           ? 0x1eU : 
                                          (0xffU & 
                                           ((IData)(2U) 
                                            + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T))))))
            : 0U);
    PvuTop__DOT__fracalign_1__DOT____VdfgTmp_h229371d1__0 
        = ((0x1dU >= ((0x1eU < (0xffU & ((IData)(2U) 
                                         + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T))))
                       ? 0x1eU : (0xffU & ((IData)(2U) 
                                           + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T)))))
            ? (0x3fffffffU & ((vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac 
                               << 2U) >> ((0x1eU < 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T))))
                                           ? 0x1eU : 
                                          (0xffU & 
                                           ((IData)(2U) 
                                            + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T))))))
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
    vlSelf->__VdfgTmp_h06f2217f__0 = (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___io_partial_prods_0_T_1 
                                      ^ (PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0));
    vlSelf->__VdfgTmp_hc014e5bc__0 = ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___io_partial_prods_0_T_1 
                                       & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___io_partial_prods_0_T_1) 
                                         & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0));
    vlSelf->__VdfgTmp_h78d5643b__0 = ((0x400000000000ULL 
                                       | vlSelf->__VdfgTmp_hf293b01d__0) 
                                      ^ (PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_h4df9372c__0 = (((0x400000000000ULL 
                                        | vlSelf->__VdfgTmp_hf293b01d__0) 
                                       & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | (((0x400000000000ULL 
                                                 | vlSelf->__VdfgTmp_hf293b01d__0) 
                                                & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((0x400000000000ULL 
                                                   | (vlSelf->__VdfgTmp_hf293b01d__0 
                                                      | PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0)) 
                                                  & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__VdfgTmp_h11508155__0 = ((0x4000000000ULL 
                                       | vlSelf->__VdfgTmp_ha92d35ff__0) 
                                      ^ (PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_h18a29784__0 = (((0x4000000000ULL 
                                        | vlSelf->__VdfgTmp_ha92d35ff__0) 
                                       & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | (((0x4000000000ULL 
                                                 | vlSelf->__VdfgTmp_ha92d35ff__0) 
                                                & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((0x4000000000ULL 
                                                   | (vlSelf->__VdfgTmp_ha92d35ff__0 
                                                      | PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0)) 
                                                  & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__VdfgTmp_hf3614e3c__0 = ((0x40000000000000ULL 
                                       | vlSelf->__VdfgTmp_h705df0d9__0) 
                                      ^ (PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_h52bae079__0 = (((0x40000000000000ULL 
                                        | vlSelf->__VdfgTmp_h705df0d9__0) 
                                       & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | (((0x40000000000000ULL 
                                                 | vlSelf->__VdfgTmp_h705df0d9__0) 
                                                & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((0x40000000000000ULL 
                                                   | (vlSelf->__VdfgTmp_h705df0d9__0 
                                                      | PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0)) 
                                                  & PvuTop__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__VdfgTmp_h650924d4__0[0U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[0U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]));
    vlSelf->__VdfgTmp_h650924d4__0[1U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[1U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]));
    vlSelf->__VdfgTmp_h650924d4__0[2U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[2U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]));
    vlSelf->__VdfgTmp_h650924d4__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[3U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                             ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]));
    vlSelf->__VdfgTmp_h0264415d__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[0U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[0U]) 
                                             & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]));
    vlSelf->__VdfgTmp_h0264415d__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[1U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[1U]) 
                                             & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]));
    vlSelf->__VdfgTmp_h0264415d__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[2U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[2U]) 
                                             & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]));
    vlSelf->__VdfgTmp_h0264415d__0[3U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[3U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                              | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___io_partial_prods_0_T_1[3U]) 
                                             & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]));
    vlSelf->__VdfgTmp_h6f28208e__0[0U] = (vlSelf->__VdfgTmp_h7d087c26__0[0U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]));
    vlSelf->__VdfgTmp_h6f28208e__0[1U] = (vlSelf->__VdfgTmp_h7d087c26__0[1U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]));
    vlSelf->__VdfgTmp_h6f28208e__0[2U] = ((0x10000000U 
                                           | vlSelf->__VdfgTmp_h7d087c26__0[2U]) 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]));
    vlSelf->__VdfgTmp_h6f28208e__0[3U] = (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                          ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]);
    vlSelf->__VdfgTmp_h55fb8d4d__0[0U] = ((vlSelf->__VdfgTmp_h7d087c26__0[0U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              | vlSelf->__VdfgTmp_h7d087c26__0[0U]) 
                                             & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]));
    vlSelf->__VdfgTmp_h55fb8d4d__0[1U] = ((vlSelf->__VdfgTmp_h7d087c26__0[1U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              | vlSelf->__VdfgTmp_h7d087c26__0[1U]) 
                                             & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]));
    vlSelf->__VdfgTmp_h55fb8d4d__0[2U] = (((0x10000000U 
                                            | vlSelf->__VdfgTmp_h7d087c26__0[2U]) 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((0x10000000U 
                                              | (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                                 | vlSelf->__VdfgTmp_h7d087c26__0[2U])) 
                                             & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]));
    vlSelf->__VdfgTmp_h55fb8d4d__0[3U] = (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                          & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]);
    vlSelf->__VdfgTmp_h97082784__0[0U] = (vlSelf->__VdfgTmp_hec8297ca__0[0U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_h97082784__0[1U] = (vlSelf->__VdfgTmp_hec8297ca__0[1U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_h97082784__0[2U] = ((0x10U | 
                                           vlSelf->__VdfgTmp_hec8297ca__0[2U]) 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_h97082784__0[3U] = (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                             ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]));
    vlSelf->__VdfgTmp_h043f4b57__0[0U] = ((vlSelf->__VdfgTmp_hec8297ca__0[0U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_hec8297ca__0[0U] 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_hec8297ca__0[0U] 
                                                       | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_h043f4b57__0[1U] = ((vlSelf->__VdfgTmp_hec8297ca__0[1U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_hec8297ca__0[1U] 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_hec8297ca__0[1U] 
                                                       | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_h043f4b57__0[2U] = (((0x10U | 
                                            vlSelf->__VdfgTmp_hec8297ca__0[2U]) 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | (((0x10U 
                                                     | vlSelf->__VdfgTmp_hec8297ca__0[2U]) 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((0x10U 
                                                       | (vlSelf->__VdfgTmp_hec8297ca__0[2U] 
                                                          | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U])) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_h043f4b57__0[3U] = ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                             | (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                                & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_h3fe54950__0[0U] = (vlSelf->__VdfgTmp_hfa6eb825__0[0U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_h3fe54950__0[1U] = (vlSelf->__VdfgTmp_hfa6eb825__0[1U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_h3fe54950__0[2U] = ((0x1000U 
                                           | vlSelf->__VdfgTmp_hfa6eb825__0[2U]) 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_h3fe54950__0[3U] = (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                             ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]));
    vlSelf->__VdfgTmp_h2f7d037a__0[0U] = ((vlSelf->__VdfgTmp_hfa6eb825__0[0U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_hfa6eb825__0[0U] 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_hfa6eb825__0[0U] 
                                                       | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_h2f7d037a__0[1U] = ((vlSelf->__VdfgTmp_hfa6eb825__0[1U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_hfa6eb825__0[1U] 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_hfa6eb825__0[1U] 
                                                       | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_h2f7d037a__0[2U] = (((0x1000U 
                                            | vlSelf->__VdfgTmp_hfa6eb825__0[2U]) 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | (((0x1000U 
                                                     | vlSelf->__VdfgTmp_hfa6eb825__0[2U]) 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((0x1000U 
                                                       | (vlSelf->__VdfgTmp_hfa6eb825__0[2U] 
                                                          | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U])) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_h2f7d037a__0[3U] = ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                             | (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                                & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_he49df3d2__0[0U] = (vlSelf->__VdfgTmp_h675e2a92__0[0U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_he49df3d2__0[1U] = (vlSelf->__VdfgTmp_h675e2a92__0[1U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_he49df3d2__0[2U] = ((0x100000U 
                                           | vlSelf->__VdfgTmp_h675e2a92__0[2U]) 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_he49df3d2__0[3U] = (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                             ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]));
    vlSelf->__VdfgTmp_h502ef6cf__0[0U] = ((vlSelf->__VdfgTmp_h675e2a92__0[0U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_h675e2a92__0[0U] 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_h675e2a92__0[0U] 
                                                       | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_h502ef6cf__0[1U] = ((vlSelf->__VdfgTmp_h675e2a92__0[1U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_h675e2a92__0[1U] 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_h675e2a92__0[1U] 
                                                       | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_h502ef6cf__0[2U] = (((0x100000U 
                                            | vlSelf->__VdfgTmp_h675e2a92__0[2U]) 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | (((0x100000U 
                                                     | vlSelf->__VdfgTmp_h675e2a92__0[2U]) 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((0x100000U 
                                                       | (vlSelf->__VdfgTmp_h675e2a92__0[2U] 
                                                          | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U])) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_h502ef6cf__0[3U] = ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                             | (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                                & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_hf34dff92__0[0U] = (vlSelf->__VdfgTmp_h4c832caa__0[0U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_hf34dff92__0[1U] = (vlSelf->__VdfgTmp_h4c832caa__0[1U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_hf34dff92__0[2U] = (vlSelf->__VdfgTmp_h4c832caa__0[2U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_hf34dff92__0[3U] = ((4U | vlSelf->__VdfgTmp_h4c832caa__0[3U]) 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_hd8744e72__0[0U] = ((vlSelf->__VdfgTmp_h4c832caa__0[0U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_h4c832caa__0[0U] 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_h4c832caa__0[0U] 
                                                       | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_hd8744e72__0[1U] = ((vlSelf->__VdfgTmp_h4c832caa__0[1U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_h4c832caa__0[1U] 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_h4c832caa__0[1U] 
                                                       | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_hd8744e72__0[2U] = ((vlSelf->__VdfgTmp_h4c832caa__0[2U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_h4c832caa__0[2U] 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_h4c832caa__0[2U] 
                                                       | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_hd8744e72__0[3U] = (((4U | vlSelf->__VdfgTmp_h4c832caa__0[3U]) 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                                | (((4U 
                                                     | vlSelf->__VdfgTmp_h4c832caa__0[3U]) 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                                   | ((4U 
                                                       | (vlSelf->__VdfgTmp_h4c832caa__0[3U] 
                                                          | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U])) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])))));
    vlSelf->__VdfgTmp_hccbd30a4__0[0U] = (vlSelf->__VdfgTmp_h01e20962__0[0U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_hccbd30a4__0[1U] = (vlSelf->__VdfgTmp_h01e20962__0[1U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_hccbd30a4__0[2U] = (vlSelf->__VdfgTmp_h01e20962__0[2U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_hccbd30a4__0[3U] = ((0x400U | 
                                           vlSelf->__VdfgTmp_h01e20962__0[3U]) 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_he2ebaa9c__0[0U] = ((vlSelf->__VdfgTmp_h01e20962__0[0U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_h01e20962__0[0U] 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_h01e20962__0[0U] 
                                                       | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_he2ebaa9c__0[1U] = ((vlSelf->__VdfgTmp_h01e20962__0[1U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_h01e20962__0[1U] 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_h01e20962__0[1U] 
                                                       | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_he2ebaa9c__0[2U] = ((vlSelf->__VdfgTmp_h01e20962__0[2U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_h01e20962__0[2U] 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_h01e20962__0[2U] 
                                                       | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_he2ebaa9c__0[3U] = (((0x400U 
                                            | vlSelf->__VdfgTmp_h01e20962__0[3U]) 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                                | (((0x400U 
                                                     | vlSelf->__VdfgTmp_h01e20962__0[3U]) 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                                   | ((0x400U 
                                                       | (vlSelf->__VdfgTmp_h01e20962__0[3U] 
                                                          | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U])) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])))));
    vlSelf->__VdfgTmp_hccdabe8d__0[0U] = (vlSelf->__VdfgTmp_h8ec4a9af__0[0U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])));
    vlSelf->__VdfgTmp_hccdabe8d__0[1U] = (vlSelf->__VdfgTmp_h8ec4a9af__0[1U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])));
    vlSelf->__VdfgTmp_hccdabe8d__0[2U] = (vlSelf->__VdfgTmp_h8ec4a9af__0[2U] 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])));
    vlSelf->__VdfgTmp_hccdabe8d__0[3U] = ((0x40000U 
                                           | vlSelf->__VdfgTmp_h8ec4a9af__0[3U]) 
                                          ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                             ^ (PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                ^ PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])));
    vlSelf->__VdfgTmp_h4bccd5fb__0[0U] = ((vlSelf->__VdfgTmp_h8ec4a9af__0[0U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_h8ec4a9af__0[0U] 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_h8ec4a9af__0[0U] 
                                                       | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[0U]) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[0U])))));
    vlSelf->__VdfgTmp_h4bccd5fb__0[1U] = ((vlSelf->__VdfgTmp_h8ec4a9af__0[1U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_h8ec4a9af__0[1U] 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_h8ec4a9af__0[1U] 
                                                       | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[1U]) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[1U])))));
    vlSelf->__VdfgTmp_h4bccd5fb__0[2U] = ((vlSelf->__VdfgTmp_h8ec4a9af__0[2U] 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_h8ec4a9af__0[2U] 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_h8ec4a9af__0[2U] 
                                                       | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[2U]) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[2U])))));
    vlSelf->__VdfgTmp_h4bccd5fb__0[3U] = (((0x40000U 
                                            | vlSelf->__VdfgTmp_h8ec4a9af__0[3U]) 
                                           & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U]) 
                                          | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U] 
                                              & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                             | ((PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U] 
                                                 & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U]) 
                                                | (((0x40000U 
                                                     | vlSelf->__VdfgTmp_h8ec4a9af__0[3U]) 
                                                    & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h184510d7__0[3U]) 
                                                   | ((0x40000U 
                                                       | (vlSelf->__VdfgTmp_h8ec4a9af__0[3U] 
                                                          | PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b2c4d__0[3U])) 
                                                      & PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1a6f92b7__0[3U])))));
    if (PvuTop__DOT__fracalign_1__DOT___GEN) {
        vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align 
            = vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac;
        vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align 
            = PvuTop__DOT__fracalign_1__DOT____VdfgTmp_h229371d1__0;
    } else {
        vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align 
            = ((IData)(PvuTop__DOT__fracalign_1__DOT___GEN_1)
                ? PvuTop__DOT__fracalign_1__DOT____VdfgTmp_h81ea5a9d__0
                : ((IData)(PvuTop__DOT__fracalign_1__DOT___GEN_2)
                    ? vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac
                    : PvuTop__DOT__fracalign_1__DOT____VdfgTmp_h81ea5a9d__0));
        vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align 
            = (((IData)(PvuTop__DOT__fracalign_1__DOT___GEN_1) 
                | (IData)(PvuTop__DOT__fracalign_1__DOT___GEN_2))
                ? vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac
                : PvuTop__DOT__fracalign_1__DOT____VdfgTmp_h229371d1__0);
    }
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h06f2217f__0 & vlSelf->__VdfgTmp_hc014e5bc__0) 
           | ((vlSelf->__VdfgTmp_hc014e5bc__0 & vlSelf->__VdfgTmp_h11508155__0) 
              | ((vlSelf->__VdfgTmp_h11508155__0 & vlSelf->__VdfgTmp_h18a29784__0) 
                 | ((vlSelf->__VdfgTmp_h06f2217f__0 
                     & vlSelf->__VdfgTmp_h11508155__0) 
                    | ((vlSelf->__VdfgTmp_h06f2217f__0 
                        | vlSelf->__VdfgTmp_hc014e5bc__0) 
                       & vlSelf->__VdfgTmp_h18a29784__0)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h06f2217f__0 ^ (vlSelf->__VdfgTmp_hc014e5bc__0 
                                             ^ (vlSelf->__VdfgTmp_h11508155__0 
                                                ^ vlSelf->__VdfgTmp_h18a29784__0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h78d5643b__0 & vlSelf->__VdfgTmp_h4df9372c__0) 
           | ((vlSelf->__VdfgTmp_h4df9372c__0 & vlSelf->__VdfgTmp_hf3614e3c__0) 
              | ((vlSelf->__VdfgTmp_hf3614e3c__0 & vlSelf->__VdfgTmp_h52bae079__0) 
                 | ((vlSelf->__VdfgTmp_h78d5643b__0 
                     & vlSelf->__VdfgTmp_hf3614e3c__0) 
                    | ((vlSelf->__VdfgTmp_h78d5643b__0 
                        | vlSelf->__VdfgTmp_h4df9372c__0) 
                       & vlSelf->__VdfgTmp_h52bae079__0)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h78d5643b__0 ^ (vlSelf->__VdfgTmp_h4df9372c__0 
                                             ^ (vlSelf->__VdfgTmp_hf3614e3c__0 
                                                ^ vlSelf->__VdfgTmp_h52bae079__0)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h650924d4__0[0U] & vlSelf->__VdfgTmp_h0264415d__0[0U]) 
           | ((vlSelf->__VdfgTmp_h0264415d__0[0U] & 
               vlSelf->__VdfgTmp_h97082784__0[0U]) 
              | ((vlSelf->__VdfgTmp_h97082784__0[0U] 
                  & vlSelf->__VdfgTmp_h043f4b57__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h650924d4__0[0U] 
                     & vlSelf->__VdfgTmp_h97082784__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h650924d4__0[0U] 
                        | vlSelf->__VdfgTmp_h0264415d__0[0U]) 
                       & vlSelf->__VdfgTmp_h043f4b57__0[0U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h650924d4__0[1U] & vlSelf->__VdfgTmp_h0264415d__0[1U]) 
           | ((vlSelf->__VdfgTmp_h0264415d__0[1U] & 
               vlSelf->__VdfgTmp_h97082784__0[1U]) 
              | ((vlSelf->__VdfgTmp_h97082784__0[1U] 
                  & vlSelf->__VdfgTmp_h043f4b57__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h650924d4__0[1U] 
                     & vlSelf->__VdfgTmp_h97082784__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h650924d4__0[1U] 
                        | vlSelf->__VdfgTmp_h0264415d__0[1U]) 
                       & vlSelf->__VdfgTmp_h043f4b57__0[1U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h650924d4__0[2U] & vlSelf->__VdfgTmp_h0264415d__0[2U]) 
           | ((vlSelf->__VdfgTmp_h0264415d__0[2U] & 
               vlSelf->__VdfgTmp_h97082784__0[2U]) 
              | ((vlSelf->__VdfgTmp_h97082784__0[2U] 
                  & vlSelf->__VdfgTmp_h043f4b57__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h650924d4__0[2U] 
                     & vlSelf->__VdfgTmp_h97082784__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h650924d4__0[2U] 
                        | vlSelf->__VdfgTmp_h0264415d__0[2U]) 
                       & vlSelf->__VdfgTmp_h043f4b57__0[2U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h650924d4__0[3U] & vlSelf->__VdfgTmp_h0264415d__0[3U]) 
           | ((vlSelf->__VdfgTmp_h0264415d__0[3U] & 
               vlSelf->__VdfgTmp_h97082784__0[3U]) 
              | ((vlSelf->__VdfgTmp_h97082784__0[3U] 
                  & vlSelf->__VdfgTmp_h043f4b57__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h650924d4__0[3U] 
                     & vlSelf->__VdfgTmp_h97082784__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h650924d4__0[3U] 
                        | vlSelf->__VdfgTmp_h0264415d__0[3U]) 
                       & vlSelf->__VdfgTmp_h043f4b57__0[3U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h650924d4__0[0U] ^ (vlSelf->__VdfgTmp_h0264415d__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h97082784__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h043f4b57__0[0U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h650924d4__0[1U] ^ (vlSelf->__VdfgTmp_h0264415d__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h97082784__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h043f4b57__0[1U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h650924d4__0[2U] ^ (vlSelf->__VdfgTmp_h0264415d__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h97082784__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h043f4b57__0[2U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h650924d4__0[3U] ^ (vlSelf->__VdfgTmp_h0264415d__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h97082784__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h043f4b57__0[3U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h3fe54950__0[0U] & vlSelf->__VdfgTmp_h2f7d037a__0[0U]) 
           | ((vlSelf->__VdfgTmp_h2f7d037a__0[0U] & 
               vlSelf->__VdfgTmp_he49df3d2__0[0U]) 
              | ((vlSelf->__VdfgTmp_he49df3d2__0[0U] 
                  & vlSelf->__VdfgTmp_h502ef6cf__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h3fe54950__0[0U] 
                     & vlSelf->__VdfgTmp_he49df3d2__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h3fe54950__0[0U] 
                        | vlSelf->__VdfgTmp_h2f7d037a__0[0U]) 
                       & vlSelf->__VdfgTmp_h502ef6cf__0[0U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h3fe54950__0[1U] & vlSelf->__VdfgTmp_h2f7d037a__0[1U]) 
           | ((vlSelf->__VdfgTmp_h2f7d037a__0[1U] & 
               vlSelf->__VdfgTmp_he49df3d2__0[1U]) 
              | ((vlSelf->__VdfgTmp_he49df3d2__0[1U] 
                  & vlSelf->__VdfgTmp_h502ef6cf__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h3fe54950__0[1U] 
                     & vlSelf->__VdfgTmp_he49df3d2__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h3fe54950__0[1U] 
                        | vlSelf->__VdfgTmp_h2f7d037a__0[1U]) 
                       & vlSelf->__VdfgTmp_h502ef6cf__0[1U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h3fe54950__0[2U] & vlSelf->__VdfgTmp_h2f7d037a__0[2U]) 
           | ((vlSelf->__VdfgTmp_h2f7d037a__0[2U] & 
               vlSelf->__VdfgTmp_he49df3d2__0[2U]) 
              | ((vlSelf->__VdfgTmp_he49df3d2__0[2U] 
                  & vlSelf->__VdfgTmp_h502ef6cf__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h3fe54950__0[2U] 
                     & vlSelf->__VdfgTmp_he49df3d2__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h3fe54950__0[2U] 
                        | vlSelf->__VdfgTmp_h2f7d037a__0[2U]) 
                       & vlSelf->__VdfgTmp_h502ef6cf__0[2U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h3fe54950__0[3U] & vlSelf->__VdfgTmp_h2f7d037a__0[3U]) 
           | ((vlSelf->__VdfgTmp_h2f7d037a__0[3U] & 
               vlSelf->__VdfgTmp_he49df3d2__0[3U]) 
              | ((vlSelf->__VdfgTmp_he49df3d2__0[3U] 
                  & vlSelf->__VdfgTmp_h502ef6cf__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h3fe54950__0[3U] 
                     & vlSelf->__VdfgTmp_he49df3d2__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h3fe54950__0[3U] 
                        | vlSelf->__VdfgTmp_h2f7d037a__0[3U]) 
                       & vlSelf->__VdfgTmp_h502ef6cf__0[3U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h3fe54950__0[0U] ^ (vlSelf->__VdfgTmp_h2f7d037a__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_he49df3d2__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h502ef6cf__0[0U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h3fe54950__0[1U] ^ (vlSelf->__VdfgTmp_h2f7d037a__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_he49df3d2__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h502ef6cf__0[1U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h3fe54950__0[2U] ^ (vlSelf->__VdfgTmp_h2f7d037a__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_he49df3d2__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h502ef6cf__0[2U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h3fe54950__0[3U] ^ (vlSelf->__VdfgTmp_h2f7d037a__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_he49df3d2__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h502ef6cf__0[3U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h6f28208e__0[0U] & vlSelf->__VdfgTmp_h55fb8d4d__0[0U]) 
           | ((vlSelf->__VdfgTmp_h55fb8d4d__0[0U] & 
               vlSelf->__VdfgTmp_hf34dff92__0[0U]) 
              | ((vlSelf->__VdfgTmp_hf34dff92__0[0U] 
                  & vlSelf->__VdfgTmp_hd8744e72__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h6f28208e__0[0U] 
                     & vlSelf->__VdfgTmp_hf34dff92__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h6f28208e__0[0U] 
                        | vlSelf->__VdfgTmp_h55fb8d4d__0[0U]) 
                       & vlSelf->__VdfgTmp_hd8744e72__0[0U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h6f28208e__0[1U] & vlSelf->__VdfgTmp_h55fb8d4d__0[1U]) 
           | ((vlSelf->__VdfgTmp_h55fb8d4d__0[1U] & 
               vlSelf->__VdfgTmp_hf34dff92__0[1U]) 
              | ((vlSelf->__VdfgTmp_hf34dff92__0[1U] 
                  & vlSelf->__VdfgTmp_hd8744e72__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h6f28208e__0[1U] 
                     & vlSelf->__VdfgTmp_hf34dff92__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h6f28208e__0[1U] 
                        | vlSelf->__VdfgTmp_h55fb8d4d__0[1U]) 
                       & vlSelf->__VdfgTmp_hd8744e72__0[1U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h6f28208e__0[2U] & vlSelf->__VdfgTmp_h55fb8d4d__0[2U]) 
           | ((vlSelf->__VdfgTmp_h55fb8d4d__0[2U] & 
               vlSelf->__VdfgTmp_hf34dff92__0[2U]) 
              | ((vlSelf->__VdfgTmp_hf34dff92__0[2U] 
                  & vlSelf->__VdfgTmp_hd8744e72__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h6f28208e__0[2U] 
                     & vlSelf->__VdfgTmp_hf34dff92__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h6f28208e__0[2U] 
                        | vlSelf->__VdfgTmp_h55fb8d4d__0[2U]) 
                       & vlSelf->__VdfgTmp_hd8744e72__0[2U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h6f28208e__0[3U] & vlSelf->__VdfgTmp_h55fb8d4d__0[3U]) 
           | ((vlSelf->__VdfgTmp_h55fb8d4d__0[3U] & 
               vlSelf->__VdfgTmp_hf34dff92__0[3U]) 
              | ((vlSelf->__VdfgTmp_hf34dff92__0[3U] 
                  & vlSelf->__VdfgTmp_hd8744e72__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h6f28208e__0[3U] 
                     & vlSelf->__VdfgTmp_hf34dff92__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h6f28208e__0[3U] 
                        | vlSelf->__VdfgTmp_h55fb8d4d__0[3U]) 
                       & vlSelf->__VdfgTmp_hd8744e72__0[3U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h6f28208e__0[0U] ^ (vlSelf->__VdfgTmp_h55fb8d4d__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hf34dff92__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hd8744e72__0[0U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h6f28208e__0[1U] ^ (vlSelf->__VdfgTmp_h55fb8d4d__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hf34dff92__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hd8744e72__0[1U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h6f28208e__0[2U] ^ (vlSelf->__VdfgTmp_h55fb8d4d__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hf34dff92__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hd8744e72__0[2U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h6f28208e__0[3U] ^ (vlSelf->__VdfgTmp_h55fb8d4d__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hf34dff92__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hd8744e72__0[3U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_hccbd30a4__0[0U] & vlSelf->__VdfgTmp_he2ebaa9c__0[0U]) 
           | ((vlSelf->__VdfgTmp_he2ebaa9c__0[0U] & 
               vlSelf->__VdfgTmp_hccdabe8d__0[0U]) 
              | ((vlSelf->__VdfgTmp_hccdabe8d__0[0U] 
                  & vlSelf->__VdfgTmp_h4bccd5fb__0[0U]) 
                 | ((vlSelf->__VdfgTmp_hccbd30a4__0[0U] 
                     & vlSelf->__VdfgTmp_hccdabe8d__0[0U]) 
                    | ((vlSelf->__VdfgTmp_hccbd30a4__0[0U] 
                        | vlSelf->__VdfgTmp_he2ebaa9c__0[0U]) 
                       & vlSelf->__VdfgTmp_h4bccd5fb__0[0U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_hccbd30a4__0[1U] & vlSelf->__VdfgTmp_he2ebaa9c__0[1U]) 
           | ((vlSelf->__VdfgTmp_he2ebaa9c__0[1U] & 
               vlSelf->__VdfgTmp_hccdabe8d__0[1U]) 
              | ((vlSelf->__VdfgTmp_hccdabe8d__0[1U] 
                  & vlSelf->__VdfgTmp_h4bccd5fb__0[1U]) 
                 | ((vlSelf->__VdfgTmp_hccbd30a4__0[1U] 
                     & vlSelf->__VdfgTmp_hccdabe8d__0[1U]) 
                    | ((vlSelf->__VdfgTmp_hccbd30a4__0[1U] 
                        | vlSelf->__VdfgTmp_he2ebaa9c__0[1U]) 
                       & vlSelf->__VdfgTmp_h4bccd5fb__0[1U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_hccbd30a4__0[2U] & vlSelf->__VdfgTmp_he2ebaa9c__0[2U]) 
           | ((vlSelf->__VdfgTmp_he2ebaa9c__0[2U] & 
               vlSelf->__VdfgTmp_hccdabe8d__0[2U]) 
              | ((vlSelf->__VdfgTmp_hccdabe8d__0[2U] 
                  & vlSelf->__VdfgTmp_h4bccd5fb__0[2U]) 
                 | ((vlSelf->__VdfgTmp_hccbd30a4__0[2U] 
                     & vlSelf->__VdfgTmp_hccdabe8d__0[2U]) 
                    | ((vlSelf->__VdfgTmp_hccbd30a4__0[2U] 
                        | vlSelf->__VdfgTmp_he2ebaa9c__0[2U]) 
                       & vlSelf->__VdfgTmp_h4bccd5fb__0[2U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_hccbd30a4__0[3U] & vlSelf->__VdfgTmp_he2ebaa9c__0[3U]) 
           | ((vlSelf->__VdfgTmp_he2ebaa9c__0[3U] & 
               vlSelf->__VdfgTmp_hccdabe8d__0[3U]) 
              | ((vlSelf->__VdfgTmp_hccdabe8d__0[3U] 
                  & vlSelf->__VdfgTmp_h4bccd5fb__0[3U]) 
                 | ((vlSelf->__VdfgTmp_hccbd30a4__0[3U] 
                     & vlSelf->__VdfgTmp_hccdabe8d__0[3U]) 
                    | ((vlSelf->__VdfgTmp_hccbd30a4__0[3U] 
                        | vlSelf->__VdfgTmp_he2ebaa9c__0[3U]) 
                       & vlSelf->__VdfgTmp_h4bccd5fb__0[3U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_hccbd30a4__0[0U] ^ (vlSelf->__VdfgTmp_he2ebaa9c__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hccdabe8d__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h4bccd5fb__0[0U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_hccbd30a4__0[1U] ^ (vlSelf->__VdfgTmp_he2ebaa9c__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hccdabe8d__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h4bccd5fb__0[1U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_hccbd30a4__0[2U] ^ (vlSelf->__VdfgTmp_he2ebaa9c__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hccdabe8d__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h4bccd5fb__0[2U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_hccbd30a4__0[3U] ^ (vlSelf->__VdfgTmp_he2ebaa9c__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hccdabe8d__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h4bccd5fb__0[3U])));
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater = 
        (vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align 
         > vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align);
    vlSelf->PvuTop__DOT__add__DOT__sum = (0x7fffffffU 
                                          & (vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align 
                                             + vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
        = (((3U != (IData)(vlSelf->io_op)) | (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h04afc9dc__0))
            ? 0ULL : ((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                       ? 0ULL : (0x3fffffffffffffffULL 
                                 & ((0xfffffffffffffffULL 
                                     & (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                        ^ (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                           ^ (vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                              ^ vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))) 
                                    + (0xfffffffffffffffULL 
                                       & ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                           & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                          | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                              & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                             | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                 & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                    & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                   | ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                       | vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                      & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))))))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U]) 
           | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
               & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U]) 
              | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U]) 
                 | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
                     & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U]) 
                    | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
                        | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U]) 
                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U]) 
           | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
               & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U]) 
              | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U]) 
                 | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
                     & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U]) 
                    | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
                        | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U]) 
                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U]) 
           | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
               & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U]) 
              | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U]) 
                 | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
                     & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U]) 
                    | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
                        | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U]) 
                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U]) 
           | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
               & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U]) 
              | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U]) 
                 | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
                     & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U]) 
                    | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
                        | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U]) 
                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
           ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
              ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
                 ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
           ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
              ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
                 ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
           ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
              ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
                 ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
           ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
              ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
                 ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U]) 
           | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
               & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U]) 
              | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U]) 
                 | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
                     & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U]) 
                    | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
                        | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U]) 
                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U]) 
           | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
               & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U]) 
              | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U]) 
                 | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
                     & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U]) 
                    | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
                        | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U]) 
                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U]) 
           | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
               & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U]) 
              | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U]) 
                 | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
                     & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U]) 
                    | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
                        | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U]) 
                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U]) 
           | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
               & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U]) 
              | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U]) 
                 | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
                     & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U]) 
                    | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
                        | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U]) 
                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U])))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
           ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
              ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
                 ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
           ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
              ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
                 ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
           ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
              ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
                 ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U])));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
           ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
              ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
                 ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U])));
    vlSelf->__VdfgTmp_hf0a27d07__0 = (0x3fffffffU & 
                                      ((IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)
                                        ? (vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align 
                                           - vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align)
                                        : (vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align 
                                           - vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align)));
    vlSelf->PvuTop__DOT__add__DOT__io_overflow = ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                                  & (vlSelf->PvuTop__DOT__add__DOT__sum 
                                                     >> 0x1eU));
    vlSelf->__VdfgTmp_hf87afcc4__0 = (0x3fffffffU & 
                                      ((0x40000000U 
                                        & vlSelf->PvuTop__DOT__add__DOT__sum)
                                        ? (vlSelf->PvuTop__DOT__add__DOT__sum 
                                           >> 1U) : vlSelf->PvuTop__DOT__add__DOT__sum));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x3dU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffffeULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x3cU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffffdULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 1U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x3bU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffffbULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 2U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x3aU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffff7ULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 3U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x39U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffffefULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 4U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x38U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffffdfULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 5U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x37U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffffbfULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 6U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x36U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffff7fULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 7U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x35U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffeffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 8U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x34U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffdffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 9U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x33U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffbffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0xaU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x32U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffff7ffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0xbU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x31U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffefffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0xcU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x30U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffdfffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0xdU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2fU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffbfffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0xeU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2eU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffff7fffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0xfU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2dU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffeffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x10U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2cU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffdffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x11U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2bU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffbffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x12U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2aU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffff7ffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x13U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x29U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffefffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x14U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x28U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffdfffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x15U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x27U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffbfffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x16U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x26U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffff7fffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x17U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x25U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffeffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x18U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x24U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffdffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x19U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x23U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffbffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x1aU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x22U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffff7ffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x1bU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x21U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffefffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x1cU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x20U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffdfffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x1dU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1fU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffbfffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x1eU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1eU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffff7fffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x1fU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1dU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffeffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x20U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1cU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffdffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x21U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1bU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffbffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x22U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1aU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffff7ffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x23U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x19U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffefffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x24U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x18U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffdfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x25U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x17U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffbfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x26U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x16U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffff7fffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x27U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x15U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffeffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x28U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x14U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffdffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x29U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x13U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffbffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x2aU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x12U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffff7ffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x2bU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x11U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffefffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x2cU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x10U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffdfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x2dU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xfU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffbfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x2eU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xeU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fff7fffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x2fU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xdU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffeffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x30U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xcU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffdffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x31U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xbU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffbffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x32U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xaU)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ff7ffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x33U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 9U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fefffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x34U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 8U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fdfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x35U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 7U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fbfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x36U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 6U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3f7fffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x37U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 5U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3effffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x38U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 4U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3dffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x39U));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 3U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3bffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x3aU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 2U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x37ffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x3bU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                         >> 1U)));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x2fffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x3cU));
    PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x3dU));
    __Vtemp_h0c0bf393__0[0U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U])));
    __Vtemp_h0c0bf393__0[1U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U])));
    __Vtemp_h0c0bf393__0[2U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
                                   ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
                                      ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U])));
    __Vtemp_hc6f8af93__0[0U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U])))));
    __Vtemp_hc6f8af93__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U])))));
    __Vtemp_hc6f8af93__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U]) 
                                | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U]) 
                                   | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
                                       & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U]) 
                                      | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                          & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U]) 
                                         | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
                                             | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U]) 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U])))));
    VL_ADD_W(3, __Vtemp_ha021ce85__0, __Vtemp_h0c0bf393__0, __Vtemp_hc6f8af93__0);
    vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
        = (((4U != (IData)(vlSelf->io_op)) | (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h248979d2__0))
            ? 0ULL : (0xfffffffffffffffULL & (((QData)((IData)(
                                                               (0x3ffffffU 
                                                                & __Vtemp_ha021ce85__0[2U]))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  __Vtemp_ha021ce85__0[1U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    __Vtemp_ha021ce85__0[0U])) 
                                                    >> 0x1eU)))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
        = ((1U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                              ? vlSelf->__VdfgTmp_hf87afcc4__0
                                              : vlSelf->__VdfgTmp_hf0a27d07__0)
            : 0U);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
        = (((2U != (IData)(vlSelf->io_op)) | (1U == (IData)(vlSelf->io_op)))
            ? 0U : ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                     ? vlSelf->__VdfgTmp_hf0a27d07__0
                     : vlSelf->__VdfgTmp_hf87afcc4__0));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x3dU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffffeULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x3cU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffffdULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 1U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x3bU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffffbULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 2U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x3aU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffff7ULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 3U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x39U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffffefULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 4U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x38U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffffdfULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 5U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x37U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffffbfULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 6U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x36U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffff7fULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 7U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x35U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffeffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 8U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x34U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffdffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 9U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x33U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffbffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0xaU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x32U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffff7ffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0xbU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x31U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffefffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0xcU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x30U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffdfffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0xdU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2fU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffffbfffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0xeU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2eU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffff7fffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0xfU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2dU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffeffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x10U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2cU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffdffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x11U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2bU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffbffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x12U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x2aU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffff7ffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x13U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x29U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffefffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x14U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x28U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffdfffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x15U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x27U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffffbfffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x16U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x26U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffff7fffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x17U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x25U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffeffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x18U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x24U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffdffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x19U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x23U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffbffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x1aU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x22U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffff7ffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x1bU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x21U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffefffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x1cU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x20U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffdfffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x1dU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1fU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffbfffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x1eU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1eU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffff7fffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x1fU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1dU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffeffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x20U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1cU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffdffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x21U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1bU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffbffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x22U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x1aU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffff7ffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x23U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x19U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffefffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x24U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x18U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffdfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x25U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x17U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffbfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x26U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x16U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffff7fffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x27U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x15U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffeffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x28U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x14U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffdffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x29U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x13U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffbffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x2aU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x12U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffff7ffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x2bU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x11U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffefffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x2cU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0x10U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffdfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x2dU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xfU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffbfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x2eU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xeU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fff7fffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x2fU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xdU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffeffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x30U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xcU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffdffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x31U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xbU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffbffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x32U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 0xaU)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ff7ffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x33U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 9U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fefffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x34U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 8U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fdfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x35U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 7U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fbfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x36U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 6U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3f7fffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x37U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 5U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3effffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x38U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 4U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3dffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x39U));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 3U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3bffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x3aU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 2U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x37ffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x3bU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i 
                         >> 1U)));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x2fffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x3cU));
    PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i));
    vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_div__DOT__lzcMod__DOT____Vlvbound_he2dbd00c__0)) 
              << 0x3dU));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x1dU));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffeU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x1cU));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffdU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 1U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x1bU));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffbU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 2U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x1aU));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffff7U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 3U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x19U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffefU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 4U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffdfU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 5U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffbfU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 6U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffff7fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 7U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffeffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 8U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffdffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 9U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffbffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffff7ffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffefffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffdfffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffbfffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fff7fffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xfU));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffeffffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x10U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffdffffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x11U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffbffffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x12U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ff7ffffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x13U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fefffffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x14U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fdfffffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x15U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fbfffffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x16U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3f7fffffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x17U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3effffffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x18U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3dffffffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x19U));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3bffffffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x1aU));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x37ffffffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x1bU));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x2fffffffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x1cU));
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x1dU));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x1dU));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffeU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x1cU));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffdU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 1U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x1bU));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffbU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 2U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x1aU));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffff7U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 3U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x19U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffefU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 4U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffdfU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 5U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffbfU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 6U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffff7fU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 7U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffeffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 8U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffdffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 9U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffbffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xaU));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffff7ffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xbU));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffefffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xcU));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffdfffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xdU));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffbfffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xeU));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fff7fffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0xfU));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffeffffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x10U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffdffffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x11U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffbffffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x12U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ff7ffffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x13U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fefffffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x14U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fdfffffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x15U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fbfffffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x16U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3f7fffffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x17U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3effffffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x18U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3dffffffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x19U));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3bffffffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x1aU));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x37ffffffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x1bU));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x2fffffffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x1cU));
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 
        = (1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffU & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0) 
              << 0x1dU));
}
