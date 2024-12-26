// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop___024root.h"

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__61(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__61\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0;
    PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0 = 0;
    VlWide<3>/*91:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(92, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*91:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(92, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*91:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(92, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*91:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(92, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_hcf3511a2__0;
    VlWide<3>/*95:0*/ __Vtemp_h6d3e9316__0;
    VlWide<3>/*95:0*/ __Vtemp_he390a90b__0;
    VlWide<3>/*95:0*/ __Vtemp_hcc71f7e9__0;
    VlWide<3>/*95:0*/ __Vtemp_h1dbd3457__0;
    // Body
    vlSelf->__VdfgTmp_hebee0a1c__0 = (0xffU & (((1U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7ef4006__0) 
                                                 + (IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h7eb60462__0))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? 
                                                 ((1U 
                                                   & ((~ 
                                                       (vlSelf->PvuTop__DOT__add__DOT__sum_1 
                                                        >> 0x1cU)) 
                                                      | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)))
                                                   ? (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7ef4006__0)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7ef4006__0)))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7ef4006__0) 
                                                    - (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_h4160ece8__0))
                                                    : 0U)))) 
                                               + (IData)(
                                                         ((((QData)((IData)(vlSelf->PvuTop__DOT____VdfgTmp_haf8f164d__0)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_haf8f164d__0) 
                                                                               << 0x18U) 
                                                                              | (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h5a6dbc58__0) 
                                                                                << 0x10U) 
                                                                                | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h5a6dbc58__0) 
                                                                                << 8U)))))) 
                                                          >> 
                                                          (0x3fU 
                                                           & ((IData)(vlSelf->io_op) 
                                                              << 3U))))));
    PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0 
        = ((5U != (IData)(vlSelf->io_op)) & ((IData)(vlSelf->__VdfgTmp_hebee0a1c__0) 
                                             >> 7U));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0)
                      ? ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                         ? 0x1fU : 
                                        (~ ((IData)(vlSelf->__VdfgTmp_hebee0a1c__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                         ? 0U : ((IData)(vlSelf->__VdfgTmp_hebee0a1c__0) 
                                                 >> 2U)))) 
                    - (IData)(1U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSelf->io_op))
                                      ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_hebee0a1c__0))))) 
                    << 0x3bU) | ((QData)((IData)((0xfffffffU 
                                                  & vlSelf->__VdfgTmp_hd183b1a3__0))) 
                                 << 0x1fU)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0)
              ? 1U : 0x7ffffffeU) << 0x1dU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((5U 
                                                                           == (IData)(vlSelf->io_op))
                                                                           ? 0U
                                                                           : 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__VdfgTmp_hebee0a1c__0))))) 
                                                         << 0x3bU) 
                                                        | ((QData)((IData)(
                                                                           (0xfffffffU 
                                                                            & vlSelf->__VdfgTmp_hd183b1a3__0))) 
                                                           << 0x1fU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0)
             ? 1U : 0x7ffffffeU) >> 3U);
    VL_SHIFTL_WWI(92,92,32, __Vtemp_hcf3511a2__0, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hcf3511a2__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hcf3511a2__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0xfffffffU & __Vtemp_hcf3511a2__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0xfffffffU & vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U]);
    }
    VL_SHIFTL_WWI(92,92,32, __Vtemp_h6d3e9316__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h6d3e9316__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h6d3e9316__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0xfffffffU & __Vtemp_h6d3e9316__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0xfffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTL_WWI(92,92,32, __Vtemp_he390a90b__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_he390a90b__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_he390a90b__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0xfffffffU & __Vtemp_he390a90b__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0xfffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTL_WWI(92,92,32, __Vtemp_hcc71f7e9__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hcc71f7e9__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hcc71f7e9__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0xfffffffU & __Vtemp_hcc71f7e9__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0xfffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTL_WWI(92,92,32, __Vtemp_h1dbd3457__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_h1dbd3457__0[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_h1dbd3457__0[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0xfffffffU & __Vtemp_h1dbd3457__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0xfffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
                            << 1U) | (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
                                      >> 0x1fU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
                                  >> 0x1eU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0xbfffffffU 
                                                        & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U])))))));
    vlSelf->io_posit_o_1 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x10000000U & vlSelf->__VdfgTmp_hd183b1a3__0)
                                      ? ((2U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                          ? (0x80000000U 
                                             | (0x7fffffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T))))
                                          : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T)
                                      : 0U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__62(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__62\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0;
    PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0 = 0;
    VlWide<3>/*91:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(92, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*91:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(92, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*91:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(92, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*91:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(92, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_h8f96030d__0;
    VlWide<3>/*95:0*/ __Vtemp_h27abbf6d__0;
    VlWide<3>/*95:0*/ __Vtemp_hdb8fd953__0;
    VlWide<3>/*95:0*/ __Vtemp_h9a05a7da__0;
    VlWide<3>/*95:0*/ __Vtemp_he7d84513__0;
    // Body
    vlSelf->__VdfgTmp_h41ab536a__0 = (0xffU & (((1U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7093f58__0) 
                                                 + (IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h2e835232__0))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? 
                                                 ((1U 
                                                   & ((~ 
                                                       (vlSelf->PvuTop__DOT__add__DOT__sum_2 
                                                        >> 0x1cU)) 
                                                      | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)))
                                                   ? (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7093f58__0)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7093f58__0)))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7093f58__0) 
                                                    - (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_h4081c32a__0))
                                                    : 0U)))) 
                                               + (IData)(
                                                         ((((QData)((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hac658180__0)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hac658180__0) 
                                                                               << 0x18U) 
                                                                              | (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h558e937a__0) 
                                                                                << 0x10U) 
                                                                                | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h558e937a__0) 
                                                                                << 8U)))))) 
                                                          >> 
                                                          (0x3fU 
                                                           & ((IData)(vlSelf->io_op) 
                                                              << 3U))))));
    PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0 
        = ((5U != (IData)(vlSelf->io_op)) & ((IData)(vlSelf->__VdfgTmp_h41ab536a__0) 
                                             >> 7U));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
                      ? ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                         ? 0x1fU : 
                                        (~ ((IData)(vlSelf->__VdfgTmp_h41ab536a__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                         ? 0U : ((IData)(vlSelf->__VdfgTmp_h41ab536a__0) 
                                                 >> 2U)))) 
                    - (IData)(1U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSelf->io_op))
                                      ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_h41ab536a__0))))) 
                    << 0x3bU) | ((QData)((IData)((0xfffffffU 
                                                  & vlSelf->__VdfgTmp_h979d1987__0))) 
                                 << 0x1fU)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7ffffffeU) << 0x1dU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((5U 
                                                                           == (IData)(vlSelf->io_op))
                                                                           ? 0U
                                                                           : 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h41ab536a__0))))) 
                                                         << 0x3bU) 
                                                        | ((QData)((IData)(
                                                                           (0xfffffffU 
                                                                            & vlSelf->__VdfgTmp_h979d1987__0))) 
                                                           << 0x1fU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
             ? 1U : 0x7ffffffeU) >> 3U);
    VL_SHIFTL_WWI(92,92,32, __Vtemp_h8f96030d__0, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h8f96030d__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h8f96030d__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0xfffffffU & __Vtemp_h8f96030d__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0xfffffffU & vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U]);
    }
    VL_SHIFTL_WWI(92,92,32, __Vtemp_h27abbf6d__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h27abbf6d__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h27abbf6d__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0xfffffffU & __Vtemp_h27abbf6d__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0xfffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTL_WWI(92,92,32, __Vtemp_hdb8fd953__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hdb8fd953__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hdb8fd953__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0xfffffffU & __Vtemp_hdb8fd953__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0xfffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTL_WWI(92,92,32, __Vtemp_h9a05a7da__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h9a05a7da__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h9a05a7da__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0xfffffffU & __Vtemp_h9a05a7da__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0xfffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTL_WWI(92,92,32, __Vtemp_he7d84513__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_he7d84513__0[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_he7d84513__0[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0xfffffffU & __Vtemp_he7d84513__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0xfffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
                            << 1U) | (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
                                      >> 0x1fU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
                                  >> 0x1eU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0xbfffffffU 
                                                        & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U])))))));
    vlSelf->io_posit_o_2 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x10000000U & vlSelf->__VdfgTmp_h979d1987__0)
                                      ? ((4U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                          ? (0x80000000U 
                                             | (0x7fffffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T))))
                                          : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T)
                                      : 0U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__63(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__63\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0;
    PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0 = 0;
    VlWide<3>/*91:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(92, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*91:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(92, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*91:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(92, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*91:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(92, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_h1770b1ea__0;
    VlWide<3>/*95:0*/ __Vtemp_h486da9f9__0;
    VlWide<3>/*95:0*/ __Vtemp_hcb927220__0;
    VlWide<3>/*95:0*/ __Vtemp_hb89248fb__0;
    VlWide<3>/*95:0*/ __Vtemp_h42703b77__0;
    // Body
    vlSelf->__VdfgTmp_h40abec95__0 = (0xffU & (((1U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                ((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7e325dc__0) 
                                                 + (IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h04391d22__0))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? 
                                                 ((1U 
                                                   & ((~ 
                                                       (vlSelf->PvuTop__DOT__add__DOT__sum_3 
                                                        >> 0x1cU)) 
                                                      | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)))
                                                   ? (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7e325dc__0)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7e325dc__0)))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_hb7e325dc__0) 
                                                    - (IData)(vlSelf->PvuTop__DOT__fracalign__DOT____VdfgTmp_h417b81ae__0))
                                                    : 0U)))) 
                                               + (IData)(
                                                         ((((QData)((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hac71b639__0)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hac71b639__0) 
                                                                               << 0x18U) 
                                                                              | (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h5a66f1fe__0) 
                                                                                << 0x10U) 
                                                                                | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h5a66f1fe__0) 
                                                                                << 8U)))))) 
                                                          >> 
                                                          (0x3fU 
                                                           & ((IData)(vlSelf->io_op) 
                                                              << 3U))))));
    PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0 
        = ((5U != (IData)(vlSelf->io_op)) & ((IData)(vlSelf->__VdfgTmp_h40abec95__0) 
                                             >> 7U));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
                      ? ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                         ? 0x1fU : 
                                        (~ ((IData)(vlSelf->__VdfgTmp_h40abec95__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                         ? 0U : ((IData)(vlSelf->__VdfgTmp_h40abec95__0) 
                                                 >> 2U)))) 
                    - (IData)(1U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSelf->io_op))
                                      ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_h40abec95__0))))) 
                    << 0x3bU) | ((QData)((IData)((0xfffffffU 
                                                  & vlSelf->__VdfgTmp_h4a92b19c__0))) 
                                 << 0x1fU)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
              ? 1U : 0x7ffffffeU) << 0x1dU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((5U 
                                                                           == (IData)(vlSelf->io_op))
                                                                           ? 0U
                                                                           : 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h40abec95__0))))) 
                                                         << 0x3bU) 
                                                        | ((QData)((IData)(
                                                                           (0xfffffffU 
                                                                            & vlSelf->__VdfgTmp_h4a92b19c__0))) 
                                                           << 0x1fU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
             ? 1U : 0x7ffffffeU) >> 3U);
    VL_SHIFTL_WWI(92,92,32, __Vtemp_h1770b1ea__0, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h1770b1ea__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h1770b1ea__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0xfffffffU & __Vtemp_h1770b1ea__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0xfffffffU & vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U]);
    }
    VL_SHIFTL_WWI(92,92,32, __Vtemp_h486da9f9__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h486da9f9__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h486da9f9__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0xfffffffU & __Vtemp_h486da9f9__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0xfffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTL_WWI(92,92,32, __Vtemp_hcb927220__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hcb927220__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hcb927220__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0xfffffffU & __Vtemp_hcb927220__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0xfffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTL_WWI(92,92,32, __Vtemp_hb89248fb__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hb89248fb__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hb89248fb__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0xfffffffU & __Vtemp_hb89248fb__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0xfffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTL_WWI(92,92,32, __Vtemp_h42703b77__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_h42703b77__0[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_h42703b77__0[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0xfffffffU & __Vtemp_h42703b77__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0xfffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
                            << 1U) | (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
                                      >> 0x1fU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
                                  >> 0x1eU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0xbfffffffU 
                                                        & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U])))))));
    vlSelf->io_posit_o_3 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x10000000U & vlSelf->__VdfgTmp_h4a92b19c__0)
                                      ? ((8U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                          ? (0x80000000U 
                                             | (0x7fffffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T))))
                                          : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T)
                                      : 0U));
}

VL_INLINE_OPT void VPvuTop___024root___act_sequent__TOP__0(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___act_sequent__TOP__0\n"); );
    // Init
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_ha01781f4__0;
    VlWide<3>/*95:0*/ __Vtemp_h02742eb8__0;
    // Body
    vlSelf->PvuTop__DOT__decode1__DOT___same_length_0_T_1 
        = ((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
            ? (0x1fU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])
            : 0x1fU);
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
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_0_T_1)))
                           ? (vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6 
                              << 0x10U) : vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6));
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_0_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_0_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_0_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_0_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__decode1__DOT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_hfb37dc36__0 = (0x3fU & (((0x40000000U 
                                                 & vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6)
                                                 ? 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_0_T_1) 
                                                    - (IData)(1U)))
                                                 : 
                                                (0x20U 
                                                 | (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((1U 
                                                         & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                         ? 
                                                        (~ 
                                                         vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])
                                                         : 0U))))) 
                                               | (- (IData)(
                                                            (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                                             & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
                                                                >> 0x1eU))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
        = (((IData)((0U != (0x7ffffffU & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
                                          >> 2U)))) 
            << 0x1bU) | (0x7ffffffU & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
                                       >> 2U)));
}

VL_INLINE_OPT void VPvuTop___024root___act_sequent__TOP__1(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___act_sequent__TOP__1\n"); );
    // Init
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h8687b578__0;
    VlWide<3>/*95:0*/ __Vtemp_h9aa7c450__0;
    // Body
    vlSelf->PvuTop__DOT__decode1__DOT___same_length_1_T_1 
        = ((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
            ? (0x1fU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U])
            : 0x1fU);
    __Vtemp_h8687b578__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h8687b578__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h9aa7c450__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h8687b578__0[0U];
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h8687b578__0[1U];
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h9aa7c450__0[2U])))));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_1_T_1)))
                           ? (vlSelf->PvuTop__DOT__decode1__DOT___operand_1_T_6 
                              << 0x10U) : vlSelf->PvuTop__DOT__decode1__DOT___operand_1_T_6));
    PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_1_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_3_T_2));
    PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_1_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_2_T_2));
    PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_1_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_1_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__decode1__DOT__barrel_shifter_1__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h2c5a84f3__0 = (0x3fU & (((0x40000000U 
                                                 & vlSelf->PvuTop__DOT__decode1__DOT___operand_1_T_6)
                                                 ? 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_1_T_1) 
                                                    - (IData)(1U)))
                                                 : 
                                                (0x20U 
                                                 | (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((1U 
                                                         & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                         ? 
                                                        (~ 
                                                         vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U])
                                                         : 0U))))) 
                                               | (- (IData)(
                                                            (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                                             & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                                                >> 0x1eU))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
        = (((IData)((0U != (0x7ffffffU & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                          >> 2U)))) 
            << 0x1bU) | (0x7ffffffU & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                       >> 2U)));
}

VL_INLINE_OPT void VPvuTop___024root___act_sequent__TOP__2(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___act_sequent__TOP__2\n"); );
    // Init
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_he504d2a6__0;
    VlWide<3>/*95:0*/ __Vtemp_h93388afc__0;
    // Body
    vlSelf->PvuTop__DOT__decode1__DOT___same_length_2_T_1 
        = ((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
            ? (0x1fU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U])
            : 0x1fU);
    __Vtemp_he504d2a6__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_he504d2a6__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h93388afc__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_he504d2a6__0[0U];
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_he504d2a6__0[1U];
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h93388afc__0[2U])))));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_2_T_1)))
                           ? (vlSelf->PvuTop__DOT__decode1__DOT___operand_2_T_6 
                              << 0x10U) : vlSelf->PvuTop__DOT__decode1__DOT___operand_2_T_6));
    PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_2_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_3_T_2));
    PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_2_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_2_T_2));
    PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_2_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_2_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__decode1__DOT__barrel_shifter_2__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_hd65e2692__0 = (0x3fU & (((0x40000000U 
                                                 & vlSelf->PvuTop__DOT__decode1__DOT___operand_2_T_6)
                                                 ? 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_2_T_1) 
                                                    - (IData)(1U)))
                                                 : 
                                                (0x20U 
                                                 | (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((1U 
                                                         & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                         ? 
                                                        (~ 
                                                         vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U])
                                                         : 0U))))) 
                                               | (- (IData)(
                                                            (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                                             & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                                >> 0x1eU))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
        = (((IData)((0U != (0x7ffffffU & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                          >> 2U)))) 
            << 0x1bU) | (0x7ffffffU & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                       >> 2U)));
}

VL_INLINE_OPT void VPvuTop___024root___act_sequent__TOP__3(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___act_sequent__TOP__3\n"); );
    // Init
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h73086578__0;
    VlWide<3>/*95:0*/ __Vtemp_hd89fd6df__0;
    // Body
    vlSelf->PvuTop__DOT__decode1__DOT___same_length_3_T_1 
        = ((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
            ? (0x1fU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U])
            : 0x1fU);
    __Vtemp_h73086578__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h73086578__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hd89fd6df__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h73086578__0[0U];
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h73086578__0[1U];
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hd89fd6df__0[2U])))));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_3_T_1)))
                           ? (vlSelf->PvuTop__DOT__decode1__DOT___operand_3_T_6 
                              << 0x10U) : vlSelf->PvuTop__DOT__decode1__DOT___operand_3_T_6));
    PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_3_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_3_T_2));
    PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_3_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_2_T_2));
    PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_3_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_3_T_1)))
                           ? (PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__decode1__DOT__barrel_shifter_3__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h9440eefd__0 = (0x3fU & (((0x40000000U 
                                                 & vlSelf->PvuTop__DOT__decode1__DOT___operand_3_T_6)
                                                 ? 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_3_T_1) 
                                                    - (IData)(1U)))
                                                 : 
                                                (0x20U 
                                                 | (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((1U 
                                                         & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                         ? 
                                                        (~ 
                                                         vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U])
                                                         : 0U))))) 
                                               | (- (IData)(
                                                            (vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                                             & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                                >> 0x1eU))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
        = (((IData)((0U != (0x7ffffffU & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                          >> 2U)))) 
            << 0x1bU) | (0x7ffffffU & (vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                       >> 2U)));
}

VL_INLINE_OPT void VPvuTop___024root___act_sequent__TOP__4(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___act_sequent__TOP__4\n"); );
    // Init
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hdd2b30ce__0;
    VlWide<3>/*95:0*/ __Vtemp_h29f13006__0;
    // Body
    vlSelf->PvuTop__DOT__decode2__DOT___same_length_0_T_1 
        = ((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
            ? (0x1fU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])
            : 0x1fU);
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
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_0_T_1)))
                           ? (vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6 
                              << 0x10U) : vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6));
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_0_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_0_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_0_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_0_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__decode2__DOT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_he5727d3a__0 = (0x3fU & (((0x40000000U 
                                                 & vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)
                                                 ? 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_0_T_1) 
                                                    - (IData)(1U)))
                                                 : 
                                                (0x20U 
                                                 | (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((1U 
                                                         & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                         ? 
                                                        (~ 
                                                         vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])
                                                         : 0U))))) 
                                               | (- (IData)(
                                                            (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                                             & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                                >> 0x1eU))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
        = (((IData)((0U != (0x7ffffffU & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                          >> 2U)))) 
            << 0x1bU) | (0x7ffffffU & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                       >> 2U)));
}

VL_INLINE_OPT void VPvuTop___024root___act_sequent__TOP__5(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___act_sequent__TOP__5\n"); );
    // Init
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_ha7169216__0;
    VlWide<3>/*95:0*/ __Vtemp_h754d297d__0;
    // Body
    vlSelf->PvuTop__DOT__decode2__DOT___same_length_1_T_1 
        = ((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
            ? (0x1fU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U])
            : 0x1fU);
    __Vtemp_ha7169216__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_ha7169216__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h754d297d__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_ha7169216__0[0U];
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_ha7169216__0[1U];
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h754d297d__0[2U])))));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_1_T_1)))
                           ? (vlSelf->PvuTop__DOT__decode2__DOT___operand_1_T_6 
                              << 0x10U) : vlSelf->PvuTop__DOT__decode2__DOT___operand_1_T_6));
    PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_1_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_3_T_2));
    PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_1_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_2_T_2));
    PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_1_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_1_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__decode2__DOT__barrel_shifter_1__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h04334a3c__0 = (0x3fU & (((0x40000000U 
                                                 & vlSelf->PvuTop__DOT__decode2__DOT___operand_1_T_6)
                                                 ? 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_1_T_1) 
                                                    - (IData)(1U)))
                                                 : 
                                                (0x20U 
                                                 | (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((1U 
                                                         & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                         ? 
                                                        (~ 
                                                         vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U])
                                                         : 0U))))) 
                                               | (- (IData)(
                                                            (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                                             & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                                                >> 0x1eU))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
        = (((IData)((0U != (0x7ffffffU & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                          >> 2U)))) 
            << 0x1bU) | (0x7ffffffU & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                       >> 2U)));
}

VL_INLINE_OPT void VPvuTop___024root___act_sequent__TOP__6(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___act_sequent__TOP__6\n"); );
    // Init
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h141b5a0e__0;
    VlWide<3>/*95:0*/ __Vtemp_h375f3268__0;
    // Body
    vlSelf->PvuTop__DOT__decode2__DOT___same_length_2_T_1 
        = ((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
            ? (0x1fU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U])
            : 0x1fU);
    __Vtemp_h141b5a0e__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h141b5a0e__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h375f3268__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h141b5a0e__0[0U];
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h141b5a0e__0[1U];
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h375f3268__0[2U])))));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_2_T_1)))
                           ? (vlSelf->PvuTop__DOT__decode2__DOT___operand_2_T_6 
                              << 0x10U) : vlSelf->PvuTop__DOT__decode2__DOT___operand_2_T_6));
    PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_2_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_3_T_2));
    PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_2_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_2_T_2));
    PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_2_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_2_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__decode2__DOT__barrel_shifter_2__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_hf361489c__0 = (0x3fU & (((0x40000000U 
                                                 & vlSelf->PvuTop__DOT__decode2__DOT___operand_2_T_6)
                                                 ? 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_2_T_1) 
                                                    - (IData)(1U)))
                                                 : 
                                                (0x20U 
                                                 | (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((1U 
                                                         & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                         ? 
                                                        (~ 
                                                         vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U])
                                                         : 0U))))) 
                                               | (- (IData)(
                                                            (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                                             & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                                                >> 0x1eU))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
        = (((IData)((0U != (0x7ffffffU & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                          >> 2U)))) 
            << 0x1bU) | (0x7ffffffU & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                       >> 2U)));
}

VL_INLINE_OPT void VPvuTop___024root___act_sequent__TOP__7(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___act_sequent__TOP__7\n"); );
    // Init
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hbbc1476e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6a139c95__0;
    // Body
    vlSelf->PvuTop__DOT__decode2__DOT___same_length_3_T_1 
        = ((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
            ? (0x1fU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U])
            : 0x1fU);
    __Vtemp_hbbc1476e__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_hbbc1476e__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h6a139c95__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hbbc1476e__0[0U];
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hbbc1476e__0[1U];
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h6a139c95__0[2U])))));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_3_T_1)))
                           ? (vlSelf->PvuTop__DOT__decode2__DOT___operand_3_T_6 
                              << 0x10U) : vlSelf->PvuTop__DOT__decode2__DOT___operand_3_T_6));
    PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_3_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_3_T_2));
    PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_3_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_2_T_2));
    PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_3_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_3_T_1)))
                           ? (PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__decode2__DOT__barrel_shifter_3__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h465b683e__0 = (0x3fU & (((0x40000000U 
                                                 & vlSelf->PvuTop__DOT__decode2__DOT___operand_3_T_6)
                                                 ? 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_3_T_1) 
                                                    - (IData)(1U)))
                                                 : 
                                                (0x20U 
                                                 | (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((1U 
                                                         & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                         ? 
                                                        (~ 
                                                         vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U])
                                                         : 0U))))) 
                                               | (- (IData)(
                                                            (vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                                             & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                                                >> 0x1eU))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
        = (((IData)((0U != (0x7ffffffU & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                          >> 2U)))) 
            << 0x1bU) | (0x7ffffffU & (vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                       >> 2U)));
}

VL_INLINE_OPT void VPvuTop___024root___nba_sequent__TOP__0(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0;
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 = 0;
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"lzc[0] = %2#, lzc_zeros[0] = %1#\nsame_length[0] = %2#, regime_r[0] = %2#\n",
                   5,(0x1fU & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]),
                   1,(1U & (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)),
                   5,(IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_0_T_1),
                   6,((0x40000000U & vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6)
                       ? (0x1fU & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___same_length_0_T_1) 
                                   - (IData)(1U))) : 
                      (0x20U | (0x1fU & ((IData)(1U) 
                                         + ((1U & vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                             ? (~ vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])
                                             : 0U))))));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"lzc[0] = %2#, lzc_zeros[0] = %1#\nsame_length[0] = %2#, regime_r[0] = %2#\n",
                   5,(0x1fU & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]),
                   1,(1U & (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)),
                   5,(IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_0_T_1),
                   6,((0x40000000U & vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)
                       ? (0x1fU & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___same_length_0_T_1) 
                                   - (IData)(1U))) : 
                      (0x20U | (0x1fU & ((IData)(1U) 
                                         + ((1U & vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                             ? (~ vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])
                                             : 0U))))));
    }
    if (vlSelf->reset) {
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[0U] = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U] = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U] = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U] = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U] = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U] = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U] = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[7U] = 0U;
    } else {
        if ((1U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))) {
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[0U] 
                = (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_0_T_1);
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U] 
                = ((0xfc000000U & vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U]) 
                   | (IData)((vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_0_T_1 
                              >> 0x20U)));
        }
        if ((2U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))) {
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U] 
                = ((0x3ffffffU & vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U]) 
                   | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_1_T_1) 
                      << 0x1aU));
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U] 
                = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_1_T_1) 
                    >> 6U) | ((IData)((vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_1_T_1 
                                       >> 0x20U)) << 0x1aU));
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U] 
                = ((0xfff00000U & vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U]) 
                   | ((IData)((vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_1_T_1 
                               >> 0x20U)) >> 6U));
        }
        if ((4U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))) {
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U] 
                = ((0xfffffU & vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U]) 
                   | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_2_T_1) 
                      << 0x14U));
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U] 
                = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_2_T_1) 
                    >> 0xcU) | ((IData)((vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_2_T_1 
                                         >> 0x20U)) 
                                << 0x14U));
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U] 
                = ((0xffffc000U & vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U]) 
                   | ((IData)((vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_2_T_1 
                               >> 0x20U)) >> 0xcU));
        }
        if ((8U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))) {
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U] 
                = ((0x3fffU & vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U]) 
                   | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_3_T_1) 
                      << 0xeU));
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U] 
                = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_3_T_1) 
                    >> 0x12U) | ((IData)((vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_3_T_1 
                                          >> 0x20U)) 
                                 << 0xeU));
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[7U] 
                = (0xffU & ((IData)((vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_3_T_1 
                                     >> 0x20U)) >> 0x12U));
        }
    }
    vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_0_T_1 
        = (0x3ffffffffffffffULL & (1ULL + (~ (((QData)((IData)(
                                                               vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[0U]))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_1_T_1 
        = (0x3ffffffffffffffULL & (1ULL + (~ (((QData)((IData)(
                                                               vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                               << 0x26U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U])) 
                                                  << 6U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                    >> 0x1aU))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_2_T_1 
        = (0x3ffffffffffffffULL & (1ULL + (~ (((QData)((IData)(
                                                               vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U])) 
                                                  << 0xcU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                    >> 0x14U))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_3_T_1 
        = (0x3ffffffffffffffULL & (1ULL + (~ (((QData)((IData)(
                                                               vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[7U])) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                    >> 0xeU))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h142e6f66__0 
        = (0x3ffffffffffffffULL & ((1U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                    ? (1ULL + (~ (((QData)((IData)(
                                                                   vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[0U])))))
                                    : (((QData)((IData)(
                                                        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[0U])))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h150cbe2f__0 
        = (0x3ffffffffffffffULL & ((2U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                    ? (1ULL + (~ (((QData)((IData)(
                                                                   vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                   << 0x26U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U])) 
                                                      << 6U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                        >> 0x1aU)))))
                                    : (((QData)((IData)(
                                                        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                        << 0x26U) | 
                                       (((QData)((IData)(
                                                         vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U])) 
                                         << 6U) | ((QData)((IData)(
                                                                   vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                   >> 0x1aU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h165b36ba__0 
        = (0x3ffffffffffffffULL & ((4U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                    ? (1ULL + (~ (((QData)((IData)(
                                                                   vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                   << 0x2cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U])) 
                                                      << 0xcU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                        >> 0x14U)))))
                                    : (((QData)((IData)(
                                                        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                        << 0x2cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U])) 
                                         << 0xcU) | 
                                        ((QData)((IData)(
                                                         vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                         >> 0x14U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h17428a27__0 
        = (0x3ffffffffffffffULL & ((8U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                    ? (1ULL + (~ (((QData)((IData)(
                                                                   vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[7U])) 
                                                   << 0x32U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                                      << 0x12U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                        >> 0xeU)))))
                                    : (((QData)((IData)(
                                                        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[7U])) 
                                        << 0x32U) | 
                                       (((QData)((IData)(
                                                         vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                         << 0x12U) 
                                        | ((QData)((IData)(
                                                           vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                           >> 0xeU)))));
    vlSelf->PvuTop__DOT___dotproduct_io_pir_frac_o 
        = (0x3ffffffffffffffULL & (((vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h142e6f66__0 
                                     & vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h150cbe2f__0) 
                                    | ((vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h150cbe2f__0 
                                        & vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h165b36ba__0) 
                                       | ((vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h165b36ba__0 
                                           & vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h17428a27__0) 
                                          | ((vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h142e6f66__0 
                                              & vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h165b36ba__0) 
                                             | ((vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h142e6f66__0 
                                                 | vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h150cbe2f__0) 
                                                & vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h17428a27__0))))) 
                                   + (vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h142e6f66__0 
                                      ^ (vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h150cbe2f__0 
                                         ^ (vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h165b36ba__0 
                                            ^ vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT____VdfgTmp_h17428a27__0)))));
    if (vlSelf->__VdfgTmp_h4be4f099__0) {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm__io_pir_frac_i = 0ULL;
        vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i = 0ULL;
    } else {
        vlSelf->PvuTop__DOT____Vcellinp__frac_norm__io_pir_frac_i 
            = vlSelf->PvuTop__DOT___dotproduct_io_pir_frac_o;
        vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
            = (0x1ffffffffffffffULL & vlSelf->PvuTop__DOT___dotproduct_io_pir_frac_o);
    }
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x38U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffffeULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x37U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffffdULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 1U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x36U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffffbULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 2U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x35U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffff7ULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 3U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x34U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffefULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 4U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x33U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffdfULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 5U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x32U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffffbfULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 6U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x31U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffff7fULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 7U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x30U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffeffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 8U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2fU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffdffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 9U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2eU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffffbffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0xaU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2dU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffff7ffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0xbU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2cU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffefffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0xcU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2bU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffdfffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0xdU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x2aU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffffbfffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0xeU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x29U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffff7fffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0xfU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x28U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffeffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x10U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x27U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffdffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x11U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x26U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffffbffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x12U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x25U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffff7ffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x13U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x24U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffefffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x14U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x23U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffdfffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x15U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x22U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffffbfffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x16U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x21U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffff7fffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x17U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x20U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffeffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x18U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1fU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffdffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x19U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1eU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffffbffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x1aU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1dU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffff7ffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x1bU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1cU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffefffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x1cU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1bU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffdfffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x1dU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x1aU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffffbfffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x1eU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x19U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffff7fffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x1fU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x18U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffeffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x20U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x17U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffdffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x21U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x16U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffffbffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x22U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x15U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffff7ffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x23U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x14U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffefffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x24U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x13U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffdfffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x25U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x12U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffffbfffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x26U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x11U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffff7fffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x27U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0x10U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffeffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x28U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xfU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffdffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x29U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xeU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fffbffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x2aU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xdU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fff7ffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x2bU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xcU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffefffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x2cU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xbU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffdfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x2dU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 0xaU)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ffbfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x2eU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 9U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1ff7fffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x2fU));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 8U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1feffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x30U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 7U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fdffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x31U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 6U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1fbffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x32U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 5U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1f7ffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x33U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 4U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1efffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x34U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 3U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x35U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 2U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x36U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i 
                         >> 1U)));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17fffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x37U));
    PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i));
    vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm__DOT__lzcMod__DOT____Vlvbound_h9fd64bd1__0)) 
              << 0x38U));
}

void VPvuTop___024root___ico_comb__TOP__16(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__17(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__26(VPvuTop___024root* vlSelf);

void VPvuTop___024root___eval_nba(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0x22U)) {
        VPvuTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x36U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0x11U) | vlSelf->__VnbaTriggered.at(0x22U))) {
        VPvuTop___024root___ico_comb__TOP__16(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0x10U) | vlSelf->__VnbaTriggered.at(0x22U))) {
        VPvuTop___024root___ico_comb__TOP__17(vlSelf);
        vlSelf->__Vm_traceActivity[0x37U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0x10U) | vlSelf->__VnbaTriggered.at(0x11U)) 
         | vlSelf->__VnbaTriggered.at(0x22U))) {
        VPvuTop___024root___ico_comb__TOP__26(vlSelf);
        vlSelf->__Vm_traceActivity[0x38U] = 1U;
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
                VL_FATAL_MT("/home/wuxy/PVU/vsrc/PvuTop.sv", 2112, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/wuxy/PVU/vsrc/PvuTop.sv", 2112, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/wuxy/PVU/vsrc/PvuTop.sv", 2112, "", "NBA region did not converge.");
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
