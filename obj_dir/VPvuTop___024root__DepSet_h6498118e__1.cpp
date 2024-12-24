// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop___024root.h"

VL_INLINE_OPT void VPvuTop___024root___act_comb__TOP__2(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___act_comb__TOP__2\n"); );
    // Init
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_3;
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_3 = 0;
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_3;
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_3 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0;
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 = 0;
    // Body
    vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_1 
        = (VL_GTS_III(7, (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1), (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1))
            ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1)
            : (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1));
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_3 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_1) 
                    - (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1)));
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_3 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_1) 
                    - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1)));
    vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_1 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_3))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_3)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_3))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_3))))
            : 0U);
    vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_1 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_3))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_3)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_3))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_3))))
            : 0U);
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1 
        = ((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_1)) 
           > (0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_1)));
    vlSelf->PvuTop__DOT__add__DOT__sum_1 = (0x1fffU 
                                            & ((0xfffU 
                                                & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_1)) 
                                               + (0xfffU 
                                                  & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_1))));
    vlSelf->__VdfgTmp_h64874eba__0 = (0xfffU & ((IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1)
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_1) 
                                                 - (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_1))
                                                 : 
                                                ((IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_1) 
                                                 - (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_1))));
    vlSelf->__VdfgTmp_h87d0ba2c__0 = (0xfffU & ((0x1000U 
                                                 & (IData)(vlSelf->PvuTop__DOT__add__DOT__sum_1))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_1) 
                                                 >> 1U)
                                                 : (IData)(vlSelf->PvuTop__DOT__add__DOT__sum_1)));
    vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1 
        = ((1U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                              ? (IData)(vlSelf->__VdfgTmp_h87d0ba2c__0)
                                              : (IData)(vlSelf->__VdfgTmp_h64874eba__0))
            : ((2U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                                  ? (IData)(vlSelf->__VdfgTmp_h64874eba__0)
                                                  : (IData)(vlSelf->__VdfgTmp_h87d0ba2c__0))
                : 0U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 1U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 2U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 3U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 4U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 5U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 6U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 7U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 8U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1) 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 9U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT____Vlvbound_h918bd6c0__0) 
              << 0xaU));
}

VL_INLINE_OPT void VPvuTop___024root___act_comb__TOP__4(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___act_comb__TOP__4\n"); );
    // Init
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_6;
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_6 = 0;
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_6;
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_6 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0;
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 = 0;
    // Body
    vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_2 
        = (VL_GTS_III(7, (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2), (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2))
            ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2)
            : (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2));
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_6 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_2) 
                    - (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2)));
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_6 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_2) 
                    - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2)));
    vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_2 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_6))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_6)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_6))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_6))))
            : 0U);
    vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_2 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_6))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_6)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_6))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_6))))
            : 0U);
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2 
        = ((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_2)) 
           > (0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_2)));
    vlSelf->PvuTop__DOT__add__DOT__sum_2 = (0x1fffU 
                                            & ((0xfffU 
                                                & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_2)) 
                                               + (0xfffU 
                                                  & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_2))));
    vlSelf->__VdfgTmp_h085a2b98__0 = (0xfffU & ((IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2)
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_2) 
                                                 - (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_2))
                                                 : 
                                                ((IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_2) 
                                                 - (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_2))));
    vlSelf->__VdfgTmp_h79bf5980__0 = (0xfffU & ((0x1000U 
                                                 & (IData)(vlSelf->PvuTop__DOT__add__DOT__sum_2))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_2) 
                                                 >> 1U)
                                                 : (IData)(vlSelf->PvuTop__DOT__add__DOT__sum_2)));
    vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2 
        = ((1U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                              ? (IData)(vlSelf->__VdfgTmp_h79bf5980__0)
                                              : (IData)(vlSelf->__VdfgTmp_h085a2b98__0))
            : ((2U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                                  ? (IData)(vlSelf->__VdfgTmp_h085a2b98__0)
                                                  : (IData)(vlSelf->__VdfgTmp_h79bf5980__0))
                : 0U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 1U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 2U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 3U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 4U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 5U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 6U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 7U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 8U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2) 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 9U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT____Vlvbound_h918bd6c0__0) 
              << 0xaU));
}

VL_INLINE_OPT void VPvuTop___024root___act_comb__TOP__6(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___act_comb__TOP__6\n"); );
    // Init
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_9;
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_9 = 0;
    CData/*6:0*/ PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_9;
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_9 = 0;
    CData/*0:0*/ PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0;
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 = 0;
    // Body
    vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_3 
        = (VL_GTS_III(7, (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3), (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3))
            ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3)
            : (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3));
    PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_9 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_3) 
                    - (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3)));
    PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_9 
        = (0x7fU & ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_3) 
                    - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3)));
    vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_3 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_9))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_9)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_9))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount1_T_9))))
            : 0U);
    vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_3 
        = ((0xdU >= ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_9))
                      ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_9)))
            ? (0x3fffU & (((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                           << 2U) >> ((0xeU < (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_9))
                                       ? 0xeU : (IData)(PvuTop__DOT__fracalign_1__DOT___shift_amount2_T_9))))
            : 0U);
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3 
        = ((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_3)) 
           > (0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_3)));
    vlSelf->PvuTop__DOT__add__DOT__sum_3 = (0x1fffU 
                                            & ((0xfffU 
                                                & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_3)) 
                                               + (0xfffU 
                                                  & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_3))));
    vlSelf->__VdfgTmp_hcba88845__0 = (0xfffU & ((IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_3) 
                                                 - (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_3))
                                                 : 
                                                ((IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_3) 
                                                 - (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_3))));
    vlSelf->__VdfgTmp_h980bc3a7__0 = (0xfffU & ((0x1000U 
                                                 & (IData)(vlSelf->PvuTop__DOT__add__DOT__sum_3))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_3) 
                                                 >> 1U)
                                                 : (IData)(vlSelf->PvuTop__DOT__add__DOT__sum_3)));
    vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3 
        = ((1U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                              ? (IData)(vlSelf->__VdfgTmp_h980bc3a7__0)
                                              : (IData)(vlSelf->__VdfgTmp_hcba88845__0))
            : ((2U == (IData)(vlSelf->io_op)) ? ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                                  ? (IData)(vlSelf->__VdfgTmp_hcba88845__0)
                                                  : (IData)(vlSelf->__VdfgTmp_h980bc3a7__0))
                : 0U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 9U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 1U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 8U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 2U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 7U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 3U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 6U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 4U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 5U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 5U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 4U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 6U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 3U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 7U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 2U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 8U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3) 
                 >> 1U));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 9U));
    PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3));
    vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT____Vlvbound_h918bd6c0__0) 
              << 0xaU));
}

void VPvuTop___024root___nba_sequent__TOP__0(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__16(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__17(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__22(VPvuTop___024root* vlSelf);

void VPvuTop___024root___eval_nba(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0x22U)) {
        VPvuTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0x11U) | vlSelf->__VnbaTriggered.at(0x22U))) {
        VPvuTop___024root___ico_comb__TOP__16(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0x10U) | vlSelf->__VnbaTriggered.at(0x22U))) {
        VPvuTop___024root___ico_comb__TOP__17(vlSelf);
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0x10U) | vlSelf->__VnbaTriggered.at(0x11U)) 
         | vlSelf->__VnbaTriggered.at(0x22U))) {
        VPvuTop___024root___ico_comb__TOP__22(vlSelf);
    }
}

void VPvuTop___024root___eval_triggers__ico(VPvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__ico(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG
void VPvuTop___024root___eval_ico(VPvuTop___024root* vlSelf);
void VPvuTop___024root___eval_triggers__act(VPvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__act(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG
void VPvuTop___024root___eval_act(VPvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__nba(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG

void VPvuTop___024root___eval(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<35> __VpreTriggered;
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
                VL_FATAL_MT("/home/wuxy/PVU/vsrc/PvuTop.sv", 2041, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/wuxy/PVU/vsrc/PvuTop.sv", 2041, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/wuxy/PVU/vsrc/PvuTop.sv", 2041, "", "NBA region did not converge.");
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
