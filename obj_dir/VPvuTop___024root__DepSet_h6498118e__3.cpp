// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop___024root.h"

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__92(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__92\n"); );
    // Init
    VlWide<14>/*447:0*/ __Vtemp_h8e14fee8__0;
    // Body
    __Vtemp_h8e14fee8__0[0U] = (IData)(((QData)((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o)))) 
                                        << 0x38U));
    __Vtemp_h8e14fee8__0[1U] = ((0xfe000000U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o 
                                                << 0x16U)) 
                                | (IData)((((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o)))) 
                                            << 0x38U) 
                                           >> 0x20U)));
    __Vtemp_h8e14fee8__0[2U] = (0xfffffU & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o 
                                            >> 0xaU));
    __Vtemp_h8e14fee8__0[3U] = ((0xfffe0000U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o 
                                                << 0xeU)) 
                                | ((IData)((0U != (3U 
                                                   & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o))) 
                                   << 0x10U));
    __Vtemp_h8e14fee8__0[4U] = (0xfffU & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o 
                                          >> 0x12U));
    __Vtemp_h8e14fee8__0[5U] = (((IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o 
                                          >> 0x1dU)) 
                                 << 9U) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0xfffffffU 
                                                     & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o)))) 
                                           << 8U));
    __Vtemp_h8e14fee8__0[6U] = (0xfU & ((IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o 
                                                 >> 0x1dU)) 
                                        >> 0x17U));
    __Vtemp_h8e14fee8__0[7U] = ((0xffffffeU & ((IData)(
                                                       (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o 
                                                        >> 0x1dU)) 
                                               << 1U)) 
                                | (0U != (0xfffffffU 
                                          & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o))));
    __Vtemp_h8e14fee8__0[8U] = 0U;
    __Vtemp_h8e14fee8__0[9U] = 0U;
    __Vtemp_h8e14fee8__0[0xaU] = 0U;
    __Vtemp_h8e14fee8__0[0xbU] = 0U;
    __Vtemp_h8e14fee8__0[0xcU] = 0U;
    __Vtemp_h8e14fee8__0[0xdU] = 0U;
    vlSelf->__VdfgTmp_h5d360462__0 = ((0x1bfU >= (0x1ffU 
                                                  & ((IData)(0x38U) 
                                                     * (IData)(vlSelf->io_op))))
                                       ? (0xfffffffU 
                                          & (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x38U) 
                                                   * (IData)(vlSelf->io_op))))
                                               ? 0U
                                               : (__Vtemp_h8e14fee8__0[
                                                  (((IData)(0x1bU) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        * (IData)(vlSelf->io_op)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x38U) 
                                                       * (IData)(vlSelf->io_op)))))) 
                                             | (__Vtemp_h8e14fee8__0[
                                                (0xfU 
                                                 & (((IData)(0x38U) 
                                                     * (IData)(vlSelf->io_op)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x38U) 
                                                    * (IData)(vlSelf->io_op))))))
                                       : 0U);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__93(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__93\n"); );
    // Init
    VlWide<14>/*447:0*/ __Vtemp_ha5d82a4a__0;
    // Body
    __Vtemp_ha5d82a4a__0[0U] = (IData)(((QData)((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o)))) 
                                        << 0x38U));
    __Vtemp_ha5d82a4a__0[1U] = ((0xfe000000U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o 
                                                << 0x16U)) 
                                | (IData)((((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o)))) 
                                            << 0x38U) 
                                           >> 0x20U)));
    __Vtemp_ha5d82a4a__0[2U] = (0xfffffU & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o 
                                            >> 0xaU));
    __Vtemp_ha5d82a4a__0[3U] = ((0xfffe0000U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o 
                                                << 0xeU)) 
                                | ((IData)((0U != (3U 
                                                   & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o))) 
                                   << 0x10U));
    __Vtemp_ha5d82a4a__0[4U] = (0xfffU & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o 
                                          >> 0x12U));
    __Vtemp_ha5d82a4a__0[5U] = (((IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o 
                                          >> 0x1dU)) 
                                 << 9U) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0xfffffffU 
                                                     & (IData)(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o)))) 
                                           << 8U));
    __Vtemp_ha5d82a4a__0[6U] = (0xfU & ((IData)((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o 
                                                 >> 0x1dU)) 
                                        >> 0x17U));
    __Vtemp_ha5d82a4a__0[7U] = ((0xffffffeU & ((IData)(
                                                       (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o 
                                                        >> 0x1dU)) 
                                               << 1U)) 
                                | (0U != (0xfffffffU 
                                          & (IData)(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o))));
    __Vtemp_ha5d82a4a__0[8U] = 0U;
    __Vtemp_ha5d82a4a__0[9U] = 0U;
    __Vtemp_ha5d82a4a__0[0xaU] = 0U;
    __Vtemp_ha5d82a4a__0[0xbU] = 0U;
    __Vtemp_ha5d82a4a__0[0xcU] = 0U;
    __Vtemp_ha5d82a4a__0[0xdU] = 0U;
    vlSelf->__VdfgTmp_h0f95f122__0 = ((0x1bfU >= (0x1ffU 
                                                  & ((IData)(0x38U) 
                                                     * (IData)(vlSelf->io_op))))
                                       ? (0xfffffffU 
                                          & (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x38U) 
                                                   * (IData)(vlSelf->io_op))))
                                               ? 0U
                                               : (__Vtemp_ha5d82a4a__0[
                                                  (((IData)(0x1bU) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x38U) 
                                                        * (IData)(vlSelf->io_op)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x38U) 
                                                       * (IData)(vlSelf->io_op)))))) 
                                             | (__Vtemp_ha5d82a4a__0[
                                                (0xfU 
                                                 & (((IData)(0x38U) 
                                                     * (IData)(vlSelf->io_op)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x38U) 
                                                    * (IData)(vlSelf->io_op))))))
                                       : 0U);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__94(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__94\n"); );
    // Init
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_h4198450f__0;
    VlWide<3>/*95:0*/ __Vtemp_hbaed5fc8__0;
    VlWide<3>/*95:0*/ __Vtemp_h76170c50__0;
    VlWide<3>/*95:0*/ __Vtemp_hf77145ca__0;
    VlWide<3>/*95:0*/ __Vtemp_h11dd11f5__0;
    // Body
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSelf->io_op))
                                      ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_h88a6f633__0))))) 
                    << 0x39U) | ((QData)((IData)((0x7ffffffU 
                                                  & vlSelf->__VdfgTmp_hfbedb883__0))) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((5U 
                                                                           == (IData)(vlSelf->io_op))
                                                                           ? 0U
                                                                           : 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h88a6f633__0))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           (0x7ffffffU 
                                                                            & vlSelf->__VdfgTmp_hfbedb883__0))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h4198450f__0, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h4198450f__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h4198450f__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h4198450f__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hbaed5fc8__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hbaed5fc8__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hbaed5fc8__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hbaed5fc8__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h76170c50__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h76170c50__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h76170c50__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h76170c50__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hf77145ca__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hf77145ca__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hf77145ca__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hf77145ca__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h11dd11f5__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_h11dd11f5__0[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_h11dd11f5__0[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h11dd11f5__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U])))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__95(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__95\n"); );
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
                                      ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_h86044a4c__0))))) 
                    << 0x39U) | ((QData)((IData)((0x7ffffffU 
                                                  & vlSelf->__VdfgTmp_h257dbf2c__0))) 
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
                                                                           & (IData)(vlSelf->__VdfgTmp_h86044a4c__0))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           (0x7ffffffU 
                                                                            & vlSelf->__VdfgTmp_h257dbf2c__0))) 
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__96(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__96\n"); );
    // Init
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_h05350155__0;
    VlWide<3>/*95:0*/ __Vtemp_h467d8c7f__0;
    VlWide<3>/*95:0*/ __Vtemp_h282321a8__0;
    VlWide<3>/*95:0*/ __Vtemp_h492b9b86__0;
    VlWide<3>/*95:0*/ __Vtemp_habcf0191__0;
    // Body
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSelf->io_op))
                                      ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_hf7a6723f__0))))) 
                    << 0x39U) | ((QData)((IData)((0x7ffffffU 
                                                  & vlSelf->__VdfgTmp_h5d360462__0))) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((5U 
                                                                           == (IData)(vlSelf->io_op))
                                                                           ? 0U
                                                                           : 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__VdfgTmp_hf7a6723f__0))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           (0x7ffffffU 
                                                                            & vlSelf->__VdfgTmp_h5d360462__0))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h05350155__0, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h05350155__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h05350155__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h05350155__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h467d8c7f__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h467d8c7f__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h467d8c7f__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h467d8c7f__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h282321a8__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h282321a8__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h282321a8__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h282321a8__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h492b9b86__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h492b9b86__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h492b9b86__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h492b9b86__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_habcf0191__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_habcf0191__0[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_habcf0191__0[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_habcf0191__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U])))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__97(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__97\n"); );
    // Init
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_he4810790__0;
    VlWide<3>/*95:0*/ __Vtemp_h5b5250d1__0;
    VlWide<3>/*95:0*/ __Vtemp_hacd47c81__0;
    VlWide<3>/*95:0*/ __Vtemp_h7ba44c4d__0;
    VlWide<3>/*95:0*/ __Vtemp_h17039e94__0;
    // Body
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSelf->io_op))
                                      ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_hb7a81c42__0))))) 
                    << 0x39U) | ((QData)((IData)((0x7ffffffU 
                                                  & vlSelf->__VdfgTmp_h0f95f122__0))) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((5U 
                                                                           == (IData)(vlSelf->io_op))
                                                                           ? 0U
                                                                           : 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__VdfgTmp_hb7a81c42__0))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           (0x7ffffffU 
                                                                            & vlSelf->__VdfgTmp_h0f95f122__0))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_he4810790__0, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_he4810790__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_he4810790__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_he4810790__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h5b5250d1__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h5b5250d1__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h5b5250d1__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h5b5250d1__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hacd47c81__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hacd47c81__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hacd47c81__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hacd47c81__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h7ba44c4d__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h7ba44c4d__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h7ba44c4d__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h7ba44c4d__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h17039e94__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_h17039e94__0[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_h17039e94__0[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h17039e94__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U])))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__98(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__98\n"); );
    // Body
    vlSelf->io_posit_o_3 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x8000000U & vlSelf->__VdfgTmp_hfbedb883__0)
                                      ? ((8U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                          ? (0x80000000U 
                                             | (0x7fffffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T))))
                                          : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T)
                                      : 0U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__99(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__99\n"); );
    // Body
    vlSelf->io_posit_o_0 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x8000000U & vlSelf->__VdfgTmp_h257dbf2c__0)
                                      ? ((1U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                          ? (0x80000000U 
                                             | (0x7fffffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))))
                                          : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T)
                                      : 0U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__100(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__100\n"); );
    // Body
    vlSelf->io_posit_o_1 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x8000000U & vlSelf->__VdfgTmp_h5d360462__0)
                                      ? ((2U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                          ? (0x80000000U 
                                             | (0x7fffffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T))))
                                          : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T)
                                      : 0U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__101(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__101\n"); );
    // Body
    vlSelf->io_posit_o_2 = ((5U == (IData)(vlSelf->io_op))
                             ? 0U : ((0x8000000U & vlSelf->__VdfgTmp_h0f95f122__0)
                                      ? ((4U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_sign))
                                          ? (0x80000000U 
                                             | (0x7fffffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T))))
                                          : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T)
                                      : 0U));
}

VL_INLINE_OPT void VPvuTop___024root___nba_sequent__TOP__0(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc1a7095d__0;
    VlWide<6>/*191:0*/ __Vtemp_h2b2f5375__0;
    VlWide<7>/*223:0*/ __Vtemp_h17718dcf__0;
    // Body
    if (vlSelf->reset) {
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[0U] = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U] = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U] = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U] = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U] = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U] = 0U;
        vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U] = 0U;
    } else {
        if ((1U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))) {
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[0U] 
                = (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_0_T_1);
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U] 
                = ((0xff000000U & vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U]) 
                   | (IData)((vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_0_T_1 
                              >> 0x20U)));
        }
        if ((2U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))) {
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U] 
                = ((0xffffffU & vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U]) 
                   | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_1_T_1) 
                      << 0x18U));
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U] 
                = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_1_T_1) 
                    >> 8U) | ((IData)((vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_1_T_1 
                                       >> 0x20U)) << 0x18U));
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U] 
                = ((0xffff0000U & vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U]) 
                   | ((IData)((vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_1_T_1 
                               >> 0x20U)) >> 8U));
        }
        if ((4U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))) {
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U] 
                = ((0xffffU & vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U]) 
                   | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_2_T_1) 
                      << 0x10U));
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U] 
                = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_2_T_1) 
                    >> 0x10U) | ((IData)((vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_2_T_1 
                                          >> 0x20U)) 
                                 << 0x10U));
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U] 
                = ((0xffffff00U & vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U]) 
                   | ((IData)((vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_2_T_1 
                               >> 0x20U)) >> 0x10U));
        }
        if ((8U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))) {
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U] 
                = ((0xffU & vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U]) 
                   | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_3_T_1) 
                      << 8U));
            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U] 
                = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_3_T_1) 
                    >> 0x18U) | ((IData)((vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_3_T_1 
                                          >> 0x20U)) 
                                 << 8U));
        }
    }
    vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_0_T_1 
        = (0xffffffffffffffULL & (1ULL + (~ (((QData)((IData)(
                                                              vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[0U]))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_1_T_1 
        = (0xffffffffffffffULL & (1ULL + (~ (((QData)((IData)(
                                                              vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                   >> 0x18U))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_2_T_1 
        = (0xffffffffffffffULL & (1ULL + (~ (((QData)((IData)(
                                                              vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                   >> 0x10U))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT___pir_frac_cmp_3_T_1 
        = (0xffffffffffffffULL & (1ULL + (~ (((QData)((IData)(
                                                              vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                   >> 8U))))));
    __Vtemp_hc1a7095d__0[1U] = (((IData)((0xffffffffffffffULL 
                                          & ((2U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                              ? (1ULL 
                                                 + 
                                                 (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U])) 
                                                       << 8U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                         >> 0x18U)))))
                                              : (((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U])) 
                                                     << 8U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                       >> 0x18U)))))) 
                                 << 0x18U) | (IData)(
                                                     ((0xffffffffffffffULL 
                                                       & ((1U 
                                                           & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                                           ? 
                                                          (1ULL 
                                                           + 
                                                           (~ 
                                                            (((QData)((IData)(
                                                                              vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[0U])))))
                                                           : 
                                                          (((QData)((IData)(
                                                                            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[0U]))))) 
                                                      >> 0x20U)));
    __Vtemp_hc1a7095d__0[2U] = (((IData)((0xffffffffffffffULL 
                                          & ((2U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                              ? (1ULL 
                                                 + 
                                                 (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U])) 
                                                       << 8U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                         >> 0x18U)))))
                                              : (((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U])) 
                                                     << 8U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                       >> 0x18U)))))) 
                                 >> 8U) | ((IData)(
                                                   ((0xffffffffffffffULL 
                                                     & ((2U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                                         ? 
                                                        (1ULL 
                                                         + 
                                                         (~ 
                                                          (((QData)((IData)(
                                                                            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                                 >> 0x18U)))))
                                                         : 
                                                        (((QData)((IData)(
                                                                          vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U])) 
                                                             << 8U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                               >> 0x18U))))) 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h2b2f5375__0[3U] = (((IData)((0xffffffffffffffULL 
                                          & ((4U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                              ? (1ULL 
                                                 + 
                                                 (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                         >> 0x10U)))))
                                              : (((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U])) 
                                                     << 0x10U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                       >> 0x10U)))))) 
                                 << 0x10U) | ((IData)(
                                                      ((0xffffffffffffffULL 
                                                        & ((2U 
                                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                                            ? 
                                                           (1ULL 
                                                            + 
                                                            (~ 
                                                             (((QData)((IData)(
                                                                               vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                               << 0x28U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U])) 
                                                                  << 8U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                                    >> 0x18U)))))
                                                            : 
                                                           (((QData)((IData)(
                                                                             vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                             << 0x28U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[2U])) 
                                                                << 8U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                                  >> 0x18U))))) 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_h2b2f5375__0[4U] = (((IData)((0xffffffffffffffULL 
                                          & ((4U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                              ? (1ULL 
                                                 + 
                                                 (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                         >> 0x10U)))))
                                              : (((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U])) 
                                                     << 0x10U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                       >> 0x10U)))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((0xffffffffffffffULL 
                                                        & ((4U 
                                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                                            ? 
                                                           (1ULL 
                                                            + 
                                                            (~ 
                                                             (((QData)((IData)(
                                                                               vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U])) 
                                                                  << 0x10U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                                    >> 0x10U)))))
                                                            : 
                                                           (((QData)((IData)(
                                                                             vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                             << 0x30U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U])) 
                                                                << 0x10U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                                  >> 0x10U))))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h17718dcf__0[5U] = (((IData)((0xffffffffffffffULL 
                                          & ((8U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                              ? (1ULL 
                                                 + 
                                                 (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                         >> 8U)))))
                                              : (((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                                     << 0x18U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                       >> 8U)))))) 
                                 << 8U) | ((IData)(
                                                   ((0xffffffffffffffULL 
                                                     & ((4U 
                                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                                         ? 
                                                        (1ULL 
                                                         + 
                                                         (~ 
                                                          (((QData)((IData)(
                                                                            vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                            << 0x30U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U])) 
                                                               << 0x10U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                                 >> 0x10U)))))
                                                         : 
                                                        (((QData)((IData)(
                                                                          vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                          << 0x30U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[4U])) 
                                                             << 0x10U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[3U])) 
                                                               >> 0x10U))))) 
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_h17718dcf__0[6U] = (((IData)((0xffffffffffffffULL 
                                          & ((8U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                              ? (1ULL 
                                                 + 
                                                 (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                         >> 8U)))))
                                              : (((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                                     << 0x18U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                       >> 8U)))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((0xffffffffffffffULL 
                                                        & ((8U 
                                                            & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                                            ? 
                                                           (1ULL 
                                                            + 
                                                            (~ 
                                                             (((QData)((IData)(
                                                                               vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                                                  << 0x18U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                                    >> 8U)))))
                                                            : 
                                                           (((QData)((IData)(
                                                                             vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                                             << 0x38U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[6U])) 
                                                                << 0x18U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[5U])) 
                                                                  >> 8U))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = (IData)((0xffffffffffffffULL & ((1U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))
                                           ? (1ULL 
                                              + (~ 
                                                 (((QData)((IData)(
                                                                   vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[0U])))))
                                           : (((QData)((IData)(
                                                               vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp[0U]))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = __Vtemp_hc1a7095d__0[1U];
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = __Vtemp_hc1a7095d__0[2U];
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = __Vtemp_h2b2f5375__0[3U];
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = __Vtemp_h2b2f5375__0[4U];
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = __Vtemp_h17718dcf__0[5U];
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = __Vtemp_h17718dcf__0[6U];
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
void VPvuTop___024root___eval_nba(VPvuTop___024root* vlSelf);

void VPvuTop___024root___eval(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<59> __VpreTriggered;
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
                VL_FATAL_MT("/home/wuxy/PVU/vsrc/PvuTop.sv", 6811, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/wuxy/PVU/vsrc/PvuTop.sv", 6811, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/wuxy/PVU/vsrc/PvuTop.sv", 6811, "", "NBA region did not converge.");
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
