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
    // Body
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
    vlSelf->PvuTop__DOT___GEN_5 = ((5U != (IData)(vlSelf->io_op)) 
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
        = ((((0x40000000U & vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6)
              ? (0x1fU & (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                          - (IData)(1U))) : (0x20U 
                                             | (0x1fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))))) 
            << 2U) | (3U & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
                            >> 0x1dU)));
    vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
        = (((IData)((0U != vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6)) 
            << 0x1bU) | (0x7ffffffU & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
                                       >> 2U)));
    vlSelf->__VdfgTmp_h7007ff78__0 = (((QData)((IData)(
                                                       (0U 
                                                        != vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6))) 
                                       << 0x38U) | 
                                      ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                       << 0x1cU));
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
    VlWide<3>/*95:0*/ __Vtemp_hdee4f1c4__0;
    VlWide<3>/*95:0*/ __Vtemp_hd52d7be9__0;
    VlWide<3>/*95:0*/ __Vtemp_h8768cd0d__0;
    VlWide<3>/*95:0*/ __Vtemp_h38b59b72__0;
    VlWide<3>/*95:0*/ __Vtemp_h49301757__0;
    VlWide<3>/*95:0*/ __Vtemp_h066a7276__0;
    VlWide<3>/*95:0*/ __Vtemp_hd857f979__0;
    VlWide<3>/*95:0*/ __Vtemp_h077ab681__0;
    VlWide<3>/*95:0*/ __Vtemp_h28490a55__0;
    VlWide<3>/*95:0*/ __Vtemp_h9072e38f__0;
    VlWide<3>/*95:0*/ __Vtemp_h193a0fe6__0;
    // Body
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
    vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp 
        = ((((0x40000000U & vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)
              ? (0x1fU & (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                          - (IData)(1U))) : (0x20U 
                                             | (0x1fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))))) 
            << 2U) | (3U & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                            >> 0x1dU)));
    vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac 
        = (((IData)((0U != vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)) 
            << 0x1bU) | (0x7ffffffU & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                       >> 2U)));
    __Vtemp_hdee4f1c4__0[0U] = (IData)((0xffffffffffffffULL 
                                        & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)))));
    __Vtemp_hdee4f1c4__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)))) 
                                        >> 0x20U));
    __Vtemp_hdee4f1c4__0[2U] = 0U;
    __Vtemp_hd52d7be9__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                                              * (0xffffffffffffffULL 
                                                 & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac))))))));
    __Vtemp_hd52d7be9__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                                               * (0xffffffffffffffULL 
                                                  & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac))))))) 
                                        >> 0x20U));
    __Vtemp_hd52d7be9__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h8768cd0d__0, __Vtemp_hdee4f1c4__0, __Vtemp_hd52d7be9__0);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[0U] 
        = __Vtemp_h8768cd0d__0[0U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[1U] 
        = __Vtemp_h8768cd0d__0[1U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[2U] 
        = (0xfffffU & __Vtemp_h8768cd0d__0[2U]);
    VL_SHIFTR_WWI(84,84,32, __Vtemp_h38b59b72__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full, 0x1cU);
    __Vtemp_h49301757__0[0U] = __Vtemp_h38b59b72__0[0U];
    __Vtemp_h49301757__0[1U] = __Vtemp_h38b59b72__0[1U];
    __Vtemp_h49301757__0[2U] = (0xfffffU & __Vtemp_h38b59b72__0[2U]);
    __Vtemp_h066a7276__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                                              * (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                          >> 0x1cU))))))));
    __Vtemp_h066a7276__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                                               * (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                           >> 0x1cU))))))) 
                                        >> 0x20U));
    __Vtemp_h066a7276__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_hd857f979__0, __Vtemp_h49301757__0, __Vtemp_h066a7276__0);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[0U] 
        = __Vtemp_hd857f979__0[0U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[1U] 
        = __Vtemp_hd857f979__0[1U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[2U] 
        = (0xfffffU & __Vtemp_hd857f979__0[2U]);
    VL_SHIFTR_WWI(84,84,32, __Vtemp_h077ab681__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full, 0x1cU);
    __Vtemp_h28490a55__0[0U] = __Vtemp_h077ab681__0[0U];
    __Vtemp_h28490a55__0[1U] = __Vtemp_h077ab681__0[1U];
    __Vtemp_h28490a55__0[2U] = (0xfffffU & __Vtemp_h077ab681__0[2U]);
    __Vtemp_h9072e38f__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                                              * (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                          >> 0x1cU))))))));
    __Vtemp_h9072e38f__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                                               * (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                           >> 0x1cU))))))) 
                                        >> 0x20U));
    __Vtemp_h9072e38f__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h193a0fe6__0, __Vtemp_h28490a55__0, __Vtemp_h9072e38f__0);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
        = __Vtemp_h193a0fe6__0[0U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
        = __Vtemp_h193a0fe6__0[1U];
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
        = (0xfffffU & __Vtemp_h193a0fe6__0[2U]);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 5U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 5U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 7U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 7U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 9U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 9U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                   >> 0x1dU)) | (2U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                        >> 0x1dU)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                   >> 0x1dU)) | (4U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                        >> 0x1dU)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (2U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (4U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 1U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 1U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 3U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 3U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 5U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 5U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 7U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 7U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x19U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x19U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x1bU))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x1bU))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                   >> 0x1dU)) | (2U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                   >> 0x1dU)) | (4U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (2U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (4U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 1U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 1U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 3U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 3U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 9U))) | (2U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 9U))) | (4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->__VdfgTmp_h297294cf__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                    >> 0x1cU))) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                      >> 0x1cU))))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                   >> 0x1dU)) | (6U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                        >> 0x1dU)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))) | 
           (6U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 1U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 1U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 3U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 3U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 5U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 5U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 5U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 5U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 7U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 7U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 9U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 9U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xdU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xfU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x11U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 7U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 7U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x17U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x19U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x19U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x1bU))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1bU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                   >> 0x1dU)) | (6U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                        >> 0x1dU)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))) | 
           (6U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 1U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 1U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 9U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 9U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xbU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xdU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0xfU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x11U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x13U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                               >> 0xbU))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 3U))) | (6U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                  >> 3U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x15U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_h297294cf__0) 
           & ((2U == (3U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                            >> 0x1cU))) | (3U == (3U 
                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                     >> 0x1cU)))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                   >> 0x1dU)) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                    >> 0x1fU)))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 1U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 3U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 5U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 5U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 7U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 9U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xdU))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xfU))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0x11U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 7U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x17U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x19U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x1bU))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                   >> 0x1dU)) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                          << 1U) | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 0x1fU)))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 1U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 9U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xbU))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xdU))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0xfU))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x11U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x13U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 0xbU))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                         >> 3U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0 
        = ((4U == (7U & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                         >> 0x15U))) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                       >> 0x1dU)) | ((1U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                             >> 0x1dU)) 
                                     | ((2U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                >> 0x1dU)) 
                                        | (3U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                  >> 0x1dU)))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                       >> 0x1dU)) | ((1U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                             >> 0x1dU)) 
                                     | ((2U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1dU)) 
                                        | (3U == (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 0x1dU)))))) 
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
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
           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_hb44b9117__0));
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
    CData/*7:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount1_T;
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T = 0;
    CData/*7:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount2_T;
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T = 0;
    CData/*0:0*/ PvuTop__DOT__fracalign_1__DOT___GEN;
    PvuTop__DOT__fracalign_1__DOT___GEN = 0;
    CData/*0:0*/ PvuTop__DOT__fracalign_1__DOT___GEN_0;
    PvuTop__DOT__fracalign_1__DOT___GEN_0 = 0;
    CData/*0:0*/ PvuTop__DOT__fracalign_1__DOT___GEN_1;
    PvuTop__DOT__fracalign_1__DOT___GEN_1 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0;
    PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0;
    PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT____Vlvbound_h38a23456__0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_haedf4e7e__0;
    VlWide<6>/*191:0*/ __Vtemp_h4abb9c6b__0;
    VlWide<9>/*287:0*/ __Vtemp_h3ba8cc28__0;
    VlWide<13>/*415:0*/ __Vtemp_h3c7a79ea__0;
    VlWide<17>/*543:0*/ __Vtemp_h676f286e__0;
    VlWide<20>/*639:0*/ __Vtemp_h755e1fb3__0;
    VlWide<24>/*767:0*/ __Vtemp_h6d266c30__0;
    VlWide<63>/*2015:0*/ __Vtemp_h96ab459f__0;
    VlWide<65>/*2079:0*/ __Vtemp_hc54f5a79__0;
    VlWide<65>/*2079:0*/ __Vtemp_h7d7c9c34__0;
    VlWide<65>/*2079:0*/ __Vtemp_hdbca98f7__0;
    VlWide<66>/*2111:0*/ __Vtemp_h2b770ac9__0;
    VlWide<66>/*2111:0*/ __Vtemp_h8fadddb1__0;
    VlWide<68>/*2175:0*/ __Vtemp_h9d0e640e__0;
    VlWide<68>/*2175:0*/ __Vtemp_h2d852635__0;
    VlWide<68>/*2175:0*/ __Vtemp_h60e9ee2b__0;
    VlWide<70>/*2239:0*/ __Vtemp_h3e6cc391__0;
    VlWide<70>/*2239:0*/ __Vtemp_h5b1de461__0;
    VlWide<72>/*2303:0*/ __Vtemp_h07027f33__0;
    VlWide<72>/*2303:0*/ __Vtemp_h785931b8__0;
    VlWide<72>/*2303:0*/ __Vtemp_hdb08c1a3__0;
    VlWide<74>/*2367:0*/ __Vtemp_h26aa209c__0;
    VlWide<74>/*2367:0*/ __Vtemp_h9cff1946__0;
    VlWide<75>/*2399:0*/ __Vtemp_hea074c99__0;
    VlWide<75>/*2399:0*/ __Vtemp_h8a6f0bfa__0;
    VlWide<75>/*2399:0*/ __Vtemp_h667fb473__0;
    VlWide<77>/*2463:0*/ __Vtemp_h58f92979__0;
    VlWide<77>/*2463:0*/ __Vtemp_h7ffe585d__0;
    VlWide<79>/*2527:0*/ __Vtemp_hdd64bf86__0;
    VlWide<79>/*2527:0*/ __Vtemp_hf7013580__0;
    VlWide<79>/*2527:0*/ __Vtemp_h68aea160__0;
    VlWide<81>/*2591:0*/ __Vtemp_h57730164__0;
    VlWide<81>/*2591:0*/ __Vtemp_h7bb909e9__0;
    VlWide<82>/*2623:0*/ __Vtemp_h30fe9a2b__0;
    VlWide<82>/*2623:0*/ __Vtemp_hd4d55eeb__0;
    VlWide<82>/*2623:0*/ __Vtemp_h9a8da5c4__0;
    VlWide<84>/*2687:0*/ __Vtemp_h52a591ea__0;
    VlWide<84>/*2687:0*/ __Vtemp_hd2e26ead__0;
    VlWide<86>/*2751:0*/ __Vtemp_hd7cda835__0;
    VlWide<86>/*2751:0*/ __Vtemp_hb5f4d29c__0;
    VlWide<86>/*2751:0*/ __Vtemp_hd359d34c__0;
    VlWide<88>/*2815:0*/ __Vtemp_h29bd6682__0;
    VlWide<88>/*2815:0*/ __Vtemp_h7a4aa081__0;
    VlWide<89>/*2847:0*/ __Vtemp_hb58d1f62__0;
    VlWide<90>/*2879:0*/ __Vtemp_h5b6ef2d0__0;
    VlWide<90>/*2879:0*/ __Vtemp_h96f2337e__0;
    VlWide<91>/*2911:0*/ __Vtemp_h9ef02641__0;
    VlWide<91>/*2911:0*/ __Vtemp_h29810406__0;
    VlWide<93>/*2975:0*/ __Vtemp_ha1d17585__0;
    VlWide<93>/*2975:0*/ __Vtemp_h3b027ef2__0;
    VlWide<93>/*2975:0*/ __Vtemp_hba7e96bf__0;
    VlWide<95>/*3039:0*/ __Vtemp_h5ae7f903__0;
    VlWide<95>/*3039:0*/ __Vtemp_hcc35dc5b__0;
    VlWide<97>/*3103:0*/ __Vtemp_h5f89e8fe__0;
    VlWide<97>/*3103:0*/ __Vtemp_h26aa09ae__0;
    VlWide<97>/*3103:0*/ __Vtemp_h970c1e77__0;
    VlWide<98>/*3135:0*/ __Vtemp_h4a9fcb7a__0;
    VlWide<98>/*3135:0*/ __Vtemp_hd8dd4051__0;
    VlWide<100>/*3199:0*/ __Vtemp_h608ed77a__0;
    VlWide<100>/*3199:0*/ __Vtemp_h38bfc6d8__0;
    VlWide<102>/*3263:0*/ __Vtemp_hcb0d665a__0;
    // Body
    vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_max_exp 
        = (VL_GTS_III(8, (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp), (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp))
            ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)
            : (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 5U))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 5U))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 7U))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 7U))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 9U))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 9U))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0xdU))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 0xdU))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0xfU))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 0xfU))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0x11U))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 0x11U))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    __Vtemp_haedf4e7e__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
                                         << 0x3bU) 
                                        | (((QData)((IData)(
                                                            (3U 
                                                             & (- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                                            << 0x39U) 
                                           | (0x1ffffffffffffffULL 
                                              & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                 ^ 
                                                 (((0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                        >> 0x1cU))) 
                                                   & ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                           >> 0x1cU))) 
                                                      | (IData)(
                                                                ((0x30000000U 
                                                                  == 
                                                                  (0x30000000U 
                                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U])) 
                                                                 & (2U 
                                                                    != 
                                                                    (3U 
                                                                     & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                                        >> 0x1cU)))))))
                                                   ? vlSelf->__VdfgTmp_h7007ff78__0
                                                   : 
                                                  (((IData)(vlSelf->__VdfgTmp_h297294cf__0) 
                                                    & (0x20000000U 
                                                       == 
                                                       (0x30000000U 
                                                        & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U])))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                    << 0x1dU)
                                                    : 0ULL)))))));
    __Vtemp_haedf4e7e__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
                                          << 0x3bU) 
                                         | (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                                             << 0x39U) 
                                            | (0x1ffffffffffffffULL 
                                               & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                  ^ 
                                                  (((0U 
                                                     != 
                                                     (3U 
                                                      & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                         >> 0x1cU))) 
                                                    & ((1U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                            >> 0x1cU))) 
                                                       | (IData)(
                                                                 ((0x30000000U 
                                                                   == 
                                                                   (0x30000000U 
                                                                    & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U])) 
                                                                  & (2U 
                                                                     != 
                                                                     (3U 
                                                                      & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                                         >> 0x1cU)))))))
                                                    ? vlSelf->__VdfgTmp_h7007ff78__0
                                                    : 
                                                   (((IData)(vlSelf->__VdfgTmp_h297294cf__0) 
                                                     & (0x20000000U 
                                                        == 
                                                        (0x30000000U 
                                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U])))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                     << 0x1dU)
                                                     : 0ULL)))))) 
                                        >> 0x20U));
    __Vtemp_h4abb9c6b__0[4U] = (((IData)((0x1ffffffffffffffULL 
                                          & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                             ^ (((0U 
                                                  != 
                                                  (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                   >> 0x1dU)) 
                                                 & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                    | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                       & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                 ? vlSelf->__VdfgTmp_h7007ff78__0
                                                 : 
                                                (((~ 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                      >> 0x1dU)) 
                                                    | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                  ? 
                                                 ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                  << 0x1dU)
                                                  : 0ULL))))) 
                                 >> 0xeU) | ((IData)(
                                                     ((0x1ffffffffffffffULL 
                                                       & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != 
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                              >> 0x1dU)) 
                                                            & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                               | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                            ? vlSelf->__VdfgTmp_h7007ff78__0
                                                            : 
                                                           (((~ 
                                                              ((0U 
                                                                == 
                                                                (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                                 >> 0x1dU)) 
                                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                             ? 
                                                            ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                             << 0x1dU)
                                                             : 0ULL)))) 
                                                      >> 0x20U)) 
                                             << 0x12U));
    __Vtemp_h3ba8cc28__0[8U] = (((IData)((0x1ffffffffffffffULL 
                                          & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                             ^ (((0U 
                                                  != 
                                                  (7U 
                                                   & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                       << 1U) 
                                                      | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                         >> 0x1fU)))) 
                                                 & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                                    | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                       & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                 ? vlSelf->__VdfgTmp_h7007ff78__0
                                                 : 
                                                (((~ 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                          << 1U) 
                                                         | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                            >> 0x1fU)))) 
                                                    | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                  ? 
                                                 ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                  << 0x1dU)
                                                  : 0ULL))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x1ffffffffffffffULL 
                                                        & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           (((0U 
                                                              != 
                                                              (7U 
                                                               & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                   << 1U) 
                                                                  | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                                     >> 0x1fU)))) 
                                                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                             ? vlSelf->__VdfgTmp_h7007ff78__0
                                                             : 
                                                            (((~ 
                                                               ((0U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                      << 1U) 
                                                                     | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                                        >> 0x1fU)))) 
                                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                              ? 
                                                             ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                              << 0x1dU)
                                                              : 0ULL)))) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h3c7a79ea__0[0xbU] = (((IData)((0x1ffffffffffffffULL 
                                            & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                               ^ ((
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                      | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                   ? vlSelf->__VdfgTmp_h7007ff78__0
                                                   : 
                                                  (((~ 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                           >> 1U))) 
                                                      | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                    & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                    << 0x1dU)
                                                    : 0ULL))))) 
                                   >> 0xaU) | ((IData)(
                                                       ((0x1ffffffffffffffULL 
                                                         & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                            ^ 
                                                            (((0U 
                                                               != 
                                                               (7U 
                                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                   >> 1U))) 
                                                              & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                                 | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                    & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                              ? vlSelf->__VdfgTmp_h7007ff78__0
                                                              : 
                                                             (((~ 
                                                                ((0U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                      >> 1U))) 
                                                                 | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                               & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                               ? 
                                                              ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                               << 0x1dU)
                                                               : 0ULL)))) 
                                                        >> 0x20U)) 
                                               << 0x16U));
    __Vtemp_h676f286e__0[0xfU] = (((IData)((0x1ffffffffffffffULL 
                                            & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                               ^ ((
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                        >> 3U))) 
                                                   & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                      | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                   ? vlSelf->__VdfgTmp_h7007ff78__0
                                                   : 
                                                  (((~ 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                           >> 3U))) 
                                                      | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                    & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                    << 0x1dU)
                                                    : 0ULL))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0x1ffffffffffffffULL 
                                                          & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                                             ^ 
                                                             (((0U 
                                                                != 
                                                                (7U 
                                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                    >> 3U))) 
                                                               & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                                  | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                     & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                               ? vlSelf->__VdfgTmp_h7007ff78__0
                                                               : 
                                                              (((~ 
                                                                 ((0U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                       >> 3U))) 
                                                                  | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                                & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                ? 
                                                               ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                                << 0x1dU)
                                                                : 0ULL)))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_h755e1fb3__0[0x12U] = (((IData)((0x1ffffffffffffffULL 
                                             & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                         >> 5U))) 
                                                    & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                       | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                          & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                    ? vlSelf->__VdfgTmp_h7007ff78__0
                                                    : 
                                                   (((~ 
                                                      ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                            >> 5U))) 
                                                       | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                     & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                     << 0x1dU)
                                                     : 0ULL))))) 
                                    >> 6U) | ((IData)(
                                                      ((0x1ffffffffffffffULL 
                                                        & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           (((0U 
                                                              != 
                                                              (7U 
                                                               & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                  >> 5U))) 
                                                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                             ? vlSelf->__VdfgTmp_h7007ff78__0
                                                             : 
                                                            (((~ 
                                                               ((0U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                     >> 5U))) 
                                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                              ? 
                                                             ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                              << 0x1dU)
                                                              : 0ULL)))) 
                                                       >> 0x20U)) 
                                              << 0x1aU));
    __Vtemp_h6d266c30__0[0x16U] = (((IData)((0x1ffffffffffffffULL 
                                             & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                         >> 7U))) 
                                                    & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                       | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                          & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                    ? vlSelf->__VdfgTmp_h7007ff78__0
                                                    : 
                                                   (((~ 
                                                      ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                            >> 7U))) 
                                                       | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                     & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                     << 0x1dU)
                                                     : 0ULL))))) 
                                    >> 0x14U) | ((IData)(
                                                         ((0x1ffffffffffffffULL 
                                                           & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                              ^ 
                                                              (((0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                     >> 7U))) 
                                                                & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                                   | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                ? vlSelf->__VdfgTmp_h7007ff78__0
                                                                : 
                                                               (((~ 
                                                                  ((0U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                        >> 7U))) 
                                                                   | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                                 & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                 ? 
                                                                ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                                 << 0x1dU)
                                                                 : 0ULL)))) 
                                                          >> 0x20U)) 
                                                 << 0xcU));
    vlSelf->__VdfgTmp_h4023b914__0[0U] = __Vtemp_haedf4e7e__0[0U];
    vlSelf->__VdfgTmp_h4023b914__0[1U] = __Vtemp_haedf4e7e__0[1U];
    vlSelf->__VdfgTmp_h4023b914__0[2U] = 0U;
    vlSelf->__VdfgTmp_h4023b914__0[3U] = (((IData)(
                                                   (0x1ffffffffffffffULL 
                                                    & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                                       ^ 
                                                       (((0U 
                                                          != 
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                           >> 0x1dU)) 
                                                         & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                            | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                               & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                         ? vlSelf->__VdfgTmp_h7007ff78__0
                                                         : 
                                                        (((~ 
                                                           ((0U 
                                                             == 
                                                             (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                              >> 0x1dU)) 
                                                            | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                          & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                          ? 
                                                         ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                          << 0x1dU)
                                                          : 0ULL))))) 
                                           << 0x12U) 
                                          | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                             << 0x10U));
    vlSelf->__VdfgTmp_h4023b914__0[4U] = __Vtemp_h4abb9c6b__0[4U];
    vlSelf->__VdfgTmp_h4023b914__0[5U] = (0x1000U | 
                                          ((0x800U 
                                            & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                               << 0xbU)) 
                                           | ((IData)(
                                                      ((0x1ffffffffffffffULL 
                                                        & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           (((0U 
                                                              != 
                                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                               >> 0x1dU)) 
                                                             & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                                | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                             ? vlSelf->__VdfgTmp_h7007ff78__0
                                                             : 
                                                            (((~ 
                                                               ((0U 
                                                                 == 
                                                                 (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                                  >> 0x1dU)) 
                                                                | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                              & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                              ? 
                                                             ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                              << 0x1dU)
                                                              : 0ULL)))) 
                                                       >> 0x20U)) 
                                              >> 0xeU)));
    vlSelf->__VdfgTmp_h4023b914__0[6U] = 0U;
    vlSelf->__VdfgTmp_h4023b914__0[7U] = (((IData)(
                                                   (0x1ffffffffffffffULL 
                                                    & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                                       ^ 
                                                       (((0U 
                                                          != 
                                                          (7U 
                                                           & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                               << 1U) 
                                                              | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                                 >> 0x1fU)))) 
                                                         & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                                            | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                               & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                         ? vlSelf->__VdfgTmp_h7007ff78__0
                                                         : 
                                                        (((~ 
                                                           ((0U 
                                                             == 
                                                             (7U 
                                                              & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                  << 1U) 
                                                                 | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                                    >> 0x1fU)))) 
                                                            | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                                          & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                          ? 
                                                         ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                          << 0x1dU)
                                                          : 0ULL))))) 
                                           << 4U) | 
                                          ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                           << 2U));
    vlSelf->__VdfgTmp_h4023b914__0[8U] = (0x40000000U 
                                          | ((0x20000000U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                 << 0x1dU)) 
                                             | __Vtemp_h3ba8cc28__0[8U]));
    vlSelf->__VdfgTmp_h4023b914__0[9U] = 0U;
    vlSelf->__VdfgTmp_h4023b914__0[0xaU] = (((IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                         ^ 
                                                         (((0U 
                                                            != 
                                                            (7U 
                                                             & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                >> 1U))) 
                                                           & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                              | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                 & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                           ? vlSelf->__VdfgTmp_h7007ff78__0
                                                           : 
                                                          (((~ 
                                                             ((0U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                   >> 1U))) 
                                                              | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                            ? 
                                                           ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                            << 0x1dU)
                                                            : 0ULL))))) 
                                             << 0x16U) 
                                            | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                               << 0x14U));
    vlSelf->__VdfgTmp_h4023b914__0[0xbU] = __Vtemp_h3c7a79ea__0[0xbU];
    vlSelf->__VdfgTmp_h4023b914__0[0xcU] = (0x10000U 
                                            | ((0x8000U 
                                                & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                   << 0xfU)) 
                                               | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                               ^ 
                                                               (((0U 
                                                                  != 
                                                                  (7U 
                                                                   & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                      >> 1U))) 
                                                                 & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                                                    | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                       & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                 ? vlSelf->__VdfgTmp_h7007ff78__0
                                                                 : 
                                                                (((~ 
                                                                   ((0U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                         >> 1U))) 
                                                                    | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                  ? 
                                                                 ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                                  << 0x1dU)
                                                                  : 0ULL)))) 
                                                           >> 0x20U)) 
                                                  >> 0xaU)));
    vlSelf->__VdfgTmp_h4023b914__0[0xdU] = 0U;
    vlSelf->__VdfgTmp_h4023b914__0[0xeU] = (((IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                                         ^ 
                                                         (((0U 
                                                            != 
                                                            (7U 
                                                             & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                >> 3U))) 
                                                           & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                              | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                 & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                           ? vlSelf->__VdfgTmp_h7007ff78__0
                                                           : 
                                                          (((~ 
                                                             ((0U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                   >> 3U))) 
                                                              | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                            & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                            ? 
                                                           ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                            << 0x1dU)
                                                            : 0ULL))))) 
                                             << 8U) 
                                            | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                               << 6U));
    vlSelf->__VdfgTmp_h4023b914__0[0xfU] = __Vtemp_h676f286e__0[0xfU];
    vlSelf->__VdfgTmp_h4023b914__0[0x10U] = (4U | (
                                                   (2U 
                                                    & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                       << 1U)) 
                                                   | ((IData)(
                                                              ((0x1ffffffffffffffULL 
                                                                & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                                                   ^ 
                                                                   (((0U 
                                                                      != 
                                                                      (7U 
                                                                       & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                          >> 3U))) 
                                                                     & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                                                        | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                     ? vlSelf->__VdfgTmp_h7007ff78__0
                                                                     : 
                                                                    (((~ 
                                                                       ((0U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                             >> 3U))) 
                                                                        | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                      ? 
                                                                     ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                                      << 0x1dU)
                                                                      : 0ULL)))) 
                                                               >> 0x20U)) 
                                                      >> 0x18U)));
    vlSelf->__VdfgTmp_h4023b914__0[0x11U] = (((IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                 >> 5U))) 
                                                            & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                               | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                            ? vlSelf->__VdfgTmp_h7007ff78__0
                                                            : 
                                                           (((~ 
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                    >> 5U))) 
                                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                             ? 
                                                            ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                             << 0x1dU)
                                                             : 0ULL))))) 
                                              << 0x1aU) 
                                             | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                << 0x18U));
    vlSelf->__VdfgTmp_h4023b914__0[0x12U] = __Vtemp_h755e1fb3__0[0x12U];
    vlSelf->__VdfgTmp_h4023b914__0[0x13U] = (0x100000U 
                                             | ((0x80000U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                    << 0x13U)) 
                                                | ((IData)(
                                                           ((0x1ffffffffffffffULL 
                                                             & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                                ^ 
                                                                (((0U 
                                                                   != 
                                                                   (7U 
                                                                    & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                       >> 5U))) 
                                                                  & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                                                     | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                        & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                  ? vlSelf->__VdfgTmp_h7007ff78__0
                                                                  : 
                                                                 (((~ 
                                                                    ((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                          >> 5U))) 
                                                                     | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                                                   & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                   ? 
                                                                  ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                                   << 0x1dU)
                                                                   : 0ULL)))) 
                                                            >> 0x20U)) 
                                                   >> 6U)));
    vlSelf->__VdfgTmp_h4023b914__0[0x14U] = 0U;
    vlSelf->__VdfgTmp_h4023b914__0[0x15U] = (((IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                 >> 7U))) 
                                                            & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                               | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                  & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                            ? vlSelf->__VdfgTmp_h7007ff78__0
                                                            : 
                                                           (((~ 
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                    >> 7U))) 
                                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                             ? 
                                                            ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                             << 0x1dU)
                                                             : 0ULL))))) 
                                              << 0xcU) 
                                             | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                << 0xaU));
    vlSelf->__VdfgTmp_h4023b914__0[0x16U] = __Vtemp_h6d266c30__0[0x16U];
    vlSelf->__VdfgTmp_h4023b914__0[0x17U] = ((0x20U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                 << 5U)) 
                                             | ((IData)(
                                                        ((0x1ffffffffffffffULL 
                                                          & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                             ^ 
                                                             (((0U 
                                                                != 
                                                                (7U 
                                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                    >> 7U))) 
                                                               & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                                                  | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                     & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                               ? vlSelf->__VdfgTmp_h7007ff78__0
                                                               : 
                                                              (((~ 
                                                                 ((0U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                       >> 7U))) 
                                                                  | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                                                & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                ? 
                                                               ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                                                << 0x1dU)
                                                                : 0ULL)))) 
                                                         >> 0x20U)) 
                                                >> 0x14U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x17U))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x17U))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x19U))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x19U))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x1bU))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x1bU))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                               >> 0x1dU)) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                 >> 0x1dU)) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                 << 1U) 
                                                | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x1fU)))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                     << 1U) 
                                                    | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                       >> 0x1fU)))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 1U))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 1U))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 9U))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 9U))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0xbU))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0xbU))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0xdU))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0xdU))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0xfU))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0xfU))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x11U))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x11U))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x13U))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x13U))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 0xbU))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 0xbU))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                >> 3U))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                    >> 3U))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                                   ^ (((0U != (7U & 
                                               (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                >> 0x15U))) 
                                       & ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                          | ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                             & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                       ? vlSelf->__VdfgTmp_h7007ff78__0
                                       : (((~ ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                    >> 0x15U))) 
                                               | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                                           & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                           ? ((QData)((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac)) 
                                              << 0x1dU)
                                           : 0ULL))));
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T 
        = (0xffU & ((IData)(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_max_exp) 
                    - (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)));
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T 
        = (0xffU & ((IData)(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_max_exp) 
                    - (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = (IData)(((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                   << 0x30U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
            << 0x12U) | (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                  << 0x30U) >> 0x20U)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = (0x1000U | ((0x800U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                 << 0xbU)) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0xeU)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] = 0U;
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg) 
                      << 2U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = (0x40000000U | ((0x20000000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                                          << 0x1dU)) 
                          | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
                              >> 0x1cU) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 4U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] = 0U;
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg) 
                         << 0x14U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((0x8000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                       << 0xfU)) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                             >> 0x20U)) 
                                    >> 0xaU));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] = 0U;
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg) 
           << 6U);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] = 0U;
    vlSelf->__VdfgTmp_heb0c548a__0[0U] = (IData)(((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                  << 0x28U));
    vlSelf->__VdfgTmp_heb0c548a__0[1U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                           << 0xaU) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                      << 0x28U) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_heb0c548a__0[2U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                           >> 0x16U) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xaU));
    vlSelf->__VdfgTmp_heb0c548a__0[3U] = (0x10U | (
                                                   (8U 
                                                    & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                                       << 3U)) 
                                                   | ((IData)(
                                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                               >> 0x20U)) 
                                                      >> 0x16U)));
    vlSelf->__VdfgTmp_heb0c548a__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                           << 0x1cU) 
                                          | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg) 
                                             << 0x1aU));
    vlSelf->__VdfgTmp_heb0c548a__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
                                           >> 4U) | 
                                          ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1cU));
    vlSelf->__VdfgTmp_heb0c548a__0[6U] = (0x400000U 
                                          | ((0x200000U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                                                 << 0x15U)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 4U)));
    vlSelf->__VdfgTmp_heb0c548a__0[7U] = 0U;
    vlSelf->__VdfgTmp_heb0c548a__0[8U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                           << 0xeU) 
                                          | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_heb0c548a__0[9U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
                                           >> 0x12U) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xeU));
    vlSelf->__VdfgTmp_heb0c548a__0[0xaU] = (0x100U 
                                            | ((0x80U 
                                                & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                                   << 7U)) 
                                               | ((IData)(
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0x12U)));
    vlSelf->__VdfgTmp_heb0c548a__0[0xbU] = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg) 
                                            << 0x1eU);
    vlSelf->__VdfgTmp_heb0c548a__0[0xcU] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod);
    vlSelf->__VdfgTmp_heb0c548a__0[0xdU] = ((0x2000000U 
                                             & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                                << 0x19U)) 
                                            | (IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                                       >> 0x20U)));
    vlSelf->__VdfgTmp_h3fa43af7__0[0U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                           << 0x1cU) 
                                          | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                             << 0x1aU));
    vlSelf->__VdfgTmp_h3fa43af7__0[1U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                           >> 4U) | 
                                          ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 0x1cU));
    vlSelf->__VdfgTmp_h3fa43af7__0[2U] = (0x400000U 
                                          | ((0x200000U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                                 << 0x15U)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 4U)));
    vlSelf->__VdfgTmp_h3fa43af7__0[3U] = 0U;
    vlSelf->__VdfgTmp_h3fa43af7__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                           << 0xeU) 
                                          | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_h3fa43af7__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                           >> 0x12U) 
                                          | ((IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xeU));
    vlSelf->__VdfgTmp_h3fa43af7__0[6U] = (0x100U | 
                                          ((0x80U & 
                                            ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg)) 
                                             << 7U)) 
                                           | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0x12U)));
    vlSelf->__VdfgTmp_h3fa43af7__0[7U] = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                          << 0x1eU);
    vlSelf->__VdfgTmp_h3fa43af7__0[8U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    vlSelf->__VdfgTmp_h3fa43af7__0[9U] = (0x4000000U 
                                          | ((0x2000000U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                 << 0x19U)) 
                                             | (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                        >> 0x20U))));
    vlSelf->__VdfgTmp_h3fa43af7__0[0xaU] = 0U;
    vlSelf->__VdfgTmp_h3fa43af7__0[0xbU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                             << 0x12U) 
                                            | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg) 
                                               << 0x10U));
    vlSelf->__VdfgTmp_h3fa43af7__0[0xcU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                             >> 0xeU) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                        >> 0x20U)) 
                                               << 0x12U));
    vlSelf->__VdfgTmp_h3fa43af7__0[0xdU] = (0x1000U 
                                            | ((0x800U 
                                                & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                                   << 0xbU)) 
                                               | ((IData)(
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 0xeU)));
    vlSelf->__VdfgTmp_h3fa43af7__0[0xeU] = 0U;
    vlSelf->__VdfgTmp_h3fa43af7__0[0xfU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                             << 4U) 
                                            | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg) 
                                               << 2U));
    vlSelf->__VdfgTmp_h3fa43af7__0[0x10U] = (0x40000000U 
                                             | ((0x20000000U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                                                    << 0x1dU)) 
                                                | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
                                                    >> 0x1cU) 
                                                   | ((IData)(
                                                              (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                                               >> 0x20U)) 
                                                      << 4U))));
    vlSelf->__VdfgTmp_h3fa43af7__0[0x11U] = 0U;
    vlSelf->__VdfgTmp_h3fa43af7__0[0x12U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                              << 0x16U) 
                                             | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg) 
                                                << 0x14U));
    vlSelf->__VdfgTmp_h3fa43af7__0[0x13U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
                                              >> 0xaU) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x16U));
    vlSelf->__VdfgTmp_h3fa43af7__0[0x14U] = (0x10000U 
                                             | ((0x8000U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                                                    << 0xfU)) 
                                                | ((IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 0xaU)));
    vlSelf->__VdfgTmp_h3fa43af7__0[0x15U] = 0U;
    vlSelf->__VdfgTmp_h3fa43af7__0[0x16U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
                                              << 8U) 
                                             | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg) 
                                                << 6U));
    vlSelf->__VdfgTmp_h3fa43af7__0[0x17U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
                                              >> 0x18U) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 8U));
    vlSelf->__VdfgTmp_h3fa43af7__0[0x18U] = ((2U & 
                                              ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                               << 1U)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x18U));
    __Vtemp_h96ab459f__0[0U] = vlSelf->__VdfgTmp_h4023b914__0[0U];
    __Vtemp_h96ab459f__0[1U] = vlSelf->__VdfgTmp_h4023b914__0[1U];
    __Vtemp_h96ab459f__0[2U] = vlSelf->__VdfgTmp_h4023b914__0[2U];
    __Vtemp_h96ab459f__0[3U] = vlSelf->__VdfgTmp_h4023b914__0[3U];
    __Vtemp_h96ab459f__0[4U] = vlSelf->__VdfgTmp_h4023b914__0[4U];
    __Vtemp_h96ab459f__0[5U] = vlSelf->__VdfgTmp_h4023b914__0[5U];
    __Vtemp_h96ab459f__0[6U] = vlSelf->__VdfgTmp_h4023b914__0[6U];
    __Vtemp_h96ab459f__0[7U] = vlSelf->__VdfgTmp_h4023b914__0[7U];
    __Vtemp_h96ab459f__0[8U] = vlSelf->__VdfgTmp_h4023b914__0[8U];
    __Vtemp_h96ab459f__0[9U] = vlSelf->__VdfgTmp_h4023b914__0[9U];
    __Vtemp_h96ab459f__0[0xaU] = vlSelf->__VdfgTmp_h4023b914__0[0xaU];
    __Vtemp_h96ab459f__0[0xbU] = vlSelf->__VdfgTmp_h4023b914__0[0xbU];
    __Vtemp_h96ab459f__0[0xcU] = vlSelf->__VdfgTmp_h4023b914__0[0xcU];
    __Vtemp_h96ab459f__0[0xdU] = vlSelf->__VdfgTmp_h4023b914__0[0xdU];
    __Vtemp_h96ab459f__0[0xeU] = vlSelf->__VdfgTmp_h4023b914__0[0xeU];
    __Vtemp_h96ab459f__0[0xfU] = vlSelf->__VdfgTmp_h4023b914__0[0xfU];
    __Vtemp_h96ab459f__0[0x10U] = vlSelf->__VdfgTmp_h4023b914__0[0x10U];
    __Vtemp_h96ab459f__0[0x11U] = vlSelf->__VdfgTmp_h4023b914__0[0x11U];
    __Vtemp_h96ab459f__0[0x12U] = vlSelf->__VdfgTmp_h4023b914__0[0x12U];
    __Vtemp_h96ab459f__0[0x13U] = vlSelf->__VdfgTmp_h4023b914__0[0x13U];
    __Vtemp_h96ab459f__0[0x14U] = vlSelf->__VdfgTmp_h4023b914__0[0x14U];
    __Vtemp_h96ab459f__0[0x15U] = vlSelf->__VdfgTmp_h4023b914__0[0x15U];
    __Vtemp_h96ab459f__0[0x16U] = vlSelf->__VdfgTmp_h4023b914__0[0x16U];
    __Vtemp_h96ab459f__0[0x17U] = (0x40U | vlSelf->__VdfgTmp_h4023b914__0[0x17U]);
    __Vtemp_h96ab459f__0[0x18U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    << 0x1eU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                 << 0x1cU));
    __Vtemp_h96ab459f__0[0x19U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                    >> 2U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1eU));
    __Vtemp_h96ab459f__0[0x1aU] = (0x1000000U | ((0x800000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                     << 0x17U)) 
                                                 | ((IData)(
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                             >> 0x20U)) 
                                                    >> 2U)));
    __Vtemp_h96ab459f__0[0x1bU] = 0U;
    __Vtemp_h96ab459f__0[0x1cU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                 << 0xeU));
    __Vtemp_h96ab459f__0[0x1dU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_h96ab459f__0[0x1eU] = (0x400U | ((0x200U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                 << 9U)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x10U)));
    __Vtemp_h96ab459f__0[0x1fU] = 0U;
    __Vtemp_h96ab459f__0[0x20U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                    << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
    __Vtemp_h96ab459f__0[0x21U] = (0x10000000U | ((0x8000000U 
                                                   & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                      << 0x1bU)) 
                                                  | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
                                                      >> 0x1eU) 
                                                     | ((IData)(
                                                                (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                                 >> 0x20U)) 
                                                        << 2U))));
    __Vtemp_h96ab459f__0[0x22U] = 0U;
    __Vtemp_h96ab459f__0[0x23U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                 << 0x12U));
    __Vtemp_h96ab459f__0[0x24U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x14U));
    __Vtemp_h96ab459f__0[0x25U] = (0x4000U | ((0x2000U 
                                               & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                  << 0xdU)) 
                                              | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                          >> 0x20U)) 
                                                 >> 0xcU)));
    __Vtemp_h96ab459f__0[0x26U] = 0U;
    __Vtemp_h96ab459f__0[0x27U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                    << 6U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                              << 4U));
    __Vtemp_h96ab459f__0[0x28U] = (((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                    << 0x1fU) | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
                                                  >> 0x1aU) 
                                                 | ((IData)(
                                                            (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                             >> 0x20U)) 
                                                    << 6U)));
    __Vtemp_h96ab459f__0[0x29U] = 1U;
    __Vtemp_h96ab459f__0[0x2aU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    << 0x18U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                 << 0x16U));
    __Vtemp_h96ab459f__0[0x2bU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
                                    >> 8U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x18U));
    __Vtemp_h96ab459f__0[0x2cU] = (0x40000U | ((0x20000U 
                                                & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                   << 0x11U)) 
                                               | ((IData)(
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                           >> 0x20U)) 
                                                  >> 8U)));
    __Vtemp_h96ab459f__0[0x2dU] = 0U;
    __Vtemp_h96ab459f__0[0x2eU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                << 8U));
    __Vtemp_h96ab459f__0[0x2fU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xaU));
    __Vtemp_h96ab459f__0[0x30U] = (0x10U | ((8U & (
                                                   (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                   << 3U)) 
                                            | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                        >> 0x20U)) 
                                               >> 0x16U)));
    __Vtemp_h96ab459f__0[0x31U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                 << 0x1aU));
    __Vtemp_h96ab459f__0[0x32U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod) 
                                    >> 4U) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_h96ab459f__0[0x33U] = (0x400000U | ((0x200000U 
                                                 & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg)) 
                                                    << 0x15U)) 
                                                | ((IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_13_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 4U)));
    __Vtemp_h96ab459f__0[0x34U] = 0U;
    __Vtemp_h96ab459f__0[0x35U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                    << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                                                << 0xcU));
    __Vtemp_h96ab459f__0[0x36U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
                                    >> 0x12U) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                          >> 0x20U)) 
                                                 << 0xeU));
    __Vtemp_h96ab459f__0[0x37U] = (0x100U | ((0x80U 
                                              & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg)) 
                                                 << 7U)) 
                                             | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0x12U)));
    __Vtemp_h96ab459f__0[0x38U] = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
                                   << 0x1eU);
    __Vtemp_h96ab459f__0[0x39U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    __Vtemp_h96ab459f__0[0x3aU] = (0x4000000U | ((0x2000000U 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                     << 0x19U)) 
                                                 | (IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                                                            >> 0x20U))));
    __Vtemp_h96ab459f__0[0x3bU] = 0U;
    __Vtemp_h96ab459f__0[0x3cU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                    << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg) 
                                                 << 0x10U));
    __Vtemp_h96ab459f__0[0x3dU] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                    >> 0xeU) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                         >> 0x20U)) 
                                                << 0x12U));
    __Vtemp_h96ab459f__0[0x3eU] = ((0x800U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                                              << 0xbU)) 
                                   | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                               >> 0x20U)) 
                                      >> 0xeU));
    VL_CONCAT_WQW(2050,54,1996, __Vtemp_hc54f5a79__0, 1ULL, __Vtemp_h96ab459f__0);
    VL_CONCAT_WIW(2051,1,2050, __Vtemp_h7d7c9c34__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg), __Vtemp_hc54f5a79__0);
    VL_EXTEND_WW(2052,2051, __Vtemp_hdbca98f7__0, __Vtemp_h7d7c9c34__0);
    VL_CONCAT_WQW(2109,57,2052, __Vtemp_h2b770ac9__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod, __Vtemp_hdbca98f7__0);
    VL_CONCAT_WIW(2110,1,2109, __Vtemp_h8fadddb1__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))), __Vtemp_h2b770ac9__0);
    VL_CONCAT_WQW(2164,54,2110, __Vtemp_h9d0e640e__0, 1ULL, __Vtemp_h8fadddb1__0);
    VL_CONCAT_WIW(2165,1,2164, __Vtemp_h2d852635__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg), __Vtemp_h9d0e640e__0);
    VL_EXTEND_WW(2166,2165, __Vtemp_h60e9ee2b__0, __Vtemp_h2d852635__0);
    VL_CONCAT_WQW(2223,57,2166, __Vtemp_h3e6cc391__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod, __Vtemp_h60e9ee2b__0);
    VL_CONCAT_WIW(2224,1,2223, __Vtemp_h5b1de461__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))), __Vtemp_h3e6cc391__0);
    VL_CONCAT_WQW(2278,54,2224, __Vtemp_h07027f33__0, 1ULL, __Vtemp_h5b1de461__0);
    VL_CONCAT_WIW(2279,1,2278, __Vtemp_h785931b8__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg), __Vtemp_h07027f33__0);
    VL_EXTEND_WW(2280,2279, __Vtemp_hdb08c1a3__0, __Vtemp_h785931b8__0);
    VL_CONCAT_WQW(2337,57,2280, __Vtemp_h26aa209c__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod, __Vtemp_hdb08c1a3__0);
    VL_CONCAT_WIW(2338,1,2337, __Vtemp_h9cff1946__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))), __Vtemp_h26aa209c__0);
    VL_CONCAT_WQW(2392,54,2338, __Vtemp_hea074c99__0, 1ULL, __Vtemp_h9cff1946__0);
    VL_CONCAT_WIW(2393,1,2392, __Vtemp_h8a6f0bfa__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg), __Vtemp_hea074c99__0);
    VL_EXTEND_WW(2394,2393, __Vtemp_h667fb473__0, __Vtemp_h8a6f0bfa__0);
    VL_CONCAT_WQW(2451,57,2394, __Vtemp_h58f92979__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod, __Vtemp_h667fb473__0);
    VL_CONCAT_WIW(2452,1,2451, __Vtemp_h7ffe585d__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))), __Vtemp_h58f92979__0);
    VL_CONCAT_WQW(2506,54,2452, __Vtemp_hdd64bf86__0, 1ULL, __Vtemp_h7ffe585d__0);
    VL_CONCAT_WIW(2507,1,2506, __Vtemp_hf7013580__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg), __Vtemp_hdd64bf86__0);
    VL_EXTEND_WW(2508,2507, __Vtemp_h68aea160__0, __Vtemp_hf7013580__0);
    VL_CONCAT_WQW(2565,57,2508, __Vtemp_h57730164__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod, __Vtemp_h68aea160__0);
    VL_CONCAT_WIW(2566,1,2565, __Vtemp_h7bb909e9__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))), __Vtemp_h57730164__0);
    VL_CONCAT_WQW(2620,54,2566, __Vtemp_h30fe9a2b__0, 1ULL, __Vtemp_h7bb909e9__0);
    VL_CONCAT_WIW(2621,1,2620, __Vtemp_hd4d55eeb__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg), __Vtemp_h30fe9a2b__0);
    VL_EXTEND_WW(2622,2621, __Vtemp_h9a8da5c4__0, __Vtemp_hd4d55eeb__0);
    VL_CONCAT_WQW(2679,57,2622, __Vtemp_h52a591ea__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod, __Vtemp_h9a8da5c4__0);
    VL_CONCAT_WIW(2680,1,2679, __Vtemp_hd2e26ead__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))), __Vtemp_h52a591ea__0);
    VL_CONCAT_WQW(2734,54,2680, __Vtemp_hd7cda835__0, 1ULL, __Vtemp_hd2e26ead__0);
    VL_CONCAT_WIW(2735,1,2734, __Vtemp_hb5f4d29c__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg), __Vtemp_hd7cda835__0);
    VL_EXTEND_WW(2736,2735, __Vtemp_hd359d34c__0, __Vtemp_hb5f4d29c__0);
    VL_CONCAT_WQW(2793,57,2736, __Vtemp_h29bd6682__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod, __Vtemp_hd359d34c__0);
    VL_CONCAT_WIW(2794,1,2793, __Vtemp_h7a4aa081__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))), __Vtemp_h29bd6682__0);
    VL_CONCAT_WQW(2848,54,2794, __Vtemp_hb58d1f62__0, 1ULL, __Vtemp_h7a4aa081__0);
    VL_CONCAT_WIW(2849,1,2848, __Vtemp_h5b6ef2d0__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg), __Vtemp_hb58d1f62__0);
    VL_EXTEND_WW(2850,2849, __Vtemp_h96f2337e__0, __Vtemp_h5b6ef2d0__0);
    VL_CONCAT_WQW(2907,57,2850, __Vtemp_h9ef02641__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod, __Vtemp_h96f2337e__0);
    VL_CONCAT_WIW(2908,1,2907, __Vtemp_h29810406__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))), __Vtemp_h9ef02641__0);
    VL_CONCAT_WQW(2962,54,2908, __Vtemp_ha1d17585__0, 1ULL, __Vtemp_h29810406__0);
    VL_CONCAT_WIW(2963,1,2962, __Vtemp_h3b027ef2__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg), __Vtemp_ha1d17585__0);
    VL_EXTEND_WW(2964,2963, __Vtemp_hba7e96bf__0, __Vtemp_h3b027ef2__0);
    VL_CONCAT_WQW(3021,57,2964, __Vtemp_h5ae7f903__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod, __Vtemp_hba7e96bf__0);
    VL_CONCAT_WIW(3022,1,3021, __Vtemp_hcc35dc5b__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))), __Vtemp_h5ae7f903__0);
    VL_CONCAT_WQW(3076,54,3022, __Vtemp_h5f89e8fe__0, 1ULL, __Vtemp_hcc35dc5b__0);
    VL_CONCAT_WIW(3077,1,3076, __Vtemp_h26aa09ae__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg), __Vtemp_h5f89e8fe__0);
    VL_EXTEND_WW(3078,3077, __Vtemp_h970c1e77__0, __Vtemp_h26aa09ae__0);
    VL_CONCAT_WQW(3135,57,3078, __Vtemp_h4a9fcb7a__0, vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod, __Vtemp_h970c1e77__0);
    VL_CONCAT_WIW(3136,1,3135, __Vtemp_hd8dd4051__0, 
                  (1U & (~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))), __Vtemp_h4a9fcb7a__0);
    VL_EXTEND_WW(3190,3136, __Vtemp_h608ed77a__0, __Vtemp_hd8dd4051__0);
    VL_CONCAT_WIW(3191,1,3190, __Vtemp_h38bfc6d8__0, (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg), __Vtemp_h608ed77a__0);
    VL_EXTEND_WW(3248,3191, __Vtemp_hcb0d665a__0, __Vtemp_h38bfc6d8__0);
    VL_ASSIGN_W(3248,vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT____Vcellout__genProds__io_partial_prods, __Vtemp_hcb0d665a__0);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
            << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                        << 0xcU));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
            >> 0x12U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                  >> 0x20U)) << 0xeU));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[2U] 
        = (0x100U | ((0x80U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                               << 7U)) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x12U)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[3U] 
        = ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
           << 0x1eU);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[4U] 
        = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod);
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[5U] 
        = (0x4000000U | ((0x2000000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                        << 0x19U)) 
                         | (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                    >> 0x20U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[6U] = 0U;
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[7U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            << 0x12U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                         << 0x10U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[8U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[9U] 
        = (0x1000U | ((0x800U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                 << 0xbU)) | ((IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                                       >> 0x20U)) 
                                              >> 0xeU)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xaU] = 0U;
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xbU] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
            << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                      << 2U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xcU] 
        = (0x40000000U | ((0x20000000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                          << 0x1dU)) 
                          | (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                              >> 0x1cU) | ((IData)(
                                                   (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                    >> 0x20U)) 
                                           << 4U))));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xdU] = 0U;
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xeU] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
            << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                         << 0x14U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0xfU] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x10U] 
        = (0x10000U | ((0x8000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                   << 0xfU)) | ((IData)(
                                                        (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                         >> 0x20U)) 
                                                >> 0xaU)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x11U] = 0U;
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x12U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                      << 6U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x13U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                  >> 0x20U)) << 8U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x14U] 
        = (4U | ((2U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                        << 1U)) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                            >> 0x20U)) 
                                   >> 0x18U)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x15U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                         << 0x18U));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x16U] 
        = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            >> 6U) | ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                               >> 0x20U)) << 0x1aU));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x17U] 
        = (0x100000U | ((0x80000U & ((~ (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                     << 0x13U)) | ((IData)(
                                                           (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                            >> 0x20U)) 
                                                   >> 6U)));
    vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__csa_tree_B__io_operands_i[0x18U] = 0U;
    PvuTop__DOT__fracalign_1__DOT___GEN = ((~ (IData)(
                                                      (0U 
                                                       != (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T)))) 
                                           & (0U != (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T)));
    PvuTop__DOT__fracalign_1__DOT___GEN_0 = ((~ (IData)(
                                                        (0U 
                                                         != (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T)))) 
                                             & (0U 
                                                != (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T)));
    PvuTop__DOT__fracalign_1__DOT___GEN_1 = (1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T)))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T))))));
    if (PvuTop__DOT__fracalign_1__DOT___GEN) {
        vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align 
            = (0x3fffffffU & (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                              << 2U));
        vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align 
            = (0x3fffffffU & ((0x1dU >= (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T))
                               ? ((vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac 
                                   << 2U) >> (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T))
                               : 0U));
    } else {
        vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align 
            = (0x3fffffffU & ((IData)(PvuTop__DOT__fracalign_1__DOT___GEN_0)
                               ? ((0x1dU >= (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T))
                                   ? ((vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                       << 2U) >> (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T))
                                   : 0U) : ((IData)(PvuTop__DOT__fracalign_1__DOT___GEN_1)
                                             ? (vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                << 2U)
                                             : ((0x1dU 
                                                 >= 
                                                 ((0x1eU 
                                                   < 
                                                   (0xffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T))))
                                                   ? 0x1eU
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T)))))
                                                 ? 
                                                ((vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                  << 2U) 
                                                 >> 
                                                 ((0x1eU 
                                                   < 
                                                   (0xffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T))))
                                                   ? 0x1eU
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T)))))
                                                 : 0U))));
        vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align 
            = (0x3fffffffU & (((IData)(PvuTop__DOT__fracalign_1__DOT___GEN_0) 
                               | (IData)(PvuTop__DOT__fracalign_1__DOT___GEN_1))
                               ? (vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  << 2U) : ((0x1dU 
                                             >= ((0x1eU 
                                                  < 
                                                  (0xffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T))))
                                                  ? 0x1eU
                                                  : 
                                                 (0xffU 
                                                  & ((IData)(2U) 
                                                     + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T)))))
                                             ? ((vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                 << 2U) 
                                                >> 
                                                ((0x1eU 
                                                  < 
                                                  (0xffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T))))
                                                  ? 0x1eU
                                                  : 
                                                 (0xffU 
                                                  & ((IData)(2U) 
                                                     + (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T)))))
                                             : 0U)));
    }
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater = 
        (vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align 
         > vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align);
    vlSelf->PvuTop__DOT__add__DOT__sum = (0x7fffffffU 
                                          & (vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align 
                                             + vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align));
    vlSelf->__VdfgTmp_h4ac99e53__0 = (0x3fffffffU & 
                                      ((IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)
                                        ? (vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align 
                                           - vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align)
                                        : (vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align 
                                           - vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align)));
    vlSelf->PvuTop__DOT__add__DOT__io_overflow = ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                                  & (vlSelf->PvuTop__DOT__add__DOT__sum 
                                                     >> 0x1eU));
    vlSelf->__VdfgTmp_h4e1badcc__0 = (0x3fffffffU & 
                                      ((0x40000000U 
                                        & vlSelf->PvuTop__DOT__add__DOT__sum)
                                        ? (vlSelf->PvuTop__DOT__add__DOT__sum 
                                           >> 1U) : vlSelf->PvuTop__DOT__add__DOT__sum));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
        = ((1U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                              ? vlSelf->__VdfgTmp_h4e1badcc__0
                                              : vlSelf->__VdfgTmp_h4ac99e53__0)
            : 0U);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
        = (((2U != (IData)(vlSelf->io_op)) | (1U == (IData)(vlSelf->io_op)))
            ? 0U : ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                     ? vlSelf->__VdfgTmp_h4ac99e53__0
                     : vlSelf->__VdfgTmp_h4e1badcc__0));
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__11(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__11\n"); );
    // Init
    IData/*31:0*/ __Vtemp_hd1cc9bd3__0;
    // Body
    __Vtemp_hd1cc9bd3__0 = (((IData)((0U != (0x30000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                             << 0x1dU) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                           << 0x1cU) 
                                          | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1bU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1aU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0x300000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x15U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x14U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x13U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x12U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x11U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x10U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_hd1cc9bd3__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__12(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__12\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hc292476d__0;
    VlWide<3>/*95:0*/ __Vtemp_hc691c38a__0;
    // Body
    __Vtemp_hc292476d__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_hc292476d__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hc691c38a__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hc292476d__0[0U];
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hc292476d__0[1U];
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hc691c38a__0[2U])))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | ((((0x10000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                 ? 0x1cU : 0x1dU) << 0x11U) | ((((0x4000000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x1aU
                                                  : 0x1bU) 
                                                << 0xcU) 
                                               | ((((0x1000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0x18U
                                                     : 0x19U) 
                                                   << 7U) 
                                                  | ((((0x400000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0x16U
                                                        : 0x17U) 
                                                      << 2U) 
                                                     | (((0x100000U 
                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                          ? 0x14U
                                                          : 0x15U) 
                                                        >> 3U))))));
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_3_T_2 
        = (0x3fffffffU & ((0x10U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                              << 0x10U) : vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i));
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2 
        = (0x3fffffffU & ((8U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2 
        = (0x3fffffffU & ((4U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2 
        = (0x3fffffffU & ((2U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o 
        = (0x3fffffffU & ((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__13(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__13\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h2248054a__0;
    // Body
    __Vtemp_h2248054a__0 = (((IData)((0U != (0x30000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                             << 0x1dU) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                           << 0x1cU) 
                                          | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1bU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1aU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0x300000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x15U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x14U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x13U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x12U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x11U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x10U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h2248054a__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__14(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__14\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hbe2a2ad7__0;
    VlWide<3>/*95:0*/ __Vtemp_h2079ab9e__0;
    // Body
    __Vtemp_hbe2a2ad7__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_hbe2a2ad7__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h2079ab9e__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hbe2a2ad7__0[0U];
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hbe2a2ad7__0[1U];
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h2079ab9e__0[2U])))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | ((((0x10000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                 ? 0x1cU : 0x1dU) << 0x11U) | ((((0x4000000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x1aU
                                                  : 0x1bU) 
                                                << 0xcU) 
                                               | ((((0x1000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0x18U
                                                     : 0x19U) 
                                                   << 7U) 
                                                  | ((((0x400000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0x16U
                                                        : 0x17U) 
                                                      << 2U) 
                                                     | (((0x100000U 
                                                          & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                          ? 0x14U
                                                          : 0x15U) 
                                                        >> 3U))))));
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_3_T_2 
        = (0x3fffffffU & ((0x10U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                              << 0x10U) : vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i));
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2 
        = (0x3fffffffU & ((8U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2 
        = (0x3fffffffU & ((4U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2 
        = (0x3fffffffU & ((2U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o 
        = (0x3fffffffU & ((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__15(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__15\n"); );
    // Init
    QData/*63:0*/ __Vtemp_h56e4e2b6__0;
    // Body
    __Vtemp_h56e4e2b6__0 = (((QData)((IData)((0ULL 
                                              != (0xc0000000000000ULL 
                                                  & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                             << 0x3aU) | (((QData)((IData)(
                                                           (0ULL 
                                                            != 
                                                            (0x30000000000000ULL 
                                                             & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                           << 0x39U) 
                                          | (((QData)((IData)(
                                                              (0ULL 
                                                               != 
                                                               (0xc000000000000ULL 
                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0x3000000000000ULL 
                                                                   & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(
                                                                    (0ULL 
                                                                     != 
                                                                     (0xc00000000000ULL 
                                                                      & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                    << 0x36U) 
                                                   | (((QData)((IData)(
                                                                       (0ULL 
                                                                        != 
                                                                        (0x300000000000ULL 
                                                                         & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                       << 0x35U) 
                                                      | (((QData)((IData)(
                                                                          (0ULL 
                                                                           != 
                                                                           (0xc0000000000ULL 
                                                                            & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                          << 0x34U) 
                                                         | (((QData)((IData)(
                                                                             (0ULL 
                                                                              != 
                                                                              (0x30000000000ULL 
                                                                               & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                             << 0x33U) 
                                                            | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x3000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                   << 0x31U) 
                                                                  | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                      << 0x30U) 
                                                                     | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                         << 0x2fU) 
                                                                        | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                            << 0x2eU) 
                                                                           | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                               << 0x2dU) 
                                                                              | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x3000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x3000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xcULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (3ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (6ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000000000000000ULL & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h56e4e2b6__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__16(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__16\n"); );
    // Init
    QData/*55:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2;
    PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2 = 0;
    QData/*55:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2 = 0;
    QData/*55:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2 = 0;
    QData/*55:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2 = 0;
    QData/*55:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hfdf65be8__0;
    VlWide<3>/*95:0*/ __Vtemp_h40404a84__0;
    VlWide<3>/*95:0*/ __Vtemp_h198990e4__0;
    VlWide<4>/*127:0*/ __Vtemp_hbc77297e__0;
    VlWide<5>/*159:0*/ __Vtemp_h4ce48611__0;
    VlWide<5>/*159:0*/ __Vtemp_h6b45ebc9__0;
    VlWide<6>/*191:0*/ __Vtemp_h9a3bef14__0;
    VlWide<6>/*191:0*/ __Vtemp_hd07993cf__0;
    VlWide<6>/*191:0*/ __Vtemp_hda54df1b__0;
    VlWide<8>/*255:0*/ __Vtemp_hd9a9f561__0;
    VlWide<9>/*287:0*/ __Vtemp_h6106c669__0;
    VlWide<9>/*287:0*/ __Vtemp_h270f011f__0;
    VlWide<11>/*351:0*/ __Vtemp_h8c08a6e5__0;
    VlWide<12>/*383:0*/ __Vtemp_h40f25809__0;
    // Body
    __Vtemp_hfdf65be8__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                         >> 0x13U)))
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xeU) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x12U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            (0x3fU 
                                                             & ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                            >> 0x11U)))
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x1aU) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 6U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x14U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xcU)))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0x3fU 
                                                                & ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                               >> 0xfU)))
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                     << 6U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1aU))
                                                                    : 
                                                                   vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (0x3fU 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xdU)))
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0x12U) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0xeU))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xcU) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x14U)))))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (0x3fU 
                                                                      & ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xbU)))
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x1eU) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 2U))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x18U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 8U)))))) 
                                                     << 0x1eU) 
                                                    | (QData)((IData)(
                                                                      ((0x3f000000U 
                                                                        & (((1U 
                                                                             & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 9U)))
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                              << 0xaU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x16U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 4U) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                           << 0x18U)) 
                                                                       | ((0xfc0000U 
                                                                           & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 7U)))
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x10U))) 
                                                                              << 0x12U)) 
                                                                          | ((0x3f000U 
                                                                              & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 5U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 4U))) 
                                                                                << 0xcU)) 
                                                                             | ((0xfc0U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 3U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x18U))) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 6U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xcU))))))))))))))));
    __Vtemp_hfdf65be8__0[1U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x15U)))
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 2U) | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1eU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1cU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 4U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x3fU 
                                                              & ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                             >> 0x13U)))
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xeU) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x12U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (0x3fU 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0x11U)))
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x1aU) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 6U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x14U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xcU)))))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0x3fU 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xfU)))
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                         << 6U) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1aU))
                                                                        : 
                                                                       vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])))) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      (0x3fU 
                                                                       & ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xdU)))
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0x12U) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0xeU))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xcU) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x14U)))))) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         (0x3fU 
                                                                          & ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xbU)))
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 2U))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x18U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 8U)))))) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          ((0x3f000000U 
                                                                            & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 9U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x16U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                               << 0x18U)) 
                                                                           | ((0xfc0000U 
                                                                               & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 7U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x10U))) 
                                                                                << 0x12U)) 
                                                                              | ((0x3f000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 5U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 4U))) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 3U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x18U))) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 6U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xcU))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h40404a84__0[2U] = ((0x3f00U & (((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x19U)))
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0xaU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 0x16U))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                  << 4U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 0x1cU))) 
                                            << 8U)) 
                                | ((0xfcU & (((1U & (IData)(
                                                            (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                             >> 0x17U)))
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x16U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xaU))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x10U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0x10U))) 
                                             << 2U)) 
                                   | (3U & (((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x15U)))
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 2U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1eU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1cU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 4U))) 
                                            >> 4U))));
    __Vtemp_h198990e4__0[2U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x1fU)))
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                       << 6U) | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                 >> 0x1aU))
                                   : vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U]) 
                                 << 0x1aU) | ((0x3f00000U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x1dU)))
                                                    ? 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                     << 0x12U) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                       >> 0xeU))
                                                    : 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                     << 0xcU) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                       >> 0x14U))) 
                                                  << 0x14U)) 
                                              | ((0xfc000U 
                                                  & (((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                        << 0x1eU) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                          >> 2U))
                                                       : 
                                                      ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                        << 0x18U) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                          >> 8U))) 
                                                     << 0xeU)) 
                                                 | __Vtemp_h40404a84__0[2U])));
    __Vtemp_hbc77297e__0[3U] = ((0x3f000U & (((1U & (IData)(
                                                            (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                             >> 0x25U)))
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                   << 2U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                     >> 0x1eU))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                     >> 4U))) 
                                             << 0xcU)) 
                                | ((0xfc0U & (((1U 
                                                & (IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x23U)))
                                                ? (
                                                   (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 0xeU) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 0x12U))
                                                : (
                                                   (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 8U) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 0x18U))) 
                                              << 6U)) 
                                   | (0x3fU & ((1U 
                                                & (IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x21U)))
                                                ? (
                                                   (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 0x1aU) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 6U))
                                                : (
                                                   (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 0x14U) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 0xcU))))));
    __Vtemp_h4ce48611__0[3U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x2bU)))
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                       >> 2U)) : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                   << 0x18U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                     >> 8U))) 
                                 << 0x1eU) | ((0x3f000000U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x29U)))
                                                    ? 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                     << 0xaU) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                       >> 0x16U))
                                                    : 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                     << 4U) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                       >> 0x1cU))) 
                                                  << 0x18U)) 
                                              | ((0xfc0000U 
                                                  & (((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                  >> 0x27U)))
                                                       ? 
                                                      ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                        << 0x16U) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                          >> 0xaU))
                                                       : 
                                                      ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                        << 0x10U) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                          >> 0x10U))) 
                                                     << 0x12U)) 
                                                 | __Vtemp_hbc77297e__0[3U])));
    __Vtemp_h6b45ebc9__0[4U] = ((0xfc00U & (((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x2fU)))
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                  << 6U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    >> 0x1aU))
                                              : vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U]) 
                                            << 0xaU)) 
                                | ((0x3f0U & (((1U 
                                                & (IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x2dU)))
                                                ? (
                                                   (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0x12U) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 0xeU))
                                                : (
                                                   (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0xcU) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 0x14U))) 
                                              << 4U)) 
                                   | (0xfU & (((1U 
                                                & (IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x2bU)))
                                                ? (
                                                   (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 2U))
                                                : (
                                                   (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0x18U) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 8U))) 
                                              >> 2U))));
    __Vtemp_h9a3bef14__0[4U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x35U)))
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       << 2U) | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                 >> 0x1eU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       << 0x1cU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       >> 4U))) << 0x1cU) 
                                | ((0xfc00000U & ((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x33U)))
                                                    ? 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                     << 0xeU) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                     << 8U) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                       >> 0x18U))) 
                                                  << 0x16U)) 
                                   | ((0x3f0000U & 
                                       (((1U & (IData)(
                                                       (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                        >> 0x31U)))
                                          ? ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                              << 0x1aU) 
                                             | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                >> 6U))
                                          : ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                              << 0x14U) 
                                             | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                >> 0xcU))) 
                                        << 0x10U)) 
                                      | __Vtemp_h6b45ebc9__0[4U])));
    __Vtemp_hd07993cf__0[5U] = ((0x3f00U & (((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x39U)))
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  << 0xaU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    >> 0x16U))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                  << 4U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    >> 0x1cU))) 
                                            << 8U)) 
                                | ((0xfcU & (((1U & (IData)(
                                                            (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                             >> 0x37U)))
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                   << 0x16U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                     >> 0xaU))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                   << 0x10U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                     >> 0x10U))) 
                                             << 2U)) 
                                   | (3U & (((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x35U)))
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  << 2U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                    >> 0x1eU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  << 0x1cU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    >> 4U))) 
                                            >> 4U))));
    __Vtemp_hda54df1b__0[5U] = ((((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                   ? 0U : 1U) << 0x1aU) 
                                | ((0x3f00000U & ((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x3dU)))
                                                    ? 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                     << 0x12U) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                       >> 0xeU))
                                                    : 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                     << 0xcU) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                       >> 0x14U))) 
                                                  << 0x14U)) 
                                   | ((0xfc000U & (
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                >> 0x3bU)))
                                                     ? 
                                                    ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                      << 0x1eU) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                      << 0x18U) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                        >> 8U))) 
                                                   << 0xeU)) 
                                      | __Vtemp_hd07993cf__0[5U])));
    __Vtemp_hd9a9f561__0[6U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0xcU)))
                                   ? 0xcU : 0xdU) << 0x1eU) 
                                | ((((1U & (IData)(
                                                   (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                    >> 0xaU)))
                                      ? 0xaU : 0xbU) 
                                    << 0x18U) | (((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 8U)))
                                                    ? 8U
                                                    : 9U) 
                                                  << 0x12U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 6U)))
                                                       ? 6U
                                                       : 7U) 
                                                     << 0xcU) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 4U)))
                                                          ? 4U
                                                          : 5U) 
                                                        << 6U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                      >> 2U)))
                                                           ? 2U
                                                           : 3U))))));
    __Vtemp_h6106c669__0[7U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0x16U)))
                                   ? 0x16U : 0x17U) 
                                 << 0x1cU) | ((((1U 
                                                 & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0x14U)))
                                                 ? 0x14U
                                                 : 0x15U) 
                                               << 0x16U) 
                                              | ((((1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 0x12U)))
                                                    ? 0x12U
                                                    : 0x13U) 
                                                  << 0x10U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 0x10U)))
                                                       ? 0x10U
                                                       : 0x11U) 
                                                     << 0xaU) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 0xeU)))
                                                          ? 0xeU
                                                          : 0xfU) 
                                                        << 4U) 
                                                       | (((1U 
                                                            & (IData)(
                                                                      (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                       >> 0xcU)))
                                                            ? 0xcU
                                                            : 0xdU) 
                                                          >> 2U))))));
    __Vtemp_h270f011f__0[8U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0x20U)))
                                   ? 0x20U : 0x21U) 
                                 << 0x1aU) | ((((1U 
                                                 & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0x1eU)))
                                                 ? 0x1eU
                                                 : 0x1fU) 
                                               << 0x14U) 
                                              | ((((1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 0x1cU)))
                                                    ? 0x1cU
                                                    : 0x1dU) 
                                                  << 0xeU) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 0x1aU)))
                                                       ? 0x1aU
                                                       : 0x1bU) 
                                                     << 8U) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 0x18U)))
                                                          ? 0x18U
                                                          : 0x19U) 
                                                        << 2U) 
                                                       | (((1U 
                                                            & (IData)(
                                                                      (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                       >> 0x16U)))
                                                            ? 0x16U
                                                            : 0x17U) 
                                                          >> 4U))))));
    __Vtemp_h8c08a6e5__0[9U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0x2cU)))
                                   ? 0x2cU : 0x2dU) 
                                 << 0x1eU) | ((((1U 
                                                 & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0x2aU)))
                                                 ? 0x2aU
                                                 : 0x2bU) 
                                               << 0x18U) 
                                              | ((((1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 0x28U)))
                                                    ? 0x28U
                                                    : 0x29U) 
                                                  << 0x12U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 0x26U)))
                                                       ? 0x26U
                                                       : 0x27U) 
                                                     << 0xcU) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 0x24U)))
                                                          ? 0x24U
                                                          : 0x25U) 
                                                        << 6U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                      >> 0x22U)))
                                                           ? 0x22U
                                                           : 0x23U))))));
    __Vtemp_h40f25809__0[0xaU] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                   >> 0x36U)))
                                     ? 0x36U : 0x37U) 
                                   << 0x1cU) | ((((1U 
                                                   & (IData)(
                                                             (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                              >> 0x34U)))
                                                   ? 0x34U
                                                   : 0x35U) 
                                                 << 0x16U) 
                                                | ((((1U 
                                                      & (IData)(
                                                                (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                 >> 0x32U)))
                                                      ? 0x32U
                                                      : 0x33U) 
                                                    << 0x10U) 
                                                   | ((((1U 
                                                         & (IData)(
                                                                   (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                    >> 0x30U)))
                                                         ? 0x30U
                                                         : 0x31U) 
                                                       << 0xaU) 
                                                      | ((((1U 
                                                            & (IData)(
                                                                      (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                       >> 0x2eU)))
                                                            ? 0x2eU
                                                            : 0x2fU) 
                                                          << 4U) 
                                                         | (((1U 
                                                              & (IData)(
                                                                        (vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                         >> 0x2cU)))
                                                              ? 0x2cU
                                                              : 0x2dU) 
                                                            >> 2U))))));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hfdf65be8__0[0U];
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hfdf65be8__0[1U];
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = __Vtemp_h198990e4__0[2U];
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = __Vtemp_h4ce48611__0[3U];
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = __Vtemp_h9a3bef14__0[4U];
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
        = __Vtemp_hda54df1b__0[5U];
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
        = __Vtemp_hd9a9f561__0[6U];
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
        = __Vtemp_h6106c669__0[7U];
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
        = __Vtemp_h270f011f__0[8U];
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
        = __Vtemp_h8c08a6e5__0[9U];
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = __Vtemp_h40f25809__0[0xaU];
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
        = ((0xfc000000U & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU]) 
           | (((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                              >> 0x36U))) ? 0x36U : 0x37U) 
              >> 4U));
    PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2 
        = (0xffffffffffffffULL & ((0x20U & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                                   ? (vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i 
                                      << 0x20U) : vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i));
    PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2 
        = (0xffffffffffffffULL & ((0x10U & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                                   ? (PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2 
                                      << 0x10U) : PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2));
    PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2 
        = (0xffffffffffffffULL & ((8U & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                                   ? (PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2 
                                      << 8U) : PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2 
        = (0xffffffffffffffULL & ((4U & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                                   ? (PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2 
                                      << 4U) : PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2 
        = (0xffffffffffffffULL & ((2U & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                                   ? (PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2 
                                      << 2U) : PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o 
        = (0xffffffffffffffULL & ((1U & vlSelf->PvuTop__DOT__frac_norm_mul__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                                   ? (PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2 
                                      << 1U) : PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__17(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__17\n"); );
    // Init
    QData/*63:0*/ __Vtemp_h3a314212__0;
    // Body
    __Vtemp_h3a314212__0 = (((QData)((IData)((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0x38U))))) 
                             << 0x3bU) | (((QData)((IData)(
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
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000000000000000ULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h3a314212__0);
}
