// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop___024root.h"

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__93(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__93\n"); );
    // Init
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_h5869e245__0;
    VlWide<3>/*95:0*/ __Vtemp_h570bbeb8__0;
    VlWide<3>/*95:0*/ __Vtemp_hd818819f__0;
    VlWide<3>/*95:0*/ __Vtemp_h91617439__0;
    VlWide<3>/*95:0*/ __Vtemp_hbbffd6e7__0;
    // Body
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSelf->io_op))
                                      ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_h5c9bd195__0))))) 
                    << 0x39U) | ((QData)((IData)((0x7ffffffU 
                                                  & vlSelf->__VdfgTmp_hf029e323__0))) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((5U 
                                                                           == (IData)(vlSelf->io_op))
                                                                           ? 0U
                                                                           : 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h5c9bd195__0))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           (0x7ffffffU 
                                                                            & vlSelf->__VdfgTmp_hf029e323__0))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h5869e245__0, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h5869e245__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h5869e245__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h5869e245__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h570bbeb8__0, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h570bbeb8__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h570bbeb8__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h570bbeb8__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd818819f__0, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hd818819f__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hd818819f__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hd818819f__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h91617439__0, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h91617439__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h91617439__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h91617439__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hbbffd6e7__0, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_hbbffd6e7__0[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_hbbffd6e7__0[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hbbffd6e7__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[0U])))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__94(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__94\n"); );
    // Body
    vlSelf->io_posit_o_3 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x8000000U & vlSelf->__VdfgTmp_h77677ba4__0)
                                      ? ((8U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                          ? (0x80000000U 
                                             | (0x7fffffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T))))
                                          : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T)
                                      : 0U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__95(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__95\n"); );
    // Body
    vlSelf->io_posit_o_2 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x8000000U & vlSelf->__VdfgTmp_h2a3c4c68__0)
                                      ? ((4U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                          ? (0x80000000U 
                                             | (0x7fffffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T))))
                                          : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T)
                                      : 0U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__96(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__96\n"); );
    // Body
    vlSelf->io_posit_o_1 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x8000000U & vlSelf->__VdfgTmp_habc61126__0)
                                      ? ((2U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                          ? (0x80000000U 
                                             | (0x7fffffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T))))
                                          : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T)
                                      : 0U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__97(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__97\n"); );
    // Init
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2 = 0;
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 = 0;
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 = 0;
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 = 0;
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2 = 0;
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2 = 0;
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2 = 0;
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2 = 0;
    CData/*0:0*/ PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0;
    PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    CData/*0:0*/ __VdfgTmp_hd4c00d97__0;
    __VdfgTmp_hd4c00d97__0 = 0;
    CData/*0:0*/ __VdfgTmp_hd12d1014__0;
    __VdfgTmp_hd12d1014__0 = 0;
    CData/*0:0*/ __VdfgTmp_hd126ef61__0;
    __VdfgTmp_hd126ef61__0 = 0;
    CData/*0:0*/ __VdfgTmp_hd125ae7d__0;
    __VdfgTmp_hd125ae7d__0 = 0;
    CData/*0:0*/ __VdfgTmp_hd4017ee0__0;
    __VdfgTmp_hd4017ee0__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hf34d21c1__0;
    VlWide<3>/*95:0*/ __Vtemp_hd60c6902__0;
    VlWide<3>/*95:0*/ __Vtemp_h266f8086__0;
    VlWide<3>/*95:0*/ __Vtemp_h5391c0d0__0;
    VlWide<3>/*95:0*/ __Vtemp_hccaee320__0;
    // Body
    vlSelf->__VdfgTmp_hb5d7aa8c__0 = (0xffU & (((5U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                                  ? 
                                                 ((5U 
                                                   > 
                                                   (0x3fU 
                                                    & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                   ? 
                                                  ((0x1c0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((((IData)(5U) 
                                                                        - 
                                                                        vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                       - (IData)(1U)) 
                                                                      >> 5U)))) 
                                                       << 6U)) 
                                                   | (0x3fU 
                                                      & (((IData)(5U) 
                                                          - 
                                                          vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                         - (IData)(1U))))
                                                   : 
                                                  ((0x1c0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- 
                                                                       (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                        - (IData)(4U))) 
                                                                      >> 5U)))) 
                                                       << 6U)) 
                                                   | (0x3fU 
                                                      & (- 
                                                         (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                          - (IData)(4U))))))
                                                  : 0U)
                                                 : 0U) 
                                               + ((IData)(vlSelf->PvuTop__DOT___GEN_8)
                                                   ? 0U
                                                   : (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___comptree_io_result_o))));
    vlSelf->__VdfgTmp_hd4b45e7a__0 = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                            & (IData)(vlSelf->__VdfgTmp_h858857fc__0)));
    __VdfgTmp_hd4c00d97__0 = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                    & ((IData)(vlSelf->__VdfgTmp_h858857fc__0) 
                                       >> 1U)));
    __VdfgTmp_hd4017ee0__0 = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                    & ((IData)(vlSelf->__VdfgTmp_h858857fc__0) 
                                       >> 2U)));
    __VdfgTmp_hd125ae7d__0 = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                    & ((IData)(vlSelf->__VdfgTmp_h858857fc__0) 
                                       >> 3U)));
    __VdfgTmp_hd126ef61__0 = (1U & ((IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                    & ((IData)(vlSelf->__VdfgTmp_h858857fc__0) 
                                       >> 4U)));
    __VdfgTmp_hd12d1014__0 = (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                      & ((IData)(vlSelf->__VdfgTmp_h858857fc__0) 
                                         >> 5U)));
    PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0 
        = ((5U == (IData)(vlSelf->io_op)) & ((IData)(vlSelf->__VdfgTmp_hb5d7aa8c__0) 
                                             >> 7U));
    if (__VdfgTmp_hd12d1014__0) {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2 
            = (0x7ffffffffffffffULL & (vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                                       >> 0x20U));
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2 
            = (0x7ffffffffffffffULL & (vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                                       << 0x20U));
    } else {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2 
            = (0x7ffffffffffffffULL & vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i);
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2 
            = (0x7ffffffffffffffULL & vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i);
    }
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                         ? (~ ((IData)(vlSelf->__VdfgTmp_hb5d7aa8c__0) 
                                               >> 2U))
                                         : 0x1fU)) : 
                     ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                      ? ((IData)(vlSelf->__VdfgTmp_hb5d7aa8c__0) 
                                         >> 2U) : 0U))) 
                    - (IData)(2U)));
    if (__VdfgTmp_hd126ef61__0) {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 
            = (0x7ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2 
                                       >> 0x10U));
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2 
            = (0x7ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2 
                                       << 0x10U));
    } else {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 
            = (0x7ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2);
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2 
            = (0x7ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2);
    }
    if (__VdfgTmp_hd125ae7d__0) {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 
            = (0x7ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 
                                       >> 8U));
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2 
            = (0x7ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2 
                                       << 8U));
    } else {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 
            = (0x7ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2);
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2 
            = (0x7ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2);
    }
    if (__VdfgTmp_hd4017ee0__0) {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 
            = (0x7ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 
                                       >> 4U));
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2 
            = (0x7ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2 
                                       << 4U));
    } else {
        PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 
            = (0x7ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2);
        PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2 
            = (0x7ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2);
    }
    if (__VdfgTmp_hd4c00d97__0) {
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
            = (0x7ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 
                                       >> 2U));
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 
            = (0x7ffffffffffffffULL & (PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2 
                                       << 2U));
    } else {
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
            = (0x7ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2);
        vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 
            = (0x7ffffffffffffffULL & PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2);
    }
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                   & (5U > (0x3fU & 
                                            vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])))
                                   ? (0x7ffffffffffffffULL 
                                      & ((IData)(vlSelf->__VdfgTmp_hd4b45e7a__0)
                                          ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
                                             >> 1U)
                                          : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2))
                                   : (0x7ffffffffffffffULL 
                                      & ((IData)(vlSelf->__VdfgTmp_hd4b45e7a__0)
                                          ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 
                                             << 1U)
                                          : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2))));
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSelf->io_op))
                                      ? (3U & (IData)(vlSelf->__VdfgTmp_hb5d7aa8c__0))
                                      : 0U))) << 0x39U) 
                   | ((QData)((IData)(((5U == (IData)(vlSelf->io_op))
                                        ? ((0x7fffffeU 
                                            & ((IData)(
                                                       (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                        >> 0x1cU)) 
                                               << 1U)) 
                                           | (0U != 
                                              (0x7ffffffU 
                                               & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                        : 0U))) << 0x1eU)));
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((5U 
                                                                           == (IData)(vlSelf->io_op))
                                                                           ? 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__VdfgTmp_hb5d7aa8c__0))
                                                                           : 0U))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           ((5U 
                                                                             == (IData)(vlSelf->io_op))
                                                                             ? 
                                                                            ((0x7fffffeU 
                                                                              & ((IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                                                >> 0x1cU)) 
                                                                                << 1U)) 
                                                                             | (0U 
                                                                                != 
                                                                                (0x7ffffffU 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                                                             : 0U))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hf34d21c1__0, vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hf34d21c1__0[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hf34d21c1__0[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hf34d21c1__0[2U]);
    } else {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd60c6902__0, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hd60c6902__0[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hd60c6902__0[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hd60c6902__0[2U]);
    } else {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h266f8086__0, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h266f8086__0[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h266f8086__0[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h266f8086__0[2U]);
    } else {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h5391c0d0__0, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h5391c0d0__0[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h5391c0d0__0[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h5391c0d0__0[2U]);
    } else {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hccaee320__0, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_hccaee320__0[0U];
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_hccaee320__0[1U];
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hccaee320__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->io_posit_dot_o = ((5U == (IData)(vlSelf->io_op))
                               ? (((0U == ((5U == (IData)(vlSelf->io_op))
                                            ? (IData)(vlSelf->__VdfgTmp_hb5d7aa8c__0)
                                            : 0U)) 
                                   & (0U == ((5U == (IData)(vlSelf->io_op))
                                              ? ((0xffffffeU 
                                                  & ((IData)(
                                                             (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                              >> 0x1cU)) 
                                                     << 1U)) 
                                                 | (0U 
                                                    != 
                                                    (0x7ffffffU 
                                                     & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                              : 0U)))
                                   ? 0U : (0x7fffffffU 
                                           & (((vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[1U] 
                                                << 2U) 
                                               | (vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
                                                  >> 0x1eU)) 
                                              + (1U 
                                                 & ((vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
                                                     >> 0x1dU) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x5fffffffU 
                                                                & vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U]))))))))
                               : 0U);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__98(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__98\n"); );
    // Body
    vlSelf->io_posit_o_0 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x8000000U & vlSelf->__VdfgTmp_hf029e323__0)
                                      ? ((1U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                          ? (0x80000000U 
                                             | (0x7fffffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))))
                                          : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T)
                                      : 0U));
}

void VPvuTop___024root___eval_nba(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_nba\n"); );
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
    VlTriggerVec<62> __VpreTriggered;
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
                VL_FATAL_MT("/home/wuxy/PVU/vsrc/PvuTop.sv", 7648, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/wuxy/PVU/vsrc/PvuTop.sv", 7648, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/wuxy/PVU/vsrc/PvuTop.sv", 7648, "", "NBA region did not converge.");
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
