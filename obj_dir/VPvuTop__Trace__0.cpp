// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPvuTop__Syms.h"


void VPvuTop___024root__trace_chg_sub_0(VPvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPvuTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_chg_top_0\n"); );
    // Init
    VPvuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPvuTop___024root*>(voidSelf);
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPvuTop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPvuTop___024root__trace_chg_sub_0(VPvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<27>/*863:0*/ __Vtemp_h0e2f7bf6__0;
    VlWide<14>/*447:0*/ __Vtemp_hccd079ab__0;
    VlWide<7>/*223:0*/ __Vtemp_h0cd1d838__0;
    VlWide<7>/*223:0*/ __Vtemp_hb8497458__0;
    VlWide<4>/*127:0*/ __Vtemp_h647cbbf2__0;
    VlWide<13>/*415:0*/ __Vtemp_h8d902b43__0;
    VlWide<6>/*191:0*/ __Vtemp_hd853608c__0;
    VlWide<7>/*223:0*/ __Vtemp_h17bc6dc6__0;
    VlWide<7>/*223:0*/ __Vtemp_hf816dff2__0;
    VlWide<4>/*127:0*/ __Vtemp_h81d1b9e4__0;
    VlWide<8>/*255:0*/ __Vtemp_h0c422b7f__0;
    VlWide<8>/*255:0*/ __Vtemp_h4933e7c7__0;
    VlWide<8>/*255:0*/ __Vtemp_hbca8450e__0;
    VlWide<4>/*127:0*/ __Vtemp_heafba450__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->PvuTop__DOT__decode1__DOT___operand_0_T_6),15);
        bufp->chgSData(oldp+1,(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i),15);
        bufp->chgSData(oldp+2,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp),15);
        bufp->chgSData(oldp+3,(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6),15);
        bufp->chgSData(oldp+4,(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i),15);
        bufp->chgSData(oldp+5,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp),15);
        bufp->chgBit(oldp+6,(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o));
        bufp->chgCData(oldp+7,((0U != (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6))),3);
        bufp->chgBit(oldp+8,((1U & (~ (IData)((0U != (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)))))));
        bufp->chgBit(oldp+9,((0U != (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6))));
    }
    if (VL_UNLIKELY((((((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [3U]) | vlSelf->__Vm_traceActivity
                        [5U]) | vlSelf->__Vm_traceActivity
                       [7U]) | vlSelf->__Vm_traceActivity
                      [8U]) | vlSelf->__Vm_traceActivity
                     [0xaU]))) {
        __Vtemp_h0e2f7bf6__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                             << 0x38U) 
                                            | (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))));
        __Vtemp_h0e2f7bf6__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                     << 0x1aU) | (IData)(
                                                         ((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                                            << 0x38U) 
                                                           | (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                                          >> 0x20U)));
        __Vtemp_h0e2f7bf6__0[2U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                    >> 6U);
        __Vtemp_h0e2f7bf6__0[3U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                     << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                  << 0x12U));
        __Vtemp_h0e2f7bf6__0[4U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                    >> 0xcU);
        __Vtemp_h0e2f7bf6__0[5U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                     << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                 << 0xcU));
        __Vtemp_h0e2f7bf6__0[6U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                    >> 0x12U);
        __Vtemp_h0e2f7bf6__0[7U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                     << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                               << 6U));
        __Vtemp_h0e2f7bf6__0[8U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                    >> 0x18U);
        __Vtemp_h0e2f7bf6__0[9U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                     << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        __Vtemp_h0e2f7bf6__0[0xaU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                       << 0x1cU) | 
                                      ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                       << 0x1aU));
        __Vtemp_h0e2f7bf6__0[0xbU] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                      >> 4U);
        __Vtemp_h0e2f7bf6__0[0xcU] = ((((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                        ^ ((1U & ((IData)(
                                                          (0x10000000ULL 
                                                           == 
                                                           (0x18000000ULL 
                                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                                  | (IData)(
                                                            (0x8000000ULL 
                                                             == 
                                                             (0x18000000ULL 
                                                              & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))
                                            ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                               << 0xeU)
                                            : ((1U 
                                                & ((IData)(
                                                           (0x18000000ULL 
                                                            == 
                                                            (0x38000000ULL 
                                                             & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x1bU))) 
                                                      & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                   << 0xfU)
                                                : 0U))) 
                                       << 0x16U) | 
                                      ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                       << 0x14U));
        __Vtemp_h0e2f7bf6__0[0xdU] = (0x7ffffU & ((
                                                   (- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
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
                                                      : 0U))) 
                                                  >> 0xaU));
        __Vtemp_h0e2f7bf6__0[0xeU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                       << 0x10U) | 
                                      ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                       << 0xeU));
        __Vtemp_h0e2f7bf6__0[0xfU] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                      >> 0x10U);
        __Vtemp_h0e2f7bf6__0[0x10U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                        << 0xaU) | 
                                       ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                        << 8U));
        __Vtemp_h0e2f7bf6__0[0x11U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                       >> 0x16U);
        __Vtemp_h0e2f7bf6__0[0x12U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                        << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                  << 2U));
        __Vtemp_h0e2f7bf6__0[0x13U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                         << 0x1cU) 
                                        | (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                           >> 0x1cU)));
        __Vtemp_h0e2f7bf6__0[0x14U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                       >> 2U);
        __Vtemp_h0e2f7bf6__0[0x15U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                        << 0x18U) | 
                                       ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                        << 0x16U));
        __Vtemp_h0e2f7bf6__0[0x16U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                       >> 8U);
        __Vtemp_h0e2f7bf6__0[0x17U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                        << 0x12U) | 
                                       ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                        << 0x10U));
        __Vtemp_h0e2f7bf6__0[0x18U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                       >> 0xeU);
        __Vtemp_h0e2f7bf6__0[0x19U] = ((((1U & (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                        >> 0x29U)))
                                          ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                             << 0xeU)
                                          : 0U) << 0xcU) 
                                       | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                          << 0xaU));
        __Vtemp_h0e2f7bf6__0[0x1aU] = (((1U & (IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                       >> 0x29U)))
                                         ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                            << 0xeU)
                                         : 0U) >> 0x14U);
        bufp->chgWData(oldp+10,(__Vtemp_h0e2f7bf6__0),840);
        __Vtemp_hccd079ab__0[0U] = (IData)(vlSelf->__VdfgTmp_h2ac9f9df__0);
        __Vtemp_hccd079ab__0[1U] = (IData)((vlSelf->__VdfgTmp_h2ac9f9df__0 
                                            >> 0x20U));
        __Vtemp_hccd079ab__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                     << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                               << 6U));
        __Vtemp_hccd079ab__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                    >> 0x18U);
        __Vtemp_hccd079ab__0[4U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                     << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
        __Vtemp_hccd079ab__0[5U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                     << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                  << 0x1aU));
        __Vtemp_hccd079ab__0[6U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                    >> 4U);
        __Vtemp_hccd079ab__0[7U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                     << 0x16U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                  << 0x14U));
        __Vtemp_hccd079ab__0[8U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                    >> 0xaU);
        __Vtemp_hccd079ab__0[9U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                     << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                  << 0xeU));
        __Vtemp_hccd079ab__0[0xaU] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                      >> 0x10U);
        __Vtemp_hccd079ab__0[0xbU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                       << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                   << 8U));
        __Vtemp_hccd079ab__0[0xcU] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                      >> 0x16U);
        __Vtemp_hccd079ab__0[0xdU] = ((((1U & (IData)(
                                                      (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                       >> 0x29U)))
                                         ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                            << 0xeU)
                                         : 0U) << 4U) 
                                      | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                         << 2U));
        bufp->chgWData(oldp+37,(__Vtemp_hccd079ab__0),448);
        __Vtemp_h0cd1d838__0[0U] = (IData)(vlSelf->__VdfgTmp_h9e108f72__0);
        __Vtemp_h0cd1d838__0[1U] = (IData)((vlSelf->__VdfgTmp_h9e108f72__0 
                                            >> 0x20U));
        __Vtemp_h0cd1d838__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                     << 0x10U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                  << 0xeU));
        __Vtemp_h0cd1d838__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                    >> 0x10U);
        __Vtemp_h0cd1d838__0[4U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                     << 0xaU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                 << 8U));
        __Vtemp_h0cd1d838__0[5U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                    >> 0x16U);
        __Vtemp_h0cd1d838__0[6U] = ((((1U & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x29U)))
                                       ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                          << 0xeU) : 0U) 
                                     << 4U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                               << 2U));
        bufp->chgWData(oldp+51,(__Vtemp_h0cd1d838__0),224);
        __Vtemp_hb8497458__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                             << 0x3aU) 
                                            | (((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg) 
                                                                   << 0x1cU) 
                                                                  | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)))))));
        __Vtemp_hb8497458__0[1U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                     << 0x1cU) | (IData)(
                                                         ((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                            << 0x3aU) 
                                                           | (((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod)) 
                                                               << 0x1eU) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg) 
                                                                                << 0x1cU) 
                                                                                | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)))))) 
                                                          >> 0x20U)));
        __Vtemp_hb8497458__0[2U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                     << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                                     >> 4U)));
        __Vtemp_hb8497458__0[3U] = ((((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
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
                                          : ((1U & 
                                              ((IData)(
                                                       (0x600U 
                                                        == 
                                                        (0xe00U 
                                                         & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                               | ((~ 
                                                   ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                                    >> 9U)) 
                                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                              ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                 << 1U)
                                              : 0U))) 
                                     << 0x18U) | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                   << 0x16U) 
                                                  | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                                     >> 6U)));
        __Vtemp_hb8497458__0[4U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                     << 0x16U) | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                   << 0x14U) 
                                                  | (0x7fU 
                                                     & (((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                                         ^ 
                                                         ((1U 
                                                           & ((IData)(
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
                                                           : 
                                                          ((1U 
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
                                                        >> 8U))));
        __Vtemp_hb8497458__0[5U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                     << 0x14U) | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                   << 0x12U) 
                                                  | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod) 
                                                     >> 0xaU)));
        __Vtemp_hb8497458__0[6U] = ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                    >> 0xcU);
        bufp->chgWData(oldp+58,(__Vtemp_hb8497458__0),224);
        __Vtemp_h647cbbf2__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod)) 
                                             << 0x26U) 
                                            | (((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                << 0x24U) 
                                               | (QData)((IData)(vlSelf->__VdfgTmp_h2b13085d__0)))));
        __Vtemp_h647cbbf2__0[1U] = (IData)(((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod)) 
                                              << 0x26U) 
                                             | (((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                 << 0x24U) 
                                                | (QData)((IData)(vlSelf->__VdfgTmp_h2b13085d__0)))) 
                                            >> 0x20U));
        __Vtemp_h647cbbf2__0[2U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod) 
                                     << 4U) | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                               << 2U));
        __Vtemp_h647cbbf2__0[3U] = 0U;
        bufp->chgWData(oldp+65,(__Vtemp_h647cbbf2__0),112);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgCData(oldp+69,(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp),7);
        bufp->chgSData(oldp+70,(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac),12);
        bufp->chgSData(oldp+71,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o),15);
        bufp->chgSData(oldp+72,(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac),14);
        bufp->chgIData(oldp+73,(((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                 << 0xeU)),28);
        bufp->chgSData(oldp+74,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod),15);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[3U] 
                       | vlSelf->__Vm_traceActivity
                       [5U]) | vlSelf->__Vm_traceActivity
                      [8U]) | vlSelf->__Vm_traceActivity
                     [0xaU]))) {
        __Vtemp_h8d902b43__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                             << 0x38U) 
                                            | (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))));
        __Vtemp_h8d902b43__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                     << 0x1aU) | (IData)(
                                                         ((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                                            << 0x38U) 
                                                           | (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                                          >> 0x20U)));
        __Vtemp_h8d902b43__0[2U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                    >> 6U);
        __Vtemp_h8d902b43__0[3U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                     << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                  << 0x12U));
        __Vtemp_h8d902b43__0[4U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                    >> 0xcU);
        __Vtemp_h8d902b43__0[5U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                     << 0xeU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                 << 0xcU));
        __Vtemp_h8d902b43__0[6U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                    >> 0x12U);
        __Vtemp_h8d902b43__0[7U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                     << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                               << 6U));
        __Vtemp_h8d902b43__0[8U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                    >> 0x18U);
        __Vtemp_h8d902b43__0[9U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                     << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        __Vtemp_h8d902b43__0[0xaU] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                       << 0x1cU) | 
                                      ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                       << 0x1aU));
        __Vtemp_h8d902b43__0[0xbU] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                      >> 4U);
        __Vtemp_h8d902b43__0[0xcU] = 0U;
        bufp->chgWData(oldp+75,(__Vtemp_h8d902b43__0),392);
        __Vtemp_hd853608c__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                             << 0x38U) 
                                            | (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))));
        __Vtemp_hd853608c__0[1U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                     << 0x1aU) | (IData)(
                                                         ((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg)) 
                                                            << 0x38U) 
                                                           | (QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                                          >> 0x20U)));
        __Vtemp_hd853608c__0[2U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                                    >> 6U);
        __Vtemp_hd853608c__0[3U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                     << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                  << 0x12U));
        __Vtemp_hd853608c__0[4U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                    >> 0xcU);
        __Vtemp_hd853608c__0[5U] = 0U;
        bufp->chgWData(oldp+88,(__Vtemp_hd853608c__0),168);
        __Vtemp_h17bc6dc6__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                             << 0x3eU) 
                                            | vlSelf->__VdfgTmp_h7861aef0__0));
        __Vtemp_h17bc6dc6__0[1U] = (IData)(((((QData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                              << 0x3eU) 
                                             | vlSelf->__VdfgTmp_h7861aef0__0) 
                                            >> 0x20U));
        __Vtemp_h17bc6dc6__0[2U] = vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod;
        __Vtemp_h17bc6dc6__0[3U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                     << 0x1aU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                  << 0x18U));
        __Vtemp_h17bc6dc6__0[4U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                    >> 6U);
        __Vtemp_h17bc6dc6__0[5U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                     << 0x14U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                  << 0x12U));
        __Vtemp_h17bc6dc6__0[6U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                    >> 0xcU);
        bufp->chgWData(oldp+94,(__Vtemp_h17bc6dc6__0),224);
        __Vtemp_hf816dff2__0[0U] = (IData)(vlSelf->__VdfgTmp_h2ac9f9df__0);
        __Vtemp_hf816dff2__0[1U] = (IData)((vlSelf->__VdfgTmp_h2ac9f9df__0 
                                            >> 0x20U));
        __Vtemp_hf816dff2__0[2U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                     << 8U) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                               << 6U));
        __Vtemp_hf816dff2__0[3U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                    >> 0x18U);
        __Vtemp_hf816dff2__0[4U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                     << 2U) | (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
        __Vtemp_hf816dff2__0[5U] = ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                     << 0x1cU) | ((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                  << 0x1aU));
        __Vtemp_hf816dff2__0[6U] = (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                    >> 4U);
        bufp->chgWData(oldp+101,(__Vtemp_hf816dff2__0),224);
        __Vtemp_h81d1b9e4__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                             << 0x3aU) 
                                            | (((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg) 
                                                                   << 0x1cU) 
                                                                  | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)))))));
        __Vtemp_h81d1b9e4__0[1U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                     << 0x1cU) | (IData)(
                                                         ((((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                            << 0x3aU) 
                                                           | (((QData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod)) 
                                                               << 0x1eU) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg) 
                                                                                << 0x1cU) 
                                                                                | (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)))))) 
                                                          >> 0x20U)));
        __Vtemp_h81d1b9e4__0[2U] = (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                     << 0x1aU) | (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod) 
                                                     >> 4U)));
        __Vtemp_h81d1b9e4__0[3U] = ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod) 
                                    >> 6U);
        bufp->chgWData(oldp+108,(__Vtemp_h81d1b9e4__0),112);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+112,(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp),7);
        bufp->chgSData(oldp+113,(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac),12);
        bufp->chgSData(oldp+114,(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o),15);
        bufp->chgSData(oldp+115,(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac),14);
        bufp->chgIData(oldp+116,((0xfffffffU & (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                        >> 0xeU)))),28);
        bufp->chgCData(oldp+117,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0xfU)))),3);
        bufp->chgBit(oldp+118,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+119,(((0U == (7U & (IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                      >> 0xfU)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                        >> 0xfU)))))));
        bufp->chgBit(oldp+120,((1U & ((IData)((0x10000ULL 
                                               == (0x18000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x8000ULL 
                                                 == 
                                                 (0x18000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+121,((1U & ((IData)((0x18000ULL 
                                               == (0x38000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0xfU))) 
                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+122,((6U & ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                 >> 0xeU)) 
                                        << 1U))),3);
        bufp->chgBit(oldp+123,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+124,((0U == (3U & (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0xeU))))));
        bufp->chgBit(oldp+125,((1U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+126,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
        bufp->chgCData(oldp+127,((1U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x29U)))),3);
        bufp->chgBit(oldp+128,((1U & (~ (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+129,((1U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0x29U)))));
        bufp->chgCData(oldp+130,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x11U)))),3);
        bufp->chgBit(oldp+131,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+132,(((0U == (7U & (IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                      >> 0x11U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                        >> 0x11U)))))));
        bufp->chgBit(oldp+133,((1U & ((IData)((0x40000ULL 
                                               == (0x60000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x20000ULL 
                                                 == 
                                                 (0x60000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+134,((1U & ((IData)((0x60000ULL 
                                               == (0xe0000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x11U))) 
                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+135,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x23U)))),3);
        bufp->chgBit(oldp+136,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+137,(((0U == (7U & (IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                      >> 0x23U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                        >> 0x23U)))))));
        bufp->chgBit(oldp+138,((1U & ((IData)((0x1000000000ULL 
                                               == (0x1800000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x800000000ULL 
                                                 == 
                                                 (0x1800000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+139,((1U & ((IData)((0x1800000000ULL 
                                               == (0x3800000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x23U))) 
                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+140,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x25U)))),3);
        bufp->chgBit(oldp+141,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+142,(((0U == (7U & (IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                      >> 0x25U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                        >> 0x25U)))))));
        bufp->chgBit(oldp+143,((1U & ((IData)((0x4000000000ULL 
                                               == (0x6000000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x2000000000ULL 
                                                 == 
                                                 (0x6000000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+144,((1U & ((IData)((0x6000000000ULL 
                                               == (0xe000000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x25U))) 
                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+145,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x27U)))),3);
        bufp->chgBit(oldp+146,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+147,(((0U == (7U & (IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                      >> 0x27U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                        >> 0x27U)))))));
        bufp->chgBit(oldp+148,((1U & ((IData)((0x10000000000ULL 
                                               == (0x18000000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x8000000000ULL 
                                                 == 
                                                 (0x18000000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+149,((1U & ((IData)((0x18000000000ULL 
                                               == (0x38000000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x27U))) 
                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+150,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x13U)))),3);
        bufp->chgBit(oldp+151,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+152,(((0U == (7U & (IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                      >> 0x13U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                        >> 0x13U)))))));
        bufp->chgBit(oldp+153,((1U & ((IData)((0x100000ULL 
                                               == (0x180000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x80000ULL 
                                                 == 
                                                 (0x180000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+154,((1U & ((IData)((0x180000ULL 
                                               == (0x380000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x13U))) 
                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+155,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x15U)))),3);
        bufp->chgBit(oldp+156,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+157,(((0U == (7U & (IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                      >> 0x15U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                        >> 0x15U)))))));
        bufp->chgBit(oldp+158,((1U & ((IData)((0x400000ULL 
                                               == (0x600000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x200000ULL 
                                                 == 
                                                 (0x600000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+159,((1U & ((IData)((0x600000ULL 
                                               == (0xe00000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x15U))) 
                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+160,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x17U)))),3);
        bufp->chgBit(oldp+161,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+162,(((0U == (7U & (IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                      >> 0x17U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                        >> 0x17U)))))));
        bufp->chgBit(oldp+163,((1U & ((IData)((0x1000000ULL 
                                               == (0x1800000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x800000ULL 
                                                 == 
                                                 (0x1800000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+164,((1U & ((IData)((0x1800000ULL 
                                               == (0x3800000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x17U))) 
                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+165,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x19U)))),3);
        bufp->chgBit(oldp+166,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+167,(((0U == (7U & (IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                      >> 0x19U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                        >> 0x19U)))))));
        bufp->chgBit(oldp+168,((1U & ((IData)((0x4000000ULL 
                                               == (0x6000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x2000000ULL 
                                                 == 
                                                 (0x6000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+169,((1U & ((IData)((0x6000000ULL 
                                               == (0xe000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x19U))) 
                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+170,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x1bU)))),3);
        bufp->chgBit(oldp+171,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+172,(((0U == (7U & (IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                      >> 0x1bU)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                        >> 0x1bU)))))));
        bufp->chgBit(oldp+173,((1U & ((IData)((0x10000000ULL 
                                               == (0x18000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x8000000ULL 
                                                 == 
                                                 (0x18000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+174,((1U & ((IData)((0x18000000ULL 
                                               == (0x38000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1bU))) 
                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+175,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x1dU)))),3);
        bufp->chgBit(oldp+176,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+177,(((0U == (7U & (IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                      >> 0x1dU)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                        >> 0x1dU)))))));
        bufp->chgBit(oldp+178,((1U & ((IData)((0x40000000ULL 
                                               == (0x60000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x20000000ULL 
                                                 == 
                                                 (0x60000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+179,((1U & ((IData)((0x60000000ULL 
                                               == (0xe0000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1dU))) 
                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+180,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x1fU)))),3);
        bufp->chgBit(oldp+181,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+182,(((0U == (7U & (IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                      >> 0x1fU)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                        >> 0x1fU)))))));
        bufp->chgBit(oldp+183,((1U & ((IData)((0x100000000ULL 
                                               == (0x180000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x80000000ULL 
                                                 == 
                                                 (0x180000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+184,((1U & ((IData)((0x180000000ULL 
                                               == (0x380000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1fU))) 
                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+185,((7U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x21U)))),3);
        bufp->chgBit(oldp+186,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+187,(((0U == (7U & (IData)(
                                                     (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                      >> 0x21U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                        >> 0x21U)))))));
        bufp->chgBit(oldp+188,((1U & ((IData)((0x400000000ULL 
                                               == (0x600000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x200000000ULL 
                                                 == 
                                                 (0x600000000ULL 
                                                  & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+189,((1U & ((IData)((0x600000000ULL 
                                               == (0xe00000000ULL 
                                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x21U))) 
                                         & (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgIData(oldp+190,((0xfffffffU & VL_DIV_III(28, (IData)(0x4000U), (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Frac)))),28);
        bufp->chgQData(oldp+191,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x1_x_new_full),42);
        bufp->chgQData(oldp+193,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x2_x_new_full),42);
        bufp->chgQData(oldp+195,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full),42);
        bufp->chgCData(oldp+197,((7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                        >> 3U))),3);
        bufp->chgBit(oldp+198,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+199,(((0U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                              >> 3U))) 
                                | (7U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                                >> 3U))))));
        bufp->chgBit(oldp+200,((1U & ((IData)((0x10U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                      | (IData)((8U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))));
        bufp->chgBit(oldp+201,((1U & ((IData)((0x18U 
                                               == (0x38U 
                                                   & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                             >> 3U)) 
                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+202,((6U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                        >> 1U))),3);
        bufp->chgBit(oldp+203,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+204,((0U == (3U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                             >> 2U)))));
        bufp->chgBit(oldp+205,((1U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                      >> 2U))));
        bufp->chgBit(oldp+206,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
        bufp->chgCData(oldp+207,((7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                        >> 5U))),3);
        bufp->chgBit(oldp+208,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+209,(((0U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                              >> 5U))) 
                                | (7U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                                >> 5U))))));
        bufp->chgBit(oldp+210,((1U & ((IData)((0x40U 
                                               == (0x60U 
                                                   & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                      | (IData)((0x20U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))));
        bufp->chgBit(oldp+211,((1U & ((IData)((0x60U 
                                               == (0xe0U 
                                                   & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                             >> 5U)) 
                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+212,((7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                        >> 7U))),3);
        bufp->chgBit(oldp+213,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+214,(((0U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                              >> 7U))) 
                                | (7U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                                >> 7U))))));
        bufp->chgBit(oldp+215,((1U & ((IData)((0x100U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                      | (IData)((0x80U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))));
        bufp->chgBit(oldp+216,((1U & ((IData)((0x180U 
                                               == (0x380U 
                                                   & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                             >> 7U)) 
                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+217,((7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                        >> 9U))),3);
        bufp->chgBit(oldp+218,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+219,(((0U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                              >> 9U))) 
                                | (7U == (7U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                                >> 9U))))));
        bufp->chgBit(oldp+220,((1U & ((IData)((0x400U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                      | (IData)((0x200U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))));
        bufp->chgBit(oldp+221,((1U & ((IData)((0x600U 
                                               == (0xe00U 
                                                   & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                             >> 9U)) 
                                         & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+222,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_4__io_code),3);
        bufp->chgBit(oldp+223,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+224,(((0U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)) 
                                | (7U == (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT____Vcellinp__genProd_4__io_code)))));
        bufp->chgBit(oldp+225,((1U & ((IData)((0x1000U 
                                               == (0x1800U 
                                                   & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o)))) 
                                      | (IData)((0x800U 
                                                 == 
                                                 (0x1800U 
                                                  & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[4U] 
                      | vlSelf->__Vm_traceActivity[9U]) 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgSData(oldp+226,(((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o 
                                              >> 0x11U)) 
                                  | (0U != (0x1ffffU 
                                            & vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o)))),13);
        bufp->chgCData(oldp+227,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+228,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
        bufp->chgIData(oldp+233,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o),30);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgSData(oldp+234,(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac1_align),14);
        bufp->chgSData(oldp+235,(vlSelf->PvuTop__DOT____Vcellout__fracalign_1__io_pir_frac2_align),14);
        bufp->chgBit(oldp+236,(vlSelf->PvuTop__DOT__add__DOT__io_overflow));
        bufp->chgBit(oldp+237,(((IData)(vlSelf->PvuTop__DOT__add__DOT__io_overflow) 
                                & (0U != (0x3fffU & (IData)(vlSelf->PvuTop__DOT__add__DOT__sum))))));
        bufp->chgSData(oldp+238,(vlSelf->PvuTop__DOT__add__DOT__sum),15);
        bufp->chgBit(oldp+239,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater));
        bufp->chgIData(oldp+240,((0xfffffffU & (IData)(
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
                                                           >> 0xeU))))),30);
        bufp->chgIData(oldp+241,((0xfffffffU & (IData)(
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
                                                           >> 0xeU))))),28);
        bufp->chgQData(oldp+242,((0xffffffffffffffULL 
                                  & (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                     ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                        ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                           ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))),56);
        bufp->chgQData(oldp+244,((0xffffffffffffffULL 
                                  & ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                      & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                     | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                        | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                           | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                               & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                              | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                  | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                 & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))))),56);
        bufp->chgQData(oldp+246,((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                  ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                     ^ (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                        ^ vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))),60);
        bufp->chgQData(oldp+248,(((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                   & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                  | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                      & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                     | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                         & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                        | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                            & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                           | ((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                               | vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                              & vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))),60);
        __Vtemp_h0c422b7f__0[0U] = (IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o);
        __Vtemp_h0c422b7f__0[1U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                     << 0x1cU) | (IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                          >> 0x20U)));
        __Vtemp_h0c422b7f__0[2U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                     >> 4U) | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                        >> 0x20U)) 
                                               << 0x1cU));
        __Vtemp_h0c422b7f__0[3U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                     << 0x18U) | ((IData)(
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                           >> 0x20U)) 
                                                  >> 4U));
        __Vtemp_h0c422b7f__0[4U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                     >> 8U) | ((IData)(
                                                       (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                        >> 0x20U)) 
                                               << 0x18U));
        __Vtemp_h0c422b7f__0[5U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                     << 0x14U) | ((IData)(
                                                          (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                           >> 0x20U)) 
                                                  >> 8U));
        __Vtemp_h0c422b7f__0[6U] = (((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                     >> 0xcU) | ((IData)(
                                                         (vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
                                                          >> 0x20U)) 
                                                 << 0x14U));
        __Vtemp_h0c422b7f__0[7U] = ((IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
                                             >> 0x20U)) 
                                    >> 0xcU);
        bufp->chgWData(oldp+250,(__Vtemp_h0c422b7f__0),240);
        bufp->chgQData(oldp+258,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),59);
        bufp->chgQData(oldp+260,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),59);
        __Vtemp_h4933e7c7__0[0U] = (IData)(vlSelf->__VdfgTmp_h4535eaf9__0);
        __Vtemp_h4933e7c7__0[1U] = (((IData)(vlSelf->__VdfgTmp_h2d675acb__0) 
                                     << 0x1bU) | (IData)(
                                                         (vlSelf->__VdfgTmp_h4535eaf9__0 
                                                          >> 0x20U)));
        __Vtemp_h4933e7c7__0[2U] = (((IData)(vlSelf->__VdfgTmp_h2d675acb__0) 
                                     >> 5U) | ((IData)(
                                                       (vlSelf->__VdfgTmp_h2d675acb__0 
                                                        >> 0x20U)) 
                                               << 0x1bU));
        __Vtemp_h4933e7c7__0[3U] = (((IData)(vlSelf->__VdfgTmp_h692db4f3__0) 
                                     << 0x16U) | ((IData)(
                                                          (vlSelf->__VdfgTmp_h2d675acb__0 
                                                           >> 0x20U)) 
                                                  >> 5U));
        __Vtemp_h4933e7c7__0[4U] = (((IData)(vlSelf->__VdfgTmp_h692db4f3__0) 
                                     >> 0xaU) | ((IData)(
                                                         (vlSelf->__VdfgTmp_h692db4f3__0 
                                                          >> 0x20U)) 
                                                 << 0x16U));
        __Vtemp_h4933e7c7__0[5U] = (((IData)(vlSelf->__VdfgTmp_h509c563d__0) 
                                     << 0x11U) | ((IData)(
                                                          (vlSelf->__VdfgTmp_h692db4f3__0 
                                                           >> 0x20U)) 
                                                  >> 0xaU));
        __Vtemp_h4933e7c7__0[6U] = (((IData)(vlSelf->__VdfgTmp_h509c563d__0) 
                                     >> 0xfU) | ((IData)(
                                                         (vlSelf->__VdfgTmp_h509c563d__0 
                                                          >> 0x20U)) 
                                                 << 0x11U));
        __Vtemp_h4933e7c7__0[7U] = ((IData)((vlSelf->__VdfgTmp_h509c563d__0 
                                             >> 0x20U)) 
                                    >> 0xfU);
        bufp->chgWData(oldp+262,(__Vtemp_h4933e7c7__0),236);
        bufp->chgQData(oldp+270,(vlSelf->__VdfgTmp_h4535eaf9__0),58);
        bufp->chgQData(oldp+272,(vlSelf->__VdfgTmp_h2d675acb__0),58);
        bufp->chgQData(oldp+274,(vlSelf->__VdfgTmp_h692db4f3__0),58);
        bufp->chgQData(oldp+276,(vlSelf->__VdfgTmp_h509c563d__0),58);
        bufp->chgQData(oldp+278,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),59);
        bufp->chgQData(oldp+280,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),59);
        __Vtemp_hbca8450e__0[0U] = (IData)(vlSelf->__VdfgTmp_h1cd9f180__0);
        __Vtemp_hbca8450e__0[1U] = (((IData)(vlSelf->__VdfgTmp_hd62918e5__0) 
                                     << 0x1bU) | (IData)(
                                                         (vlSelf->__VdfgTmp_h1cd9f180__0 
                                                          >> 0x20U)));
        __Vtemp_hbca8450e__0[2U] = (((IData)(vlSelf->__VdfgTmp_hd62918e5__0) 
                                     >> 5U) | ((IData)(
                                                       (vlSelf->__VdfgTmp_hd62918e5__0 
                                                        >> 0x20U)) 
                                               << 0x1bU));
        __Vtemp_hbca8450e__0[3U] = (((IData)(vlSelf->__VdfgTmp_h764cf51b__0) 
                                     << 0x16U) | ((IData)(
                                                          (vlSelf->__VdfgTmp_hd62918e5__0 
                                                           >> 0x20U)) 
                                                  >> 5U));
        __Vtemp_hbca8450e__0[4U] = (((IData)(vlSelf->__VdfgTmp_h764cf51b__0) 
                                     >> 0xaU) | ((IData)(
                                                         (vlSelf->__VdfgTmp_h764cf51b__0 
                                                          >> 0x20U)) 
                                                 << 0x16U));
        __Vtemp_hbca8450e__0[5U] = (((IData)(vlSelf->__VdfgTmp_h27cac1ce__0) 
                                     << 0x11U) | ((IData)(
                                                          (vlSelf->__VdfgTmp_h764cf51b__0 
                                                           >> 0x20U)) 
                                                  >> 0xaU));
        __Vtemp_hbca8450e__0[6U] = (((IData)(vlSelf->__VdfgTmp_h27cac1ce__0) 
                                     >> 0xfU) | ((IData)(
                                                         (vlSelf->__VdfgTmp_h27cac1ce__0 
                                                          >> 0x20U)) 
                                                 << 0x11U));
        __Vtemp_hbca8450e__0[7U] = ((IData)((vlSelf->__VdfgTmp_h27cac1ce__0 
                                             >> 0x20U)) 
                                    >> 0xfU);
        bufp->chgWData(oldp+282,(__Vtemp_hbca8450e__0),236);
        bufp->chgQData(oldp+290,(vlSelf->__VdfgTmp_h1cd9f180__0),58);
        bufp->chgQData(oldp+292,(vlSelf->__VdfgTmp_hd62918e5__0),58);
        bufp->chgQData(oldp+294,(vlSelf->__VdfgTmp_h764cf51b__0),58);
        bufp->chgQData(oldp+296,(vlSelf->__VdfgTmp_h27cac1ce__0),58);
        bufp->chgIData(oldp+298,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod),29);
        bufp->chgIData(oldp+299,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod),29);
        bufp->chgIData(oldp+300,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod),29);
        bufp->chgIData(oldp+301,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod),29);
        bufp->chgIData(oldp+302,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod),29);
        bufp->chgIData(oldp+303,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod),29);
        bufp->chgIData(oldp+304,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod),29);
        bufp->chgIData(oldp+305,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod),29);
        bufp->chgIData(oldp+306,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod),29);
        bufp->chgIData(oldp+307,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod),29);
        bufp->chgIData(oldp+308,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod),29);
        bufp->chgIData(oldp+309,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod),29);
        bufp->chgIData(oldp+310,(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod),29);
        bufp->chgCData(oldp+311,(((0x80U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                   ? 0x3fU : (0x7fU 
                                              & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum)))),7);
        bufp->chgIData(oldp+312,(((0x80U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                   ? 0U : (0x3ffffffU 
                                           & ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                               ^ (vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                                  ^ 
                                                  (vlSelf->__VdfgTmp_h76900ab1__0 
                                                   ^ vlSelf->__VdfgTmp_h1ba49810__0))) 
                                              + ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                  & vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                                 | ((vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                                     & vlSelf->__VdfgTmp_h76900ab1__0) 
                                                    | ((vlSelf->__VdfgTmp_h76900ab1__0 
                                                        & vlSelf->__VdfgTmp_h1ba49810__0) 
                                                       | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                           & vlSelf->__VdfgTmp_h76900ab1__0) 
                                                          | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                              | vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                                             & vlSelf->__VdfgTmp_h1ba49810__0))))))))),26);
        bufp->chgIData(oldp+313,((0x3ffffffU & (((0x80U 
                                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                                  ? 0U
                                                  : 
                                                 ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                   ^ 
                                                   (vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                                    ^ 
                                                    (vlSelf->__VdfgTmp_h76900ab1__0 
                                                     ^ vlSelf->__VdfgTmp_h1ba49810__0))) 
                                                  + 
                                                  ((vlSelf->__VdfgTmp_h6b6721ad__0 
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
                                                << 2U))),26);
        bufp->chgIData(oldp+314,(((0x80U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                   ? 0U : (0x3fffffffU 
                                           & ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                               ^ (vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                                  ^ 
                                                  (vlSelf->__VdfgTmp_h76900ab1__0 
                                                   ^ vlSelf->__VdfgTmp_h1ba49810__0))) 
                                              + ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                  & vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                                 | ((vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                                     & vlSelf->__VdfgTmp_h76900ab1__0) 
                                                    | ((vlSelf->__VdfgTmp_h76900ab1__0 
                                                        & vlSelf->__VdfgTmp_h1ba49810__0) 
                                                       | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                           & vlSelf->__VdfgTmp_h76900ab1__0) 
                                                          | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                                              | vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                                             & vlSelf->__VdfgTmp_h1ba49810__0))))))))),30);
        bufp->chgCData(oldp+315,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum),8);
        bufp->chgIData(oldp+316,((vlSelf->__VdfgTmp_h6b6721ad__0 
                                  ^ (vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                     ^ (vlSelf->__VdfgTmp_h76900ab1__0 
                                        ^ vlSelf->__VdfgTmp_h1ba49810__0)))),28);
        bufp->chgIData(oldp+317,(((vlSelf->__VdfgTmp_h6b6721ad__0 
                                   & vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                  | ((vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                      & vlSelf->__VdfgTmp_h76900ab1__0) 
                                     | ((vlSelf->__VdfgTmp_h76900ab1__0 
                                         & vlSelf->__VdfgTmp_h1ba49810__0) 
                                        | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                            & vlSelf->__VdfgTmp_h76900ab1__0) 
                                           | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                               | vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                              & vlSelf->__VdfgTmp_h1ba49810__0)))))),28);
        bufp->chgIData(oldp+318,((vlSelf->__VdfgTmp_h6b6721ad__0 
                                  ^ (vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                     ^ (vlSelf->__VdfgTmp_h76900ab1__0 
                                        ^ vlSelf->__VdfgTmp_h1ba49810__0)))),31);
        bufp->chgIData(oldp+319,(((vlSelf->__VdfgTmp_h6b6721ad__0 
                                   & vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                  | ((vlSelf->__VdfgTmp_h3bbcfaf3__0 
                                      & vlSelf->__VdfgTmp_h76900ab1__0) 
                                     | ((vlSelf->__VdfgTmp_h76900ab1__0 
                                         & vlSelf->__VdfgTmp_h1ba49810__0) 
                                        | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                            & vlSelf->__VdfgTmp_h76900ab1__0) 
                                           | ((vlSelf->__VdfgTmp_h6b6721ad__0 
                                               | vlSelf->__VdfgTmp_h3bbcfaf3__0) 
                                              & vlSelf->__VdfgTmp_h1ba49810__0)))))),31);
        __Vtemp_heafba450__0[0U] = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h3bbcfaf3__0)) 
                                             << 0x1fU) 
                                            | (QData)((IData)(vlSelf->__VdfgTmp_h6b6721ad__0))));
        __Vtemp_heafba450__0[1U] = ((vlSelf->__VdfgTmp_h76900ab1__0 
                                     << 0x1eU) | (IData)(
                                                         ((((QData)((IData)(vlSelf->__VdfgTmp_h3bbcfaf3__0)) 
                                                            << 0x1fU) 
                                                           | (QData)((IData)(vlSelf->__VdfgTmp_h6b6721ad__0))) 
                                                          >> 0x20U)));
        __Vtemp_heafba450__0[2U] = ((vlSelf->__VdfgTmp_h1ba49810__0 
                                     << 0x1dU) | (vlSelf->__VdfgTmp_h76900ab1__0 
                                                  >> 2U));
        __Vtemp_heafba450__0[3U] = (vlSelf->__VdfgTmp_h1ba49810__0 
                                    >> 3U);
        bufp->chgWData(oldp+320,(__Vtemp_heafba450__0),124);
        bufp->chgIData(oldp+324,(vlSelf->__VdfgTmp_h6b6721ad__0),30);
        bufp->chgIData(oldp+325,(vlSelf->__VdfgTmp_h3bbcfaf3__0),30);
        bufp->chgIData(oldp+326,(vlSelf->__VdfgTmp_h76900ab1__0),30);
        bufp->chgIData(oldp+327,(vlSelf->__VdfgTmp_h1ba49810__0),30);
        bufp->chgSData(oldp+328,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod),15);
        bufp->chgSData(oldp+329,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod),15);
        bufp->chgSData(oldp+330,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod),15);
        bufp->chgSData(oldp+331,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod),15);
        bufp->chgSData(oldp+332,(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod),15);
        bufp->chgIData(oldp+333,(vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__shifter__io_operand_i),30);
        bufp->chgIData(oldp+334,(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),30);
        bufp->chgSData(oldp+335,(vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i),14);
        bufp->chgSData(oldp+336,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),14);
        bufp->chgSData(oldp+337,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i),14);
        bufp->chgSData(oldp+338,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),14);
        bufp->chgCData(oldp+339,(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp),7);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgSData(oldp+340,(((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                              >> 0x11U)) 
                                  | (0U != (0x1ffffU 
                                            & vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o)))),13);
        bufp->chgCData(oldp+341,((0x1fU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+342,(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
        bufp->chgIData(oldp+347,(vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o),30);
    }
    bufp->chgBit(oldp+348,(vlSelf->clock));
    bufp->chgBit(oldp+349,(vlSelf->reset));
    bufp->chgSData(oldp+350,(vlSelf->io_posit_i1_0),16);
    bufp->chgSData(oldp+351,(vlSelf->io_posit_i2_0),16);
    bufp->chgCData(oldp+352,(vlSelf->io_op),3);
    bufp->chgSData(oldp+353,(vlSelf->io_posit_o_0),16);
    bufp->chgSData(oldp+354,(vlSelf->io_posit_dot_o),16);
    bufp->chgBit(oldp+355,((1U & ((IData)(vlSelf->io_posit_i1_0) 
                                  >> 0xfU))));
    bufp->chgBit(oldp+356,((1U & ((IData)(vlSelf->io_posit_i2_0) 
                                  >> 0xfU))));
    bufp->chgBit(oldp+357,((1U & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                   | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                   ? ((IData)(vlSelf->io_posit_i1_0) 
                                      >> 0xfU) : ((IData)(vlSelf->io_posit_i2_0) 
                                                  >> 0xfU)))));
    bufp->chgCData(oldp+358,((0x7fU & ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp) 
                                       + (IData)(vlSelf->PvuTop__DOT__add__DOT__io_overflow)))),7);
    bufp->chgSData(oldp+359,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                               ? (IData)(vlSelf->__VdfgTmp_hf89a3cfa__0)
                               : (IData)(vlSelf->__VdfgTmp_h132b72d8__0))),14);
    bufp->chgCData(oldp+360,((0xfU & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes)))),4);
    bufp->chgCData(oldp+361,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+362,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+363,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+364,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgCData(oldp+366,((0xfU & ((IData)(1U) + (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes)))),4);
    bufp->chgCData(oldp+367,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+368,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+369,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+370,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgCData(oldp+372,((0x7fU & ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp) 
                                       - (IData)(vlSelf->PvuTop__DOT____Vcellout__decode2__io_Exp)))),7);
    bufp->chgIData(oldp+373,(((1U & (IData)((vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__reciprocalMod__DOT__x3_x_new_full 
                                             >> 0x29U)))
                               ? ((IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                  << 0xeU) : 0U)),29);
    bufp->chgIData(oldp+374,((0x1fffffffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__div__DOT__intdivider__DOT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
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
                                                  : 0U))))),29);
    bufp->chgIData(oldp+375,(vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i),30);
    bufp->chgIData(oldp+376,(vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp),30);
    bufp->chgSData(oldp+377,((0x7fffU & ((- (IData)((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
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
                                                 : 0U))))),15);
    bufp->chgBit(oldp+378,((1U & (((~ (IData)((0U != (IData)(vlSelf->PvuTop__DOT__decode2__DOT___operand_0_T_6)))) 
                                   & (IData)((0x1800U 
                                              == (0x1800U 
                                                  & (IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o))))) 
                                  | ((~ ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                         >> 0xbU)) 
                                     & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
    bufp->chgBit(oldp+379,((1U & ((1U == (IData)(vlSelf->io_op))
                                   ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                       | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                       ? ((IData)(vlSelf->io_posit_i1_0) 
                                          >> 0xfU) : 
                                      ((IData)(vlSelf->io_posit_i2_0) 
                                       >> 0xfU)) : 
                                  ((2U == (IData)(vlSelf->io_op))
                                    ? (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                        & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                       ^ ((IData)(vlSelf->io_posit_i1_0) 
                                          >> 0xfU))
                                    : ((3U == (IData)(vlSelf->io_op))
                                        ? (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o)
                                        : ((4U == (IData)(vlSelf->io_op)) 
                                           & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))))))));
    bufp->chgCData(oldp+380,(((5U == (IData)(vlSelf->io_op))
                               ? 0U : (IData)(vlSelf->__VdfgTmp_h8f00dd97__0))),7);
    bufp->chgSData(oldp+381,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac),13);
    bufp->chgSData(oldp+382,(((0x1000U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac))
                               ? ((1U & ((1U == (IData)(vlSelf->io_op))
                                          ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                              | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                              ? ((IData)(vlSelf->io_posit_i1_0) 
                                                 >> 0xfU)
                                              : ((IData)(vlSelf->io_posit_i2_0) 
                                                 >> 0xfU))
                                          : ((2U == (IData)(vlSelf->io_op))
                                              ? (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                                  & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                                 ^ 
                                                 ((IData)(vlSelf->io_posit_i1_0) 
                                                  >> 0xfU))
                                              : ((3U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->io_op)) 
                                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___mul_io_pir_sign_o))))))
                                   ? (0x8000U | (0x7fffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T)))))
                                   : (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))
                               : 0U)),16);
    bufp->chgQData(oldp+383,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i),44);
    bufp->chgCData(oldp+385,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount),4);
    bufp->chgQData(oldp+386,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o),44);
    bufp->chgCData(oldp+388,(((5U == (IData)(vlSelf->io_op))
                               ? ((1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                   ? (0x7fU & (IData)(vlSelf->__VdfgTmp_hebc8eb6b__0))
                                   : 0U) : 0U)),7);
    bufp->chgSData(oldp+389,(((5U == (IData)(vlSelf->io_op))
                               ? ((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o 
                                              >> 0x11U)) 
                                  | (0U != (0x1ffffU 
                                            & vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o)))
                               : 0U)),13);
    bufp->chgSData(oldp+390,((((5U == (IData)(vlSelf->io_op)) 
                               & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT___shifter_io_result_o 
                                  >> 0x1dU)) ? (0x7fffU 
                                                & ((IData)(
                                                           (vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o 
                                                            >> 0xfU)) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(
                                                               (vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o 
                                                                >> 0xeU)) 
                                                       & (IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0xbfffULL 
                                                                   & vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o)))))))
                               : 0U)),16);
    bufp->chgQData(oldp+391,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i),44);
    bufp->chgCData(oldp+393,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount),4);
    bufp->chgQData(oldp+394,(vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o),44);
    bufp->chgCData(oldp+396,((0xffU & ((IData)(0x12U) 
                                       + ((1U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                           ? ((0U == 
                                               (0x1fU 
                                                & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                               ? ((0xe0U 
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
                                               : ((0xe0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((- 
                                                                      vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                     >> 4U)))) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (- 
                                                        vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                           : 0U)))),8);
    bufp->chgBit(oldp+397,((1U & (~ vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+398,(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgCData(oldp+399,((0x7fU & ((IData)(2U) 
                                       + ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                           ? ((0U == 
                                               (0xfU 
                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)))
                                               ? ((0x70U 
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
                                               : ((0x70U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((- (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)) 
                                                                     >> 3U)))) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & (- (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)))))
                                           : 0U)))),7);
    bufp->chgSData(oldp+400,(((0x1ffeU & ((IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o) 
                                          >> 1U)) | 
                              (1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o)))),13);
    bufp->chgCData(oldp+401,((0xfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+402,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+403,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+404,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgSData(oldp+406,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o),14);
    bufp->chgIData(oldp+407,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i),30);
    bufp->chgCData(oldp+408,(((1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                               ? (IData)(vlSelf->__VdfgTmp_hebc8eb6b__0)
                               : 0U)),8);
    bufp->chgIData(oldp+409,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT____Vcellinp__lzcMod__in_i),29);
    bufp->chgBit(oldp+410,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+411,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgIData(oldp+412,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),29);
    bufp->chgCData(oldp+413,((0x7fU & ((IData)(2U) 
                                       + ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                           ? ((0U == 
                                               (0xfU 
                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)))
                                               ? ((0x70U 
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
                                               : ((0x70U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((- (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)) 
                                                                     >> 3U)))) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & (- (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes)))))
                                           : 0U)))),7);
    bufp->chgSData(oldp+414,(((0x1ffeU & ((IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o) 
                                          >> 1U)) | 
                              (1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o)))),13);
    bufp->chgCData(oldp+415,((0xfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+416,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+417,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+418,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgSData(oldp+420,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o),14);
    bufp->chgBit(oldp+421,((1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                   & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                  ^ ((IData)(vlSelf->io_posit_i1_0) 
                                     >> 0xfU)))));
    bufp->chgCData(oldp+422,((0x7fU & ((1U & ((~ ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                                                  >> 0xeU)) 
                                              | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)))
                                        ? (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp)
                                        : ((IData)(1U) 
                                           + (IData)(vlSelf->PvuTop__DOT____Vcellout__decode1__io_Exp))))),7);
    bufp->chgSData(oldp+423,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                               ? (IData)(vlSelf->__VdfgTmp_h132b72d8__0)
                               : (IData)(vlSelf->__VdfgTmp_hf89a3cfa__0))),14);
    bufp->chgBit(oldp+424,(((~ (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                            & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                               >> 0xeU))));
    bufp->chgBit(oldp+425,((((~ (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                             & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                                >> 0xeU)) & (0U != 
                                             (0x3fffU 
                                              & (IData)(vlSelf->PvuTop__DOT__add__DOT__sum))))));
}

void VPvuTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_cleanup\n"); );
    // Init
    VPvuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPvuTop___024root*>(voidSelf);
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
}
