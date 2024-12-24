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
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->PvuTop__DOT__decode1__DOT__operand_0),15);
        bufp->chgSData(oldp+1,(vlSelf->PvuTop__DOT__decode1__DOT__operand_1),15);
        bufp->chgSData(oldp+2,(vlSelf->PvuTop__DOT__decode1__DOT__operand_2),15);
        bufp->chgSData(oldp+3,(vlSelf->PvuTop__DOT__decode1__DOT__operand_3),15);
        bufp->chgSData(oldp+4,(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i),15);
        bufp->chgSData(oldp+5,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp),15);
        bufp->chgSData(oldp+6,(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i),15);
        bufp->chgSData(oldp+7,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp),15);
        bufp->chgSData(oldp+8,(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i),15);
        bufp->chgSData(oldp+9,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp),15);
        bufp->chgSData(oldp+10,(vlSelf->PvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i),15);
        bufp->chgSData(oldp+11,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp),15);
        bufp->chgSData(oldp+12,(vlSelf->PvuTop__DOT__decode2__DOT__operand_0),15);
        bufp->chgSData(oldp+13,(vlSelf->PvuTop__DOT__decode2__DOT__operand_1),15);
        bufp->chgSData(oldp+14,(vlSelf->PvuTop__DOT__decode2__DOT__operand_2),15);
        bufp->chgSData(oldp+15,(vlSelf->PvuTop__DOT__decode2__DOT__operand_3),15);
        bufp->chgSData(oldp+16,(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i),15);
        bufp->chgSData(oldp+17,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp),15);
        bufp->chgSData(oldp+18,(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i),15);
        bufp->chgSData(oldp+19,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp),15);
        bufp->chgSData(oldp+20,(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i),15);
        bufp->chgSData(oldp+21,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp),15);
        bufp->chgSData(oldp+22,(vlSelf->PvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i),15);
        bufp->chgSData(oldp+23,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp),15);
        bufp->chgBit(oldp+24,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_0));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_1));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_2));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.io_pir_sign_o_3));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0xbU]) 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgSData(oldp+28,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (6U 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                            >> 1U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+29,(((0x800U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))
                                  ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                  : 0U)),13);
        bufp->chgSData(oldp+30,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (8U 
                                                              == 
                                                              (0x18U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                            >> 3U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+31,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (0x20U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60U 
                                                                == 
                                                                (0xe0U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                            >> 5U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+32,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x180U 
                                                                == 
                                                                (0x380U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                            >> 7U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+33,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x400U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (0x200U 
                                                              == 
                                                              (0x600U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x600U 
                                                                == 
                                                                (0xe00U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                            >> 9U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+34,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (6U 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                            >> 1U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+35,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (8U 
                                                              == 
                                                              (0x18U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                            >> 3U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+36,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (0x20U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60U 
                                                                == 
                                                                (0xe0U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                            >> 5U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+37,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x180U 
                                                                == 
                                                                (0x380U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                            >> 7U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+38,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x400U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                   | (IData)(
                                                             (0x200U 
                                                              == 
                                                              (0x600U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x600U 
                                                                == 
                                                                (0xe00U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                                            >> 9U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgIData(oldp+39,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x4000ULL 
                                                               == 
                                                               (0x6000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x2000ULL 
                                                                 == 
                                                                 (0x6000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x6000ULL 
                                                                == 
                                                                (0xe000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xdU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+40,(((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x23U)))
                                  ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                     << 0xcU) : 0U)),25);
        bufp->chgIData(oldp+41,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x10000ULL 
                                                               == 
                                                               (0x18000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x8000ULL 
                                                                 == 
                                                                 (0x18000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x18000ULL 
                                                                == 
                                                                (0x38000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xfU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+42,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x400000000ULL 
                                                               == 
                                                               (0x600000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x200000000ULL 
                                                                 == 
                                                                 (0x600000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x600000000ULL 
                                                                == 
                                                                (0xe00000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x21U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+43,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x40000ULL 
                                                               == 
                                                               (0x60000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x20000ULL 
                                                                 == 
                                                                 (0x60000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x60000ULL 
                                                                == 
                                                                (0xe0000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x11U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+44,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x100000ULL 
                                                               == 
                                                               (0x180000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x80000ULL 
                                                                 == 
                                                                 (0x180000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x180000ULL 
                                                                == 
                                                                (0x380000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x13U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+45,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x400000ULL 
                                                               == 
                                                               (0x600000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x200000ULL 
                                                                 == 
                                                                 (0x600000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x600000ULL 
                                                                == 
                                                                (0xe00000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x15U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+46,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x1000000ULL 
                                                               == 
                                                               (0x1800000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x800000ULL 
                                                                 == 
                                                                 (0x1800000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x1800000ULL 
                                                                == 
                                                                (0x3800000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x17U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+47,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x4000000ULL 
                                                               == 
                                                               (0x6000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x2000000ULL 
                                                                 == 
                                                                 (0x6000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x6000000ULL 
                                                                == 
                                                                (0xe000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x19U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+48,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x10000000ULL 
                                                               == 
                                                               (0x18000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x8000000ULL 
                                                                 == 
                                                                 (0x18000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x18000000ULL 
                                                                == 
                                                                (0x38000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1bU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+49,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x40000000ULL 
                                                               == 
                                                               (0x60000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x20000000ULL 
                                                                 == 
                                                                 (0x60000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x60000000ULL 
                                                                == 
                                                                (0xe0000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1dU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+50,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x100000000ULL 
                                                               == 
                                                               (0x180000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x80000000ULL 
                                                                 == 
                                                                 (0x180000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x180000000ULL 
                                                                == 
                                                                (0x380000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1fU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0xcU]) 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgSData(oldp+51,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (6U 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                            >> 1U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+52,(((0x800U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))
                                  ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                  : 0U)),13);
        bufp->chgSData(oldp+53,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (8U 
                                                              == 
                                                              (0x18U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                            >> 3U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+54,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (0x20U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60U 
                                                                == 
                                                                (0xe0U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                            >> 5U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+55,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x180U 
                                                                == 
                                                                (0x380U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                            >> 7U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+56,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x400U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (0x200U 
                                                              == 
                                                              (0x600U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x600U 
                                                                == 
                                                                (0xe00U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                            >> 9U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+57,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (6U 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                            >> 1U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+58,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (8U 
                                                              == 
                                                              (0x18U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                            >> 3U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+59,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (0x20U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60U 
                                                                == 
                                                                (0xe0U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                            >> 5U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+60,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x180U 
                                                                == 
                                                                (0x380U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                            >> 7U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+61,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x400U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                   | (IData)(
                                                             (0x200U 
                                                              == 
                                                              (0x600U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x600U 
                                                                == 
                                                                (0xe00U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                                            >> 9U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgIData(oldp+62,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x4000ULL 
                                                               == 
                                                               (0x6000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x2000ULL 
                                                                 == 
                                                                 (0x6000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x6000ULL 
                                                                == 
                                                                (0xe000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xdU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+63,(((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x23U)))
                                  ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                     << 0xcU) : 0U)),25);
        bufp->chgIData(oldp+64,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x10000ULL 
                                                               == 
                                                               (0x18000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x8000ULL 
                                                                 == 
                                                                 (0x18000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x18000ULL 
                                                                == 
                                                                (0x38000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xfU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+65,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x400000000ULL 
                                                               == 
                                                               (0x600000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x200000000ULL 
                                                                 == 
                                                                 (0x600000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x600000000ULL 
                                                                == 
                                                                (0xe00000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x21U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+66,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x40000ULL 
                                                               == 
                                                               (0x60000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x20000ULL 
                                                                 == 
                                                                 (0x60000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x60000ULL 
                                                                == 
                                                                (0xe0000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x11U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+67,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x100000ULL 
                                                               == 
                                                               (0x180000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x80000ULL 
                                                                 == 
                                                                 (0x180000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x180000ULL 
                                                                == 
                                                                (0x380000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x13U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+68,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x400000ULL 
                                                               == 
                                                               (0x600000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x200000ULL 
                                                                 == 
                                                                 (0x600000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x600000ULL 
                                                                == 
                                                                (0xe00000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x15U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+69,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x1000000ULL 
                                                               == 
                                                               (0x1800000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x800000ULL 
                                                                 == 
                                                                 (0x1800000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x1800000ULL 
                                                                == 
                                                                (0x3800000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x17U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+70,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x4000000ULL 
                                                               == 
                                                               (0x6000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x2000000ULL 
                                                                 == 
                                                                 (0x6000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x6000000ULL 
                                                                == 
                                                                (0xe000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x19U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+71,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x10000000ULL 
                                                               == 
                                                               (0x18000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x8000000ULL 
                                                                 == 
                                                                 (0x18000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x18000000ULL 
                                                                == 
                                                                (0x38000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1bU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+72,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x40000000ULL 
                                                               == 
                                                               (0x60000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x20000000ULL 
                                                                 == 
                                                                 (0x60000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x60000000ULL 
                                                                == 
                                                                (0xe0000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1dU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+73,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x100000000ULL 
                                                               == 
                                                               (0x180000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x80000000ULL 
                                                                 == 
                                                                 (0x180000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x180000000ULL 
                                                                == 
                                                                (0x380000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1fU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0xdU]) 
                     | vlSelf->__Vm_traceActivity[0x11U]))) {
        bufp->chgSData(oldp+74,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (6U 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                            >> 1U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+75,(((0x800U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))
                                  ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                  : 0U)),13);
        bufp->chgSData(oldp+76,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (8U 
                                                              == 
                                                              (0x18U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                            >> 3U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+77,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (0x20U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60U 
                                                                == 
                                                                (0xe0U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                            >> 5U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+78,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x180U 
                                                                == 
                                                                (0x380U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                            >> 7U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+79,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x400U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (0x200U 
                                                              == 
                                                              (0x600U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x600U 
                                                                == 
                                                                (0xe00U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                            >> 9U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+80,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (6U 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                            >> 1U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+81,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (8U 
                                                              == 
                                                              (0x18U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                            >> 3U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+82,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (0x20U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60U 
                                                                == 
                                                                (0xe0U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                            >> 5U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+83,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x180U 
                                                                == 
                                                                (0x380U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                            >> 7U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+84,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x400U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                   | (IData)(
                                                             (0x200U 
                                                              == 
                                                              (0x600U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x600U 
                                                                == 
                                                                (0xe00U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                                            >> 9U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgIData(oldp+85,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x4000ULL 
                                                               == 
                                                               (0x6000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x2000ULL 
                                                                 == 
                                                                 (0x6000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x6000ULL 
                                                                == 
                                                                (0xe000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xdU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+86,(((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x23U)))
                                  ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                     << 0xcU) : 0U)),25);
        bufp->chgIData(oldp+87,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x10000ULL 
                                                               == 
                                                               (0x18000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x8000ULL 
                                                                 == 
                                                                 (0x18000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x18000ULL 
                                                                == 
                                                                (0x38000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xfU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+88,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x400000000ULL 
                                                               == 
                                                               (0x600000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x200000000ULL 
                                                                 == 
                                                                 (0x600000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x600000000ULL 
                                                                == 
                                                                (0xe00000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x21U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+89,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x40000ULL 
                                                               == 
                                                               (0x60000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x20000ULL 
                                                                 == 
                                                                 (0x60000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x60000ULL 
                                                                == 
                                                                (0xe0000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x11U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+90,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x100000ULL 
                                                               == 
                                                               (0x180000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x80000ULL 
                                                                 == 
                                                                 (0x180000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x180000ULL 
                                                                == 
                                                                (0x380000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x13U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+91,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x400000ULL 
                                                               == 
                                                               (0x600000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x200000ULL 
                                                                 == 
                                                                 (0x600000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x600000ULL 
                                                                == 
                                                                (0xe00000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x15U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+92,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x1000000ULL 
                                                               == 
                                                               (0x1800000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x800000ULL 
                                                                 == 
                                                                 (0x1800000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x1800000ULL 
                                                                == 
                                                                (0x3800000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x17U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+93,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x4000000ULL 
                                                               == 
                                                               (0x6000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x2000000ULL 
                                                                 == 
                                                                 (0x6000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x6000000ULL 
                                                                == 
                                                                (0xe000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x19U))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+94,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x10000000ULL 
                                                               == 
                                                               (0x18000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x8000000ULL 
                                                                 == 
                                                                 (0x18000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x18000000ULL 
                                                                == 
                                                                (0x38000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1bU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+95,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x40000000ULL 
                                                               == 
                                                               (0x60000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x20000000ULL 
                                                                 == 
                                                                 (0x60000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x60000000ULL 
                                                                == 
                                                                (0xe0000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1dU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
        bufp->chgIData(oldp+96,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                               ^ ((1U 
                                                   & ((IData)(
                                                              (0x100000000ULL 
                                                               == 
                                                               (0x180000000ULL 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | (IData)(
                                                                (0x80000000ULL 
                                                                 == 
                                                                 (0x180000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                   ? 
                                                  ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x180000000ULL 
                                                                == 
                                                                (0x380000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x1fU))) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))))),25);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0xeU]) 
                     | vlSelf->__Vm_traceActivity[0x12U]))) {
        bufp->chgSData(oldp+97,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (6U 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                            >> 1U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+98,(((0x800U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))
                                  ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                  : 0U)),13);
        bufp->chgSData(oldp+99,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                   | (IData)(
                                                             (8U 
                                                              == 
                                                              (0x18U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                                ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                            >> 3U)) 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 1U)
                                                    : 0U))))),13);
        bufp->chgSData(oldp+100,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x40U 
                                                             == 
                                                             (0x60U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                    | (IData)(
                                                              (0x20U 
                                                               == 
                                                               (0x60U 
                                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                                 ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x60U 
                                                              == 
                                                              (0xe0U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 5U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
        bufp->chgSData(oldp+101,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x100U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                    | (IData)(
                                                              (0x80U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                                 ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x180U 
                                                              == 
                                                              (0x380U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 7U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
        bufp->chgSData(oldp+102,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x400U 
                                                             == 
                                                             (0x600U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                    | (IData)(
                                                              (0x200U 
                                                               == 
                                                               (0x600U 
                                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                                 ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x600U 
                                                              == 
                                                              (0xe00U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 9U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
        bufp->chgSData(oldp+103,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                    | (IData)(
                                                              (2U 
                                                               == 
                                                               (6U 
                                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                                 ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (6U 
                                                              == 
                                                              (0xeU 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 1U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
        bufp->chgSData(oldp+104,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                    | (IData)(
                                                              (8U 
                                                               == 
                                                               (0x18U 
                                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                                 ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x18U 
                                                              == 
                                                              (0x38U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 3U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
        bufp->chgSData(oldp+105,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x40U 
                                                             == 
                                                             (0x60U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                    | (IData)(
                                                              (0x20U 
                                                               == 
                                                               (0x60U 
                                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                                 ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x60U 
                                                              == 
                                                              (0xe0U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 5U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
        bufp->chgSData(oldp+106,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x100U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                    | (IData)(
                                                              (0x80U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                                 ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x180U 
                                                              == 
                                                              (0x380U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 7U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
        bufp->chgSData(oldp+107,((0x1fffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x400U 
                                                             == 
                                                             (0x600U 
                                                              & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                    | (IData)(
                                                              (0x200U 
                                                               == 
                                                               (0x600U 
                                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))
                                                 ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x600U 
                                                              == 
                                                              (0xe00U 
                                                               & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                                     | ((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                                          >> 9U)) 
                                                        & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 1U)
                                                  : 0U))))),13);
        bufp->chgIData(oldp+108,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x4000ULL 
                                                                == 
                                                                (0x6000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | (IData)(
                                                                 (0x2000ULL 
                                                                  == 
                                                                  (0x6000ULL 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 0xcU)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0x6000ULL 
                                                                 == 
                                                                 (0xe000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                        | ((~ (IData)(
                                                                      (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                       >> 0xdU))) 
                                                           & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                     ? 
                                                    ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                     << 0xdU)
                                                     : 0U))))),25);
        bufp->chgIData(oldp+109,(((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                 >> 0x23U)))
                                   ? ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                      << 0xcU) : 0U)),25);
        bufp->chgIData(oldp+110,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x10000ULL 
                                                                == 
                                                                (0x18000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | (IData)(
                                                                 (0x8000ULL 
                                                                  == 
                                                                  (0x18000ULL 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 0xcU)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0x18000ULL 
                                                                 == 
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                        | ((~ (IData)(
                                                                      (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                       >> 0xfU))) 
                                                           & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                     ? 
                                                    ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                     << 0xdU)
                                                     : 0U))))),25);
        bufp->chgIData(oldp+111,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x400000000ULL 
                                                                == 
                                                                (0x600000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | (IData)(
                                                                 (0x200000000ULL 
                                                                  == 
                                                                  (0x600000000ULL 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 0xcU)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0x600000000ULL 
                                                                 == 
                                                                 (0xe00000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                        | ((~ (IData)(
                                                                      (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                       >> 0x21U))) 
                                                           & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                     ? 
                                                    ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                     << 0xdU)
                                                     : 0U))))),25);
        bufp->chgIData(oldp+112,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x40000ULL 
                                                                == 
                                                                (0x60000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | (IData)(
                                                                 (0x20000ULL 
                                                                  == 
                                                                  (0x60000ULL 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 0xcU)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0x60000ULL 
                                                                 == 
                                                                 (0xe0000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                        | ((~ (IData)(
                                                                      (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                       >> 0x11U))) 
                                                           & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                     ? 
                                                    ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                     << 0xdU)
                                                     : 0U))))),25);
        bufp->chgIData(oldp+113,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x100000ULL 
                                                                == 
                                                                (0x180000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | (IData)(
                                                                 (0x80000ULL 
                                                                  == 
                                                                  (0x180000ULL 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 0xcU)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0x180000ULL 
                                                                 == 
                                                                 (0x380000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                        | ((~ (IData)(
                                                                      (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                       >> 0x13U))) 
                                                           & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                     ? 
                                                    ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                     << 0xdU)
                                                     : 0U))))),25);
        bufp->chgIData(oldp+114,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x400000ULL 
                                                                == 
                                                                (0x600000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | (IData)(
                                                                 (0x200000ULL 
                                                                  == 
                                                                  (0x600000ULL 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 0xcU)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0x600000ULL 
                                                                 == 
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                        | ((~ (IData)(
                                                                      (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                       >> 0x15U))) 
                                                           & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                     ? 
                                                    ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                     << 0xdU)
                                                     : 0U))))),25);
        bufp->chgIData(oldp+115,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x1000000ULL 
                                                                == 
                                                                (0x1800000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | (IData)(
                                                                 (0x800000ULL 
                                                                  == 
                                                                  (0x1800000ULL 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 0xcU)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0x1800000ULL 
                                                                 == 
                                                                 (0x3800000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                        | ((~ (IData)(
                                                                      (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                       >> 0x17U))) 
                                                           & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                     ? 
                                                    ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                     << 0xdU)
                                                     : 0U))))),25);
        bufp->chgIData(oldp+116,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x4000000ULL 
                                                                == 
                                                                (0x6000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | (IData)(
                                                                 (0x2000000ULL 
                                                                  == 
                                                                  (0x6000000ULL 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 0xcU)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0x6000000ULL 
                                                                 == 
                                                                 (0xe000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                        | ((~ (IData)(
                                                                      (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                       >> 0x19U))) 
                                                           & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                     ? 
                                                    ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                     << 0xdU)
                                                     : 0U))))),25);
        bufp->chgIData(oldp+117,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x10000000ULL 
                                                                == 
                                                                (0x18000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | (IData)(
                                                                 (0x8000000ULL 
                                                                  == 
                                                                  (0x18000000ULL 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 0xcU)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0x18000000ULL 
                                                                 == 
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                        | ((~ (IData)(
                                                                      (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                       >> 0x1bU))) 
                                                           & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                     ? 
                                                    ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                     << 0xdU)
                                                     : 0U))))),25);
        bufp->chgIData(oldp+118,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x40000000ULL 
                                                                == 
                                                                (0x60000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | (IData)(
                                                                 (0x20000000ULL 
                                                                  == 
                                                                  (0x60000000ULL 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 0xcU)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0x60000000ULL 
                                                                 == 
                                                                 (0xe0000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                        | ((~ (IData)(
                                                                      (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                       >> 0x1dU))) 
                                                           & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                     ? 
                                                    ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                     << 0xdU)
                                                     : 0U))))),25);
        bufp->chgIData(oldp+119,((0x1ffffffU & ((- (IData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                                ^ (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x100000000ULL 
                                                                == 
                                                                (0x180000000ULL 
                                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | (IData)(
                                                                 (0x80000000ULL 
                                                                  == 
                                                                  (0x180000000ULL 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                    ? 
                                                   ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 0xcU)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0x180000000ULL 
                                                                 == 
                                                                 (0x380000000ULL 
                                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                        | ((~ (IData)(
                                                                      (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                       >> 0x1fU))) 
                                                           & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                     ? 
                                                    ((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                                                     << 0xdU)
                                                     : 0U))))),25);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgSData(oldp+120,(vlSelf->PvuTop__DOT___decode2_io_Frac_0),12);
        bufp->chgSData(oldp+121,(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o),15);
        bufp->chgCData(oldp+122,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                        >> 1U))),3);
        bufp->chgBit(oldp+123,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+124,((1U & ((IData)((4U == 
                                               (6U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                      | (IData)((2U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))));
        bufp->chgBit(oldp+125,((1U & ((IData)((6U == 
                                               (0xeU 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                             >> 1U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+126,((6U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                        << 1U))),3);
        bufp->chgBit(oldp+127,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+128,((1U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
        bufp->chgCData(oldp+130,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                        >> 0xbU))),3);
        bufp->chgBit(oldp+131,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                      >> 0xbU))));
        bufp->chgCData(oldp+132,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                        >> 3U))),3);
        bufp->chgBit(oldp+133,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+134,((1U & ((IData)((0x10U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                      | (IData)((8U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))));
        bufp->chgBit(oldp+135,((1U & ((IData)((0x18U 
                                               == (0x38U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                             >> 3U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+136,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                        >> 5U))),3);
        bufp->chgBit(oldp+137,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+138,((1U & ((IData)((0x40U 
                                               == (0x60U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                      | (IData)((0x20U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))));
        bufp->chgBit(oldp+139,((1U & ((IData)((0x60U 
                                               == (0xe0U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                             >> 5U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+140,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                        >> 7U))),3);
        bufp->chgBit(oldp+141,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+142,((1U & ((IData)((0x100U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                      | (IData)((0x80U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))));
        bufp->chgBit(oldp+143,((1U & ((IData)((0x180U 
                                               == (0x380U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                             >> 7U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+144,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                        >> 9U))),3);
        bufp->chgBit(oldp+145,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+146,((1U & ((IData)((0x400U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                      | (IData)((0x200U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0))))))));
        bufp->chgBit(oldp+147,((1U & ((IData)((0x600U 
                                               == (0xe00U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                             >> 9U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+149,((1U & ((IData)((6U == 
                                               (0xeU 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                             >> 1U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+153,((1U & ((IData)((0x18U 
                                               == (0x38U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                             >> 3U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+155,((1U & ((IData)((0x60U 
                                               == (0xe0U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                             >> 5U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+157,((1U & ((IData)((0x180U 
                                               == (0x380U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                             >> 7U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+159,((1U & ((IData)((0x600U 
                                               == (0xe00U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0) 
                                             >> 9U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgIData(oldp+160,((0xffffffU & (IData)(
                                                      (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                       >> 0xcU)))),24);
        bufp->chgCData(oldp+161,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0xdU)))),3);
        bufp->chgBit(oldp+162,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+163,((1U & ((IData)((0x4000ULL 
                                               == (0x6000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x2000ULL 
                                                 == 
                                                 (0x6000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+164,((1U & ((IData)((0x6000ULL 
                                               == (0xe000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0xdU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+165,((6U & ((IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                 >> 0xcU)) 
                                        << 1U))),3);
        bufp->chgBit(oldp+166,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+167,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
        bufp->chgCData(oldp+169,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x23U)))),3);
        bufp->chgBit(oldp+170,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0x23U)))));
        bufp->chgCData(oldp+171,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0xfU)))),3);
        bufp->chgBit(oldp+172,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+173,((1U & ((IData)((0x10000ULL 
                                               == (0x18000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x8000ULL 
                                                 == 
                                                 (0x18000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+174,((1U & ((IData)((0x18000ULL 
                                               == (0x38000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0xfU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+175,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x21U)))),3);
        bufp->chgBit(oldp+176,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+177,((1U & ((IData)((0x400000000ULL 
                                               == (0x600000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x200000000ULL 
                                                 == 
                                                 (0x600000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+178,((1U & ((IData)((0x600000000ULL 
                                               == (0xe00000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x21U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+179,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x11U)))),3);
        bufp->chgBit(oldp+180,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+181,((1U & ((IData)((0x40000ULL 
                                               == (0x60000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x20000ULL 
                                                 == 
                                                 (0x60000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+182,((1U & ((IData)((0x60000ULL 
                                               == (0xe0000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x11U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+183,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x13U)))),3);
        bufp->chgBit(oldp+184,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+185,((1U & ((IData)((0x100000ULL 
                                               == (0x180000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x80000ULL 
                                                 == 
                                                 (0x180000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+186,((1U & ((IData)((0x180000ULL 
                                               == (0x380000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x13U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+187,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x15U)))),3);
        bufp->chgBit(oldp+188,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+189,((1U & ((IData)((0x400000ULL 
                                               == (0x600000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x200000ULL 
                                                 == 
                                                 (0x600000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+190,((1U & ((IData)((0x600000ULL 
                                               == (0xe00000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x15U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+191,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x17U)))),3);
        bufp->chgBit(oldp+192,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+193,((1U & ((IData)((0x1000000ULL 
                                               == (0x1800000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x800000ULL 
                                                 == 
                                                 (0x1800000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+194,((1U & ((IData)((0x1800000ULL 
                                               == (0x3800000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x17U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+195,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x19U)))),3);
        bufp->chgBit(oldp+196,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+197,((1U & ((IData)((0x4000000ULL 
                                               == (0x6000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x2000000ULL 
                                                 == 
                                                 (0x6000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+198,((1U & ((IData)((0x6000000ULL 
                                               == (0xe000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x19U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+199,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x1bU)))),3);
        bufp->chgBit(oldp+200,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+201,((1U & ((IData)((0x10000000ULL 
                                               == (0x18000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x8000000ULL 
                                                 == 
                                                 (0x18000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+202,((1U & ((IData)((0x18000000ULL 
                                               == (0x38000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1bU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+203,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x1dU)))),3);
        bufp->chgBit(oldp+204,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+205,((1U & ((IData)((0x40000000ULL 
                                               == (0x60000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x20000000ULL 
                                                 == 
                                                 (0x60000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+206,((1U & ((IData)((0x60000000ULL 
                                               == (0xe0000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1dU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+207,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x1fU)))),3);
        bufp->chgBit(oldp+208,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+209,((1U & ((IData)((0x100000000ULL 
                                               == (0x180000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x80000000ULL 
                                                 == 
                                                 (0x180000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+210,((1U & ((IData)((0x180000000ULL 
                                               == (0x380000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1fU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgIData(oldp+211,((0xffffffU & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_0)))),24);
        bufp->chgQData(oldp+212,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x1_x_new_full),36);
        bufp->chgQData(oldp+214,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x2_x_new_full),36);
        bufp->chgQData(oldp+216,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__reciprocalMod__DOT__x3_x_new_full),36);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgSData(oldp+218,(vlSelf->PvuTop__DOT___decode2_io_Frac_1),12);
        bufp->chgSData(oldp+219,(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o),15);
        bufp->chgCData(oldp+220,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                        >> 1U))),3);
        bufp->chgBit(oldp+221,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+222,((1U & ((IData)((4U == 
                                               (6U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                      | (IData)((2U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))));
        bufp->chgBit(oldp+223,((1U & ((IData)((6U == 
                                               (0xeU 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                             >> 1U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+224,((6U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                        << 1U))),3);
        bufp->chgBit(oldp+225,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+226,((1U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
        bufp->chgCData(oldp+228,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                        >> 0xbU))),3);
        bufp->chgBit(oldp+229,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                      >> 0xbU))));
        bufp->chgCData(oldp+230,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                        >> 3U))),3);
        bufp->chgBit(oldp+231,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+232,((1U & ((IData)((0x10U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                      | (IData)((8U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))));
        bufp->chgBit(oldp+233,((1U & ((IData)((0x18U 
                                               == (0x38U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                             >> 3U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+234,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                        >> 5U))),3);
        bufp->chgBit(oldp+235,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+236,((1U & ((IData)((0x40U 
                                               == (0x60U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                      | (IData)((0x20U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))));
        bufp->chgBit(oldp+237,((1U & ((IData)((0x60U 
                                               == (0xe0U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                             >> 5U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+238,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                        >> 7U))),3);
        bufp->chgBit(oldp+239,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+240,((1U & ((IData)((0x100U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                      | (IData)((0x80U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))));
        bufp->chgBit(oldp+241,((1U & ((IData)((0x180U 
                                               == (0x380U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                             >> 7U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+242,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                        >> 9U))),3);
        bufp->chgBit(oldp+243,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+244,((1U & ((IData)((0x400U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                      | (IData)((0x200U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1))))))));
        bufp->chgBit(oldp+245,((1U & ((IData)((0x600U 
                                               == (0xe00U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                             >> 9U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+246,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+247,((1U & ((IData)((6U == 
                                               (0xeU 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                             >> 1U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+249,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
        bufp->chgBit(oldp+250,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+251,((1U & ((IData)((0x18U 
                                               == (0x38U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                             >> 3U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+252,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+253,((1U & ((IData)((0x60U 
                                               == (0xe0U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                             >> 5U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+254,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+255,((1U & ((IData)((0x180U 
                                               == (0x380U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                             >> 7U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+257,((1U & ((IData)((0x600U 
                                               == (0xe00U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1) 
                                             >> 9U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_1__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgIData(oldp+258,((0xffffffU & (IData)(
                                                      (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                       >> 0xcU)))),24);
        bufp->chgCData(oldp+259,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0xdU)))),3);
        bufp->chgBit(oldp+260,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+261,((1U & ((IData)((0x4000ULL 
                                               == (0x6000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x2000ULL 
                                                 == 
                                                 (0x6000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+262,((1U & ((IData)((0x6000ULL 
                                               == (0xe000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0xdU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+263,((6U & ((IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                 >> 0xcU)) 
                                        << 1U))),3);
        bufp->chgBit(oldp+264,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+265,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+266,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
        bufp->chgCData(oldp+267,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x23U)))),3);
        bufp->chgBit(oldp+268,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0x23U)))));
        bufp->chgCData(oldp+269,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0xfU)))),3);
        bufp->chgBit(oldp+270,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+271,((1U & ((IData)((0x10000ULL 
                                               == (0x18000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x8000ULL 
                                                 == 
                                                 (0x18000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+272,((1U & ((IData)((0x18000ULL 
                                               == (0x38000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0xfU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+273,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x21U)))),3);
        bufp->chgBit(oldp+274,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+275,((1U & ((IData)((0x400000000ULL 
                                               == (0x600000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x200000000ULL 
                                                 == 
                                                 (0x600000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+276,((1U & ((IData)((0x600000000ULL 
                                               == (0xe00000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x21U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+277,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x11U)))),3);
        bufp->chgBit(oldp+278,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+279,((1U & ((IData)((0x40000ULL 
                                               == (0x60000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x20000ULL 
                                                 == 
                                                 (0x60000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+280,((1U & ((IData)((0x60000ULL 
                                               == (0xe0000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x11U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+281,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x13U)))),3);
        bufp->chgBit(oldp+282,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+283,((1U & ((IData)((0x100000ULL 
                                               == (0x180000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x80000ULL 
                                                 == 
                                                 (0x180000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+284,((1U & ((IData)((0x180000ULL 
                                               == (0x380000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x13U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+285,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x15U)))),3);
        bufp->chgBit(oldp+286,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+287,((1U & ((IData)((0x400000ULL 
                                               == (0x600000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x200000ULL 
                                                 == 
                                                 (0x600000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+288,((1U & ((IData)((0x600000ULL 
                                               == (0xe00000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x15U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+289,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x17U)))),3);
        bufp->chgBit(oldp+290,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+291,((1U & ((IData)((0x1000000ULL 
                                               == (0x1800000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x800000ULL 
                                                 == 
                                                 (0x1800000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+292,((1U & ((IData)((0x1800000ULL 
                                               == (0x3800000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x17U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+293,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x19U)))),3);
        bufp->chgBit(oldp+294,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+295,((1U & ((IData)((0x4000000ULL 
                                               == (0x6000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x2000000ULL 
                                                 == 
                                                 (0x6000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+296,((1U & ((IData)((0x6000000ULL 
                                               == (0xe000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x19U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+297,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x1bU)))),3);
        bufp->chgBit(oldp+298,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+299,((1U & ((IData)((0x10000000ULL 
                                               == (0x18000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x8000000ULL 
                                                 == 
                                                 (0x18000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+300,((1U & ((IData)((0x18000000ULL 
                                               == (0x38000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1bU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+301,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x1dU)))),3);
        bufp->chgBit(oldp+302,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+303,((1U & ((IData)((0x40000000ULL 
                                               == (0x60000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x20000000ULL 
                                                 == 
                                                 (0x60000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+304,((1U & ((IData)((0x60000000ULL 
                                               == (0xe0000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1dU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+305,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x1fU)))),3);
        bufp->chgBit(oldp+306,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+307,((1U & ((IData)((0x100000000ULL 
                                               == (0x180000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x80000000ULL 
                                                 == 
                                                 (0x180000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+308,((1U & ((IData)((0x180000000ULL 
                                               == (0x380000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1fU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgIData(oldp+309,((0xffffffU & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_1)))),24);
        bufp->chgQData(oldp+310,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x1_x_new_full),36);
        bufp->chgQData(oldp+312,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x2_x_new_full),36);
        bufp->chgQData(oldp+314,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__reciprocalMod__DOT__x3_x_new_full),36);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x11U]))) {
        bufp->chgSData(oldp+316,(vlSelf->PvuTop__DOT___decode2_io_Frac_2),12);
        bufp->chgSData(oldp+317,(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o),15);
        bufp->chgCData(oldp+318,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                        >> 1U))),3);
        bufp->chgBit(oldp+319,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+320,((1U & ((IData)((4U == 
                                               (6U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                      | (IData)((2U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))));
        bufp->chgBit(oldp+321,((1U & ((IData)((6U == 
                                               (0xeU 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                             >> 1U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+322,((6U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                        << 1U))),3);
        bufp->chgBit(oldp+323,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+324,((1U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))));
        bufp->chgBit(oldp+325,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
        bufp->chgCData(oldp+326,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                        >> 0xbU))),3);
        bufp->chgBit(oldp+327,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                      >> 0xbU))));
        bufp->chgCData(oldp+328,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                        >> 3U))),3);
        bufp->chgBit(oldp+329,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+330,((1U & ((IData)((0x10U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                      | (IData)((8U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))));
        bufp->chgBit(oldp+331,((1U & ((IData)((0x18U 
                                               == (0x38U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                             >> 3U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+332,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                        >> 5U))),3);
        bufp->chgBit(oldp+333,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+334,((1U & ((IData)((0x40U 
                                               == (0x60U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                      | (IData)((0x20U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))));
        bufp->chgBit(oldp+335,((1U & ((IData)((0x60U 
                                               == (0xe0U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                             >> 5U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+336,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                        >> 7U))),3);
        bufp->chgBit(oldp+337,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+338,((1U & ((IData)((0x100U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                      | (IData)((0x80U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))));
        bufp->chgBit(oldp+339,((1U & ((IData)((0x180U 
                                               == (0x380U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                             >> 7U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+340,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                        >> 9U))),3);
        bufp->chgBit(oldp+341,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+342,((1U & ((IData)((0x400U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                      | (IData)((0x200U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2))))))));
        bufp->chgBit(oldp+343,((1U & ((IData)((0x600U 
                                               == (0xe00U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                             >> 9U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+344,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+345,((1U & ((IData)((6U == 
                                               (0xeU 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                             >> 1U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+346,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+347,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+349,((1U & ((IData)((0x18U 
                                               == (0x38U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                             >> 3U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+351,((1U & ((IData)((0x60U 
                                               == (0xe0U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                             >> 5U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+352,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+353,((1U & ((IData)((0x180U 
                                               == (0x380U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                             >> 7U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+354,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+355,((1U & ((IData)((0x600U 
                                               == (0xe00U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2) 
                                             >> 9U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_2__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgIData(oldp+356,((0xffffffU & (IData)(
                                                      (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                       >> 0xcU)))),24);
        bufp->chgCData(oldp+357,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0xdU)))),3);
        bufp->chgBit(oldp+358,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+359,((1U & ((IData)((0x4000ULL 
                                               == (0x6000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x2000ULL 
                                                 == 
                                                 (0x6000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+360,((1U & ((IData)((0x6000ULL 
                                               == (0xe000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0xdU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+361,((6U & ((IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                 >> 0xcU)) 
                                        << 1U))),3);
        bufp->chgBit(oldp+362,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+363,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+364,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
        bufp->chgCData(oldp+365,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x23U)))),3);
        bufp->chgBit(oldp+366,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0x23U)))));
        bufp->chgCData(oldp+367,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0xfU)))),3);
        bufp->chgBit(oldp+368,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+369,((1U & ((IData)((0x10000ULL 
                                               == (0x18000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x8000ULL 
                                                 == 
                                                 (0x18000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+370,((1U & ((IData)((0x18000ULL 
                                               == (0x38000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0xfU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+371,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x21U)))),3);
        bufp->chgBit(oldp+372,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+373,((1U & ((IData)((0x400000000ULL 
                                               == (0x600000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x200000000ULL 
                                                 == 
                                                 (0x600000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+374,((1U & ((IData)((0x600000000ULL 
                                               == (0xe00000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x21U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+375,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x11U)))),3);
        bufp->chgBit(oldp+376,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+377,((1U & ((IData)((0x40000ULL 
                                               == (0x60000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x20000ULL 
                                                 == 
                                                 (0x60000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+378,((1U & ((IData)((0x60000ULL 
                                               == (0xe0000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x11U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+379,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x13U)))),3);
        bufp->chgBit(oldp+380,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+381,((1U & ((IData)((0x100000ULL 
                                               == (0x180000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x80000ULL 
                                                 == 
                                                 (0x180000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+382,((1U & ((IData)((0x180000ULL 
                                               == (0x380000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x13U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+383,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x15U)))),3);
        bufp->chgBit(oldp+384,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+385,((1U & ((IData)((0x400000ULL 
                                               == (0x600000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x200000ULL 
                                                 == 
                                                 (0x600000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+386,((1U & ((IData)((0x600000ULL 
                                               == (0xe00000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x15U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+387,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x17U)))),3);
        bufp->chgBit(oldp+388,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+389,((1U & ((IData)((0x1000000ULL 
                                               == (0x1800000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x800000ULL 
                                                 == 
                                                 (0x1800000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+390,((1U & ((IData)((0x1800000ULL 
                                               == (0x3800000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x17U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+391,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x19U)))),3);
        bufp->chgBit(oldp+392,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+393,((1U & ((IData)((0x4000000ULL 
                                               == (0x6000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x2000000ULL 
                                                 == 
                                                 (0x6000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+394,((1U & ((IData)((0x6000000ULL 
                                               == (0xe000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x19U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+395,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x1bU)))),3);
        bufp->chgBit(oldp+396,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+397,((1U & ((IData)((0x10000000ULL 
                                               == (0x18000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x8000000ULL 
                                                 == 
                                                 (0x18000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+398,((1U & ((IData)((0x18000000ULL 
                                               == (0x38000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1bU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+399,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x1dU)))),3);
        bufp->chgBit(oldp+400,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+401,((1U & ((IData)((0x40000000ULL 
                                               == (0x60000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x20000000ULL 
                                                 == 
                                                 (0x60000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+402,((1U & ((IData)((0x60000000ULL 
                                               == (0xe0000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1dU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+403,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x1fU)))),3);
        bufp->chgBit(oldp+404,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+405,((1U & ((IData)((0x100000000ULL 
                                               == (0x180000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x80000000ULL 
                                                 == 
                                                 (0x180000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+406,((1U & ((IData)((0x180000000ULL 
                                               == (0x380000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1fU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgIData(oldp+407,((0xffffffU & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_2)))),24);
        bufp->chgQData(oldp+408,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x1_x_new_full),36);
        bufp->chgQData(oldp+410,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x2_x_new_full),36);
        bufp->chgQData(oldp+412,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__reciprocalMod__DOT__x3_x_new_full),36);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x12U]))) {
        bufp->chgSData(oldp+414,(vlSelf->PvuTop__DOT___decode2_io_Frac_3),12);
        bufp->chgSData(oldp+415,(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o),15);
        bufp->chgCData(oldp+416,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                        >> 1U))),3);
        bufp->chgBit(oldp+417,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+418,((1U & ((IData)((4U == 
                                               (6U 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                      | (IData)((2U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))));
        bufp->chgBit(oldp+419,((1U & ((IData)((6U == 
                                               (0xeU 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                             >> 1U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+420,((6U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                        << 1U))),3);
        bufp->chgBit(oldp+421,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+422,((1U & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))));
        bufp->chgBit(oldp+423,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
        bufp->chgCData(oldp+424,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                        >> 0xbU))),3);
        bufp->chgBit(oldp+425,((1U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                      >> 0xbU))));
        bufp->chgCData(oldp+426,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                        >> 3U))),3);
        bufp->chgBit(oldp+427,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+428,((1U & ((IData)((0x10U 
                                               == (0x18U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                      | (IData)((8U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))));
        bufp->chgBit(oldp+429,((1U & ((IData)((0x18U 
                                               == (0x38U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                             >> 3U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+430,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                        >> 5U))),3);
        bufp->chgBit(oldp+431,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+432,((1U & ((IData)((0x40U 
                                               == (0x60U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                      | (IData)((0x20U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))));
        bufp->chgBit(oldp+433,((1U & ((IData)((0x60U 
                                               == (0xe0U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                             >> 5U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+434,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                        >> 7U))),3);
        bufp->chgBit(oldp+435,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+436,((1U & ((IData)((0x100U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                      | (IData)((0x80U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))));
        bufp->chgBit(oldp+437,((1U & ((IData)((0x180U 
                                               == (0x380U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                             >> 7U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+438,((7U & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                        >> 9U))),3);
        bufp->chgBit(oldp+439,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+440,((1U & ((IData)((0x400U 
                                               == (0x600U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                      | (IData)((0x200U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3))))))));
        bufp->chgBit(oldp+441,((1U & ((IData)((0x600U 
                                               == (0xe00U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                             >> 9U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+442,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+443,((1U & ((IData)((6U == 
                                               (0xeU 
                                                & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                             >> 1U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+444,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+445,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
        bufp->chgBit(oldp+446,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+447,((1U & ((IData)((0x18U 
                                               == (0x38U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                             >> 3U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+448,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+449,((1U & ((IData)((0x60U 
                                               == (0xe0U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                             >> 5U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+450,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+451,((1U & ((IData)((0x180U 
                                               == (0x380U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                             >> 7U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgBit(oldp+452,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+453,((1U & ((IData)((0x600U 
                                               == (0xe00U 
                                                   & (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))) 
                                      | ((~ ((IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3) 
                                             >> 9U)) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.radix4BoothMultiplier_3__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgIData(oldp+454,((0xffffffU & (IData)(
                                                      (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                       >> 0xcU)))),24);
        bufp->chgCData(oldp+455,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0xdU)))),3);
        bufp->chgBit(oldp+456,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+457,((1U & ((IData)((0x4000ULL 
                                               == (0x6000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x2000ULL 
                                                 == 
                                                 (0x6000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+458,((1U & ((IData)((0x6000ULL 
                                               == (0xe000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0xdU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+459,((6U & ((IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                 >> 0xcU)) 
                                        << 1U))),3);
        bufp->chgBit(oldp+460,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+461,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+462,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two));
        bufp->chgCData(oldp+463,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x23U)))),3);
        bufp->chgBit(oldp+464,((1U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                              >> 0x23U)))));
        bufp->chgCData(oldp+465,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0xfU)))),3);
        bufp->chgBit(oldp+466,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+467,((1U & ((IData)((0x10000ULL 
                                               == (0x18000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x8000ULL 
                                                 == 
                                                 (0x18000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+468,((1U & ((IData)((0x18000ULL 
                                               == (0x38000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0xfU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+469,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x21U)))),3);
        bufp->chgBit(oldp+470,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+471,((1U & ((IData)((0x400000000ULL 
                                               == (0x600000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x200000000ULL 
                                                 == 
                                                 (0x600000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+472,((1U & ((IData)((0x600000000ULL 
                                               == (0xe00000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x21U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+473,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x11U)))),3);
        bufp->chgBit(oldp+474,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+475,((1U & ((IData)((0x40000ULL 
                                               == (0x60000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x20000ULL 
                                                 == 
                                                 (0x60000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+476,((1U & ((IData)((0x60000ULL 
                                               == (0xe0000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x11U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+477,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x13U)))),3);
        bufp->chgBit(oldp+478,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+479,((1U & ((IData)((0x100000ULL 
                                               == (0x180000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x80000ULL 
                                                 == 
                                                 (0x180000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+480,((1U & ((IData)((0x180000ULL 
                                               == (0x380000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x13U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+481,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x15U)))),3);
        bufp->chgBit(oldp+482,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+483,((1U & ((IData)((0x400000ULL 
                                               == (0x600000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x200000ULL 
                                                 == 
                                                 (0x600000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+484,((1U & ((IData)((0x600000ULL 
                                               == (0xe00000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x15U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+485,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x17U)))),3);
        bufp->chgBit(oldp+486,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+487,((1U & ((IData)((0x1000000ULL 
                                               == (0x1800000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x800000ULL 
                                                 == 
                                                 (0x1800000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+488,((1U & ((IData)((0x1800000ULL 
                                               == (0x3800000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x17U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+489,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x19U)))),3);
        bufp->chgBit(oldp+490,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+491,((1U & ((IData)((0x4000000ULL 
                                               == (0x6000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x2000000ULL 
                                                 == 
                                                 (0x6000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+492,((1U & ((IData)((0x6000000ULL 
                                               == (0xe000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x19U))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+493,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x1bU)))),3);
        bufp->chgBit(oldp+494,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+495,((1U & ((IData)((0x10000000ULL 
                                               == (0x18000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x8000000ULL 
                                                 == 
                                                 (0x18000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+496,((1U & ((IData)((0x18000000ULL 
                                               == (0x38000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1bU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+497,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x1dU)))),3);
        bufp->chgBit(oldp+498,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+499,((1U & ((IData)((0x40000000ULL 
                                               == (0x60000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x20000000ULL 
                                                 == 
                                                 (0x60000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+500,((1U & ((IData)((0x60000000ULL 
                                               == (0xe0000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1dU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgCData(oldp+501,((7U & (IData)((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                >> 0x1fU)))),3);
        bufp->chgBit(oldp+502,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg));
        bufp->chgBit(oldp+503,((1U & ((IData)((0x100000000ULL 
                                               == (0x180000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | (IData)((0x80000000ULL 
                                                 == 
                                                 (0x180000000ULL 
                                                  & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full)))))));
        bufp->chgBit(oldp+504,((1U & ((IData)((0x180000000ULL 
                                               == (0x380000000ULL 
                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                      | ((~ (IData)(
                                                    (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                     >> 0x1fU))) 
                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))));
        bufp->chgIData(oldp+505,((0xffffffU & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSelf->PvuTop__DOT___decode2_io_Frac_3)))),24);
        bufp->chgQData(oldp+506,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x1_x_new_full),36);
        bufp->chgQData(oldp+508,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x2_x_new_full),36);
        bufp->chgQData(oldp+510,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__reciprocalMod__DOT__x3_x_new_full),36);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x14U]))) {
        bufp->chgIData(oldp+512,((0xffffffU & (IData)(
                                                      (0xffffffULL 
                                                       & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                           + 
                                                           ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                         | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                          >> 0xcU))))),26);
        bufp->chgIData(oldp+513,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                        ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0)))),24);
        bufp->chgIData(oldp+514,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0)))))),24);
        bufp->chgIData(oldp+515,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod),24);
        bufp->chgIData(oldp+516,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1),24);
        bufp->chgIData(oldp+517,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2),24);
        bufp->chgIData(oldp+518,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3),24);
        bufp->chgIData(oldp+519,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4),24);
        bufp->chgIData(oldp+520,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5),24);
        bufp->chgIData(oldp+521,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6),24);
        bufp->chgIData(oldp+522,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                        ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0)))),27);
        bufp->chgIData(oldp+523,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0)))))),27);
        bufp->chgIData(oldp+524,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0),27);
        bufp->chgIData(oldp+525,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0),27);
        bufp->chgIData(oldp+526,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0),27);
        bufp->chgIData(oldp+527,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0),27);
        bufp->chgIData(oldp+528,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0),26);
        bufp->chgIData(oldp+529,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0),26);
        bufp->chgIData(oldp+530,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0),26);
        bufp->chgIData(oldp+531,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0),26);
        bufp->chgSData(oldp+532,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod),13);
        bufp->chgIData(oldp+533,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                      ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))) 
                                        ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                        | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))))))))),24);
        bufp->chgIData(oldp+534,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                       ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                   & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))) 
                                  | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                           | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                      & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))) 
                                     | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))) 
                                         & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                         | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))) 
                                           | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                               | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))) 
                                              & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                          | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                              | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))))))))))),24);
        bufp->chgIData(oldp+535,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod),24);
        bufp->chgIData(oldp+536,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1),24);
        bufp->chgIData(oldp+537,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2),24);
        bufp->chgIData(oldp+538,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3),24);
        bufp->chgIData(oldp+539,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4),24);
        bufp->chgIData(oldp+540,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5),24);
        bufp->chgIData(oldp+541,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6),24);
        bufp->chgIData(oldp+542,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                      ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))) 
                                        ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                        | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))))))))),27);
        bufp->chgIData(oldp+543,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                       ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                   & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))) 
                                  | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                           | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                      & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))) 
                                     | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))) 
                                         & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                         | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))) 
                                           | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                               | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))) 
                                              & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                          | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                              | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))))))))))),27);
        bufp->chgIData(oldp+544,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))),27);
        bufp->chgIData(oldp+545,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))),27);
        bufp->chgIData(oldp+546,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))),27);
        bufp->chgIData(oldp+547,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                               | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))))),27);
        bufp->chgIData(oldp+548,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))),26);
        bufp->chgIData(oldp+549,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))),26);
        bufp->chgIData(oldp+550,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))),26);
        bufp->chgIData(oldp+551,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                               | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))))),26);
        bufp->chgSData(oldp+552,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod),13);
        bufp->chgIData(oldp+553,((0xffffffU & (IData)(
                                                      (0xffffffULL 
                                                       & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                           + 
                                                           ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                         | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                          >> 0xcU))))),24);
        bufp->chgQData(oldp+554,((0xffffffffffffULL 
                                  & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                        ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                           ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))),48);
        bufp->chgQData(oldp+556,((0xffffffffffffULL 
                                  & ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                         & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                            & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                  | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))))),48);
        bufp->chgQData(oldp+558,((QData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))),48);
        bufp->chgQData(oldp+560,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_1),48);
        bufp->chgQData(oldp+562,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_2),48);
        bufp->chgQData(oldp+564,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_3),48);
        bufp->chgQData(oldp+566,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_4),48);
        bufp->chgQData(oldp+568,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_5),48);
        bufp->chgQData(oldp+570,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_6),48);
        bufp->chgQData(oldp+572,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_7),48);
        bufp->chgQData(oldp+574,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_8),48);
        bufp->chgQData(oldp+576,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_9),48);
        bufp->chgQData(oldp+578,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_10),48);
        bufp->chgQData(oldp+580,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_11),48);
        bufp->chgQData(oldp+582,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT___genProds_io_partial_prods_12),48);
        bufp->chgQData(oldp+584,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                        ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))),52);
        bufp->chgQData(oldp+586,(((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                         & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                            & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                               | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                              & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))),52);
        bufp->chgQData(oldp+588,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),52);
        bufp->chgQData(oldp+590,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),52);
        bufp->chgQData(oldp+592,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),52);
        bufp->chgQData(oldp+594,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),52);
        bufp->chgQData(oldp+596,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),51);
        bufp->chgQData(oldp+598,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),51);
        bufp->chgQData(oldp+600,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h037a5002__0),51);
        bufp->chgQData(oldp+602,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h32ec1818__0),51);
        bufp->chgQData(oldp+604,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h5febfed3__0),51);
        bufp->chgQData(oldp+606,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_he8298333__0),51);
        bufp->chgQData(oldp+608,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h037a5002__0),50);
        bufp->chgQData(oldp+610,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h32ec1818__0),50);
        bufp->chgQData(oldp+612,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h5febfed3__0),50);
        bufp->chgQData(oldp+614,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_he8298333__0),50);
        bufp->chgQData(oldp+616,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),51);
        bufp->chgQData(oldp+618,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),51);
        bufp->chgQData(oldp+620,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h160609f1__0),51);
        bufp->chgQData(oldp+622,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h9e4e06c7__0),51);
        bufp->chgQData(oldp+624,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h041e3646__0),51);
        bufp->chgQData(oldp+626,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h47de5b44__0),51);
        bufp->chgQData(oldp+628,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h160609f1__0),50);
        bufp->chgQData(oldp+630,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h9e4e06c7__0),50);
        bufp->chgQData(oldp+632,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h041e3646__0),50);
        bufp->chgQData(oldp+634,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__VdfgTmp_h47de5b44__0),50);
        bufp->chgIData(oldp+636,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod),25);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x15U]))) {
        bufp->chgIData(oldp+637,((0xffffffU & (IData)(
                                                      (0xffffffULL 
                                                       & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                           + 
                                                           ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                         | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                          >> 0xcU))))),26);
        bufp->chgIData(oldp+638,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                        ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0)))),24);
        bufp->chgIData(oldp+639,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0)))))),24);
        bufp->chgIData(oldp+640,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod),24);
        bufp->chgIData(oldp+641,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1),24);
        bufp->chgIData(oldp+642,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2),24);
        bufp->chgIData(oldp+643,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3),24);
        bufp->chgIData(oldp+644,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4),24);
        bufp->chgIData(oldp+645,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5),24);
        bufp->chgIData(oldp+646,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6),24);
        bufp->chgIData(oldp+647,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                        ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0)))),27);
        bufp->chgIData(oldp+648,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0)))))),27);
        bufp->chgIData(oldp+649,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0),27);
        bufp->chgIData(oldp+650,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0),27);
        bufp->chgIData(oldp+651,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0),27);
        bufp->chgIData(oldp+652,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0),27);
        bufp->chgIData(oldp+653,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0),26);
        bufp->chgIData(oldp+654,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0),26);
        bufp->chgIData(oldp+655,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0),26);
        bufp->chgIData(oldp+656,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0),26);
        bufp->chgSData(oldp+657,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod),13);
        bufp->chgIData(oldp+658,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                      ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))) 
                                        ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                        | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))))))))),24);
        bufp->chgIData(oldp+659,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                       ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                   & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))) 
                                  | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                           | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                      & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))) 
                                     | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))) 
                                         & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                         | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))) 
                                           | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                               | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))) 
                                              & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                          | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                              | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))))))))))),24);
        bufp->chgIData(oldp+660,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod),24);
        bufp->chgIData(oldp+661,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1),24);
        bufp->chgIData(oldp+662,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2),24);
        bufp->chgIData(oldp+663,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3),24);
        bufp->chgIData(oldp+664,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4),24);
        bufp->chgIData(oldp+665,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5),24);
        bufp->chgIData(oldp+666,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6),24);
        bufp->chgIData(oldp+667,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                      ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))) 
                                        ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                        | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))))))))),27);
        bufp->chgIData(oldp+668,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                       ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                   & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))) 
                                  | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                           | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                      & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))) 
                                     | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))) 
                                         & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                         | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))) 
                                           | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                               | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))) 
                                              & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                          | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                              | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))))))))))),27);
        bufp->chgIData(oldp+669,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))),27);
        bufp->chgIData(oldp+670,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))),27);
        bufp->chgIData(oldp+671,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))),27);
        bufp->chgIData(oldp+672,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                               | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))))),27);
        bufp->chgIData(oldp+673,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))),26);
        bufp->chgIData(oldp+674,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))),26);
        bufp->chgIData(oldp+675,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))),26);
        bufp->chgIData(oldp+676,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                               | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))))),26);
        bufp->chgSData(oldp+677,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod),13);
        bufp->chgIData(oldp+678,((0xffffffU & (IData)(
                                                      (0xffffffULL 
                                                       & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                           + 
                                                           ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                         | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                          >> 0xcU))))),24);
        bufp->chgQData(oldp+679,((0xffffffffffffULL 
                                  & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                        ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                           ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))),48);
        bufp->chgQData(oldp+681,((0xffffffffffffULL 
                                  & ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                         & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                            & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                  | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))))),48);
        bufp->chgQData(oldp+683,((QData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))),48);
        bufp->chgQData(oldp+685,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_1),48);
        bufp->chgQData(oldp+687,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_2),48);
        bufp->chgQData(oldp+689,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_3),48);
        bufp->chgQData(oldp+691,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_4),48);
        bufp->chgQData(oldp+693,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_5),48);
        bufp->chgQData(oldp+695,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_6),48);
        bufp->chgQData(oldp+697,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_7),48);
        bufp->chgQData(oldp+699,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_8),48);
        bufp->chgQData(oldp+701,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_9),48);
        bufp->chgQData(oldp+703,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_10),48);
        bufp->chgQData(oldp+705,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_11),48);
        bufp->chgQData(oldp+707,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT___genProds_io_partial_prods_12),48);
        bufp->chgQData(oldp+709,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                        ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))),52);
        bufp->chgQData(oldp+711,(((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                         & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                            & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                               | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                              & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))),52);
        bufp->chgQData(oldp+713,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),52);
        bufp->chgQData(oldp+715,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),52);
        bufp->chgQData(oldp+717,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),52);
        bufp->chgQData(oldp+719,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),52);
        bufp->chgQData(oldp+721,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),51);
        bufp->chgQData(oldp+723,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),51);
        bufp->chgQData(oldp+725,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h037a5002__0),51);
        bufp->chgQData(oldp+727,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h32ec1818__0),51);
        bufp->chgQData(oldp+729,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h5febfed3__0),51);
        bufp->chgQData(oldp+731,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_he8298333__0),51);
        bufp->chgQData(oldp+733,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h037a5002__0),50);
        bufp->chgQData(oldp+735,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h32ec1818__0),50);
        bufp->chgQData(oldp+737,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h5febfed3__0),50);
        bufp->chgQData(oldp+739,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_he8298333__0),50);
        bufp->chgQData(oldp+741,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),51);
        bufp->chgQData(oldp+743,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),51);
        bufp->chgQData(oldp+745,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h160609f1__0),51);
        bufp->chgQData(oldp+747,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h9e4e06c7__0),51);
        bufp->chgQData(oldp+749,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h041e3646__0),51);
        bufp->chgQData(oldp+751,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h47de5b44__0),51);
        bufp->chgQData(oldp+753,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h160609f1__0),50);
        bufp->chgQData(oldp+755,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h9e4e06c7__0),50);
        bufp->chgQData(oldp+757,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h041e3646__0),50);
        bufp->chgQData(oldp+759,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__VdfgTmp_h47de5b44__0),50);
        bufp->chgIData(oldp+761,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod),25);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x16U]))) {
        bufp->chgIData(oldp+762,((0xffffffU & (IData)(
                                                      (0xffffffULL 
                                                       & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                           + 
                                                           ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                         | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                          >> 0xcU))))),26);
        bufp->chgIData(oldp+763,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                        ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0)))),24);
        bufp->chgIData(oldp+764,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0)))))),24);
        bufp->chgIData(oldp+765,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod),24);
        bufp->chgIData(oldp+766,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1),24);
        bufp->chgIData(oldp+767,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2),24);
        bufp->chgIData(oldp+768,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3),24);
        bufp->chgIData(oldp+769,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4),24);
        bufp->chgIData(oldp+770,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5),24);
        bufp->chgIData(oldp+771,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6),24);
        bufp->chgIData(oldp+772,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                        ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0)))),27);
        bufp->chgIData(oldp+773,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0)))))),27);
        bufp->chgIData(oldp+774,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0),27);
        bufp->chgIData(oldp+775,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0),27);
        bufp->chgIData(oldp+776,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0),27);
        bufp->chgIData(oldp+777,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0),27);
        bufp->chgIData(oldp+778,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0),26);
        bufp->chgIData(oldp+779,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0),26);
        bufp->chgIData(oldp+780,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0),26);
        bufp->chgIData(oldp+781,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0),26);
        bufp->chgSData(oldp+782,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod),13);
        bufp->chgIData(oldp+783,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                      ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))) 
                                        ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                        | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))))))))),24);
        bufp->chgIData(oldp+784,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                       ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                   & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))) 
                                  | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                           | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                      & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))) 
                                     | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))) 
                                         & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                         | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))) 
                                           | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                               | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))) 
                                              & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                          | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                              | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))))))))))),24);
        bufp->chgIData(oldp+785,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod),24);
        bufp->chgIData(oldp+786,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1),24);
        bufp->chgIData(oldp+787,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2),24);
        bufp->chgIData(oldp+788,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3),24);
        bufp->chgIData(oldp+789,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4),24);
        bufp->chgIData(oldp+790,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5),24);
        bufp->chgIData(oldp+791,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6),24);
        bufp->chgIData(oldp+792,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                      ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))) 
                                        ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                        | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))))))))),27);
        bufp->chgIData(oldp+793,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                       ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                   & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))) 
                                  | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                           | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                      & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))) 
                                     | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))) 
                                         & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                         | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))) 
                                           | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                               | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))) 
                                              & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                          | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                              | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))))))))))),27);
        bufp->chgIData(oldp+794,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))),27);
        bufp->chgIData(oldp+795,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))),27);
        bufp->chgIData(oldp+796,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))),27);
        bufp->chgIData(oldp+797,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                               | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))))),27);
        bufp->chgIData(oldp+798,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))),26);
        bufp->chgIData(oldp+799,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))),26);
        bufp->chgIData(oldp+800,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))),26);
        bufp->chgIData(oldp+801,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                               | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))))),26);
        bufp->chgSData(oldp+802,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod),13);
        bufp->chgIData(oldp+803,((0xffffffU & (IData)(
                                                      (0xffffffULL 
                                                       & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                           + 
                                                           ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                         | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                          >> 0xcU))))),24);
        bufp->chgQData(oldp+804,((0xffffffffffffULL 
                                  & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                        ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                           ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))),48);
        bufp->chgQData(oldp+806,((0xffffffffffffULL 
                                  & ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                         & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                            & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                  | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))))),48);
        bufp->chgQData(oldp+808,((QData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))),48);
        bufp->chgQData(oldp+810,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_1),48);
        bufp->chgQData(oldp+812,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_2),48);
        bufp->chgQData(oldp+814,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_3),48);
        bufp->chgQData(oldp+816,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_4),48);
        bufp->chgQData(oldp+818,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_5),48);
        bufp->chgQData(oldp+820,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_6),48);
        bufp->chgQData(oldp+822,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_7),48);
        bufp->chgQData(oldp+824,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_8),48);
        bufp->chgQData(oldp+826,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_9),48);
        bufp->chgQData(oldp+828,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_10),48);
        bufp->chgQData(oldp+830,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_11),48);
        bufp->chgQData(oldp+832,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT___genProds_io_partial_prods_12),48);
        bufp->chgQData(oldp+834,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                        ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))),52);
        bufp->chgQData(oldp+836,(((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                         & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                            & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                               | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                              & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))),52);
        bufp->chgQData(oldp+838,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),52);
        bufp->chgQData(oldp+840,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),52);
        bufp->chgQData(oldp+842,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),52);
        bufp->chgQData(oldp+844,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),52);
        bufp->chgQData(oldp+846,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),51);
        bufp->chgQData(oldp+848,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),51);
        bufp->chgQData(oldp+850,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h037a5002__0),51);
        bufp->chgQData(oldp+852,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h32ec1818__0),51);
        bufp->chgQData(oldp+854,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h5febfed3__0),51);
        bufp->chgQData(oldp+856,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_he8298333__0),51);
        bufp->chgQData(oldp+858,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h037a5002__0),50);
        bufp->chgQData(oldp+860,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h32ec1818__0),50);
        bufp->chgQData(oldp+862,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h5febfed3__0),50);
        bufp->chgQData(oldp+864,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_he8298333__0),50);
        bufp->chgQData(oldp+866,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),51);
        bufp->chgQData(oldp+868,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),51);
        bufp->chgQData(oldp+870,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h160609f1__0),51);
        bufp->chgQData(oldp+872,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h9e4e06c7__0),51);
        bufp->chgQData(oldp+874,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h041e3646__0),51);
        bufp->chgQData(oldp+876,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h47de5b44__0),51);
        bufp->chgQData(oldp+878,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h160609f1__0),50);
        bufp->chgQData(oldp+880,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h9e4e06c7__0),50);
        bufp->chgQData(oldp+882,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h041e3646__0),50);
        bufp->chgQData(oldp+884,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__VdfgTmp_h47de5b44__0),50);
        bufp->chgIData(oldp+886,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod),25);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x17U]))) {
        bufp->chgIData(oldp+887,((0xffffffU & (IData)(
                                                      (0xffffffULL 
                                                       & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                           + 
                                                           ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                         | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                          >> 0xcU))))),26);
        bufp->chgIData(oldp+888,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                        ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0)))),24);
        bufp->chgIData(oldp+889,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0)))))),24);
        bufp->chgIData(oldp+890,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod),24);
        bufp->chgIData(oldp+891,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1),24);
        bufp->chgIData(oldp+892,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2),24);
        bufp->chgIData(oldp+893,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3),24);
        bufp->chgIData(oldp+894,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4),24);
        bufp->chgIData(oldp+895,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5),24);
        bufp->chgIData(oldp+896,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6),24);
        bufp->chgIData(oldp+897,((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                        ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0)))),27);
        bufp->chgIData(oldp+898,(((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                   & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                      & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                         & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                            & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                               | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                                              & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0)))))),27);
        bufp->chgIData(oldp+899,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0),27);
        bufp->chgIData(oldp+900,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0),27);
        bufp->chgIData(oldp+901,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0),27);
        bufp->chgIData(oldp+902,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0),27);
        bufp->chgIData(oldp+903,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0),26);
        bufp->chgIData(oldp+904,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0),26);
        bufp->chgIData(oldp+905,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0),26);
        bufp->chgIData(oldp+906,(vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0),26);
        bufp->chgSData(oldp+907,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod),13);
        bufp->chgIData(oldp+908,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                      ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))) 
                                        ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                        | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))))))))),24);
        bufp->chgIData(oldp+909,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                       ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                   & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))) 
                                  | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                           | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                      & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))) 
                                     | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))) 
                                         & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                         | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))) 
                                           | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                               | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))) 
                                              & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                          | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                              | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))))))))))),24);
        bufp->chgIData(oldp+910,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod),24);
        bufp->chgIData(oldp+911,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1),24);
        bufp->chgIData(oldp+912,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2),24);
        bufp->chgIData(oldp+913,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3),24);
        bufp->chgIData(oldp+914,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4),24);
        bufp->chgIData(oldp+915,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5),24);
        bufp->chgIData(oldp+916,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6),24);
        bufp->chgIData(oldp+917,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                      ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                  ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                     ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))) 
                                        ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                        | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))))))))),27);
        bufp->chgIData(oldp+918,(((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                    ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                       ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                   & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                          | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))) 
                                  | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                           | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                      & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                         ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                               ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))) 
                                     | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                          ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))) 
                                         & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                               | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                         | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))))) 
                                        | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                            & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                  ^ 
                                                  (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))) 
                                           | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                               | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))) 
                                              & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                        & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                           & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                          | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                              | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))))))))))),27);
        bufp->chgIData(oldp+919,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))),27);
        bufp->chgIData(oldp+920,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))),27);
        bufp->chgIData(oldp+921,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))),27);
        bufp->chgIData(oldp+922,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                               | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))))),27);
        bufp->chgIData(oldp+923,(((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))),26);
        bufp->chgIData(oldp+924,((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))),26);
        bufp->chgIData(oldp+925,((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))),26);
        bufp->chgIData(oldp+926,(((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                               | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))))),26);
        bufp->chgSData(oldp+927,(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod),13);
        bufp->chgIData(oldp+928,((0xffffffU & (IData)(
                                                      (0xffffffULL 
                                                       & (((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                             ^ 
                                                             (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                              ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))) 
                                                           + 
                                                           ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                             & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                                                & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                               | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                                         | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                                        & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))) 
                                                          >> 0xcU))))),24);
        bufp->chgQData(oldp+929,((0xffffffffffffULL 
                                  & (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                        ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                           ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))),48);
        bufp->chgQData(oldp+931,((0xffffffffffffULL 
                                  & ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                         & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                            & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                               & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                                  | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                                 & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o))))))),48);
        bufp->chgQData(oldp+933,((QData)((IData)(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))),48);
        bufp->chgQData(oldp+935,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_1),48);
        bufp->chgQData(oldp+937,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_2),48);
        bufp->chgQData(oldp+939,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_3),48);
        bufp->chgQData(oldp+941,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_4),48);
        bufp->chgQData(oldp+943,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_5),48);
        bufp->chgQData(oldp+945,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_6),48);
        bufp->chgQData(oldp+947,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_7),48);
        bufp->chgQData(oldp+949,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_8),48);
        bufp->chgQData(oldp+951,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_9),48);
        bufp->chgQData(oldp+953,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_10),48);
        bufp->chgQData(oldp+955,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_11),48);
        bufp->chgQData(oldp+957,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT___genProds_io_partial_prods_12),48);
        bufp->chgQData(oldp+959,((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                  ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                     ^ (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                        ^ vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))),52);
        bufp->chgQData(oldp+961,(((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                   & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                  | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
                                      & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                     | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
                                         & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o) 
                                        | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                            & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o) 
                                           | ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
                                               | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o) 
                                              & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o)))))),52);
        bufp->chgQData(oldp+963,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),52);
        bufp->chgQData(oldp+965,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),52);
        bufp->chgQData(oldp+967,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),52);
        bufp->chgQData(oldp+969,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),52);
        bufp->chgQData(oldp+971,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o),51);
        bufp->chgQData(oldp+973,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o),51);
        bufp->chgQData(oldp+975,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h037a5002__0),51);
        bufp->chgQData(oldp+977,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h32ec1818__0),51);
        bufp->chgQData(oldp+979,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h5febfed3__0),51);
        bufp->chgQData(oldp+981,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_he8298333__0),51);
        bufp->chgQData(oldp+983,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h037a5002__0),50);
        bufp->chgQData(oldp+985,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h32ec1818__0),50);
        bufp->chgQData(oldp+987,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h5febfed3__0),50);
        bufp->chgQData(oldp+989,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_he8298333__0),50);
        bufp->chgQData(oldp+991,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o),51);
        bufp->chgQData(oldp+993,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o),51);
        bufp->chgQData(oldp+995,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h160609f1__0),51);
        bufp->chgQData(oldp+997,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h9e4e06c7__0),51);
        bufp->chgQData(oldp+999,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h041e3646__0),51);
        bufp->chgQData(oldp+1001,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h47de5b44__0),51);
        bufp->chgQData(oldp+1003,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h160609f1__0),50);
        bufp->chgQData(oldp+1005,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h9e4e06c7__0),50);
        bufp->chgQData(oldp+1007,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h041e3646__0),50);
        bufp->chgQData(oldp+1009,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__VdfgTmp_h47de5b44__0),50);
        bufp->chgIData(oldp+1011,(vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3.__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod),25);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x1cU]))) {
        bufp->chgIData(oldp+1012,(vlSelf->PvuTop__DOT___dotproduct_io_pir_frac_o),26);
        bufp->chgIData(oldp+1013,(vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0),26);
        bufp->chgIData(oldp+1014,(vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1),26);
        bufp->chgIData(oldp+1015,(vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2),26);
        bufp->chgIData(oldp+1016,(vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3),26);
        bufp->chgIData(oldp+1017,((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                                   ^ (vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1 
                                      ^ (vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2 
                                         ^ vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3)))),28);
        bufp->chgIData(oldp+1018,(((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                                    & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1) 
                                   | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1 
                                       & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2) 
                                      | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2 
                                          & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3) 
                                         | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                                             & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_2) 
                                            | ((vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_0 
                                                | vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_1) 
                                               & vlSelf->PvuTop__DOT__dotproduct__DOT____Vcellinp__csaTree__io_operands_i_3)))))),28);
        bufp->chgIData(oldp+1019,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm__io_pir_frac_i),26);
        bufp->chgIData(oldp+1020,(vlSelf->PvuTop__DOT__frac_norm__DOT____Vcellinp__lzcMod__in_i),25);
        bufp->chgIData(oldp+1021,(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),25);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[0x13U]) 
                     | vlSelf->__Vm_traceActivity[0x1dU]))) {
        bufp->chgSData(oldp+1022,(((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                               >> 0xdU)) 
                                   | (0U != (0x1fffU 
                                             & vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o)))),13);
        bufp->chgCData(oldp+1023,((0x1fU & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+1024,(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
        bufp->chgIData(oldp+1029,(vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o),26);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x14U]))) {
        bufp->chgSData(oldp+1030,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_0))),12);
        bufp->chgSData(oldp+1031,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_0))),12);
        bufp->chgSData(oldp+1032,(vlSelf->PvuTop__DOT__add__DOT__sum),13);
        bufp->chgBit(oldp+1033,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater));
        bufp->chgSData(oldp+1034,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0),12);
        bufp->chgSData(oldp+1035,((0x7ffU & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_0))),11);
        bufp->chgSData(oldp+1036,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),11);
        bufp->chgIData(oldp+1037,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_0),26);
        bufp->chgIData(oldp+1038,(vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod__in_i),25);
        bufp->chgIData(oldp+1039,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp),25);
        bufp->chgSData(oldp+1040,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_0),14);
        bufp->chgSData(oldp+1041,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_0),14);
        bufp->chgCData(oldp+1042,(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_0),7);
        bufp->chgCData(oldp+1043,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum))
                                    ? 0x3fU : (0x7fU 
                                               & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum)))),7);
        bufp->chgCData(oldp+1044,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0x15U]))) {
        bufp->chgSData(oldp+1045,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_1))),12);
        bufp->chgSData(oldp+1046,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_1))),12);
        bufp->chgSData(oldp+1047,(vlSelf->PvuTop__DOT__add__DOT__sum_1),13);
        bufp->chgBit(oldp+1048,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1));
        bufp->chgSData(oldp+1049,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1),12);
        bufp->chgSData(oldp+1050,((0x7ffU & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_1))),11);
        bufp->chgSData(oldp+1051,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),11);
        bufp->chgIData(oldp+1052,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_1),26);
        bufp->chgIData(oldp+1053,(vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_1__in_i),25);
        bufp->chgIData(oldp+1054,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp),25);
        bufp->chgSData(oldp+1055,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_1),14);
        bufp->chgSData(oldp+1056,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_1),14);
        bufp->chgCData(oldp+1057,(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_1),7);
        bufp->chgCData(oldp+1058,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_1))
                                    ? 0x3fU : (0x7fU 
                                               & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_1)))),7);
        bufp->chgCData(oldp+1059,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_1),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0x16U]))) {
        bufp->chgSData(oldp+1060,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_2))),12);
        bufp->chgSData(oldp+1061,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_2))),12);
        bufp->chgSData(oldp+1062,(vlSelf->PvuTop__DOT__add__DOT__sum_2),13);
        bufp->chgBit(oldp+1063,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2));
        bufp->chgSData(oldp+1064,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2),12);
        bufp->chgSData(oldp+1065,((0x7ffU & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_2))),11);
        bufp->chgSData(oldp+1066,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),11);
        bufp->chgIData(oldp+1067,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_2),26);
        bufp->chgIData(oldp+1068,(vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_2__in_i),25);
        bufp->chgIData(oldp+1069,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp),25);
        bufp->chgSData(oldp+1070,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_2),14);
        bufp->chgSData(oldp+1071,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_2),14);
        bufp->chgCData(oldp+1072,(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_2),7);
        bufp->chgCData(oldp+1073,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_2))
                                    ? 0x3fU : (0x7fU 
                                               & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_2)))),7);
        bufp->chgCData(oldp+1074,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_2),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0x17U]))) {
        bufp->chgSData(oldp+1075,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_3))),12);
        bufp->chgSData(oldp+1076,((0xfffU & (IData)(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_3))),12);
        bufp->chgSData(oldp+1077,(vlSelf->PvuTop__DOT__add__DOT__sum_3),13);
        bufp->chgBit(oldp+1078,(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3));
        bufp->chgSData(oldp+1079,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3),12);
        bufp->chgSData(oldp+1080,((0x7ffU & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_1__io_pir_frac_i_3))),11);
        bufp->chgSData(oldp+1081,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),11);
        bufp->chgIData(oldp+1082,(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_2__io_pir_frac_i_3),26);
        bufp->chgIData(oldp+1083,(vlSelf->PvuTop__DOT__frac_norm_2__DOT____Vcellinp__lzcMod_3__in_i),25);
        bufp->chgIData(oldp+1084,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp),25);
        bufp->chgSData(oldp+1085,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac1_align_3),14);
        bufp->chgSData(oldp+1086,(vlSelf->PvuTop__DOT___fracalign_1_io_pir_frac2_align_3),14);
        bufp->chgCData(oldp+1087,(vlSelf->PvuTop__DOT__fracalign_1__DOT__io_pir_max_exp_3),7);
        bufp->chgCData(oldp+1088,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_3))
                                    ? 0x3fU : (0x7fU 
                                               & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_3)))),7);
        bufp->chgCData(oldp+1089,(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_3),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0x18U]))) {
        bufp->chgCData(oldp+1090,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+1091,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[8U] 
                     | vlSelf->__Vm_traceActivity[0x19U]))) {
        bufp->chgCData(oldp+1096,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+1097,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[9U] 
                     | vlSelf->__Vm_traceActivity[0x1aU]))) {
        bufp->chgCData(oldp+1102,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+1103,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xaU] 
                     | vlSelf->__Vm_traceActivity[0x1bU]))) {
        bufp->chgSData(oldp+1108,(((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_3_io_result_o 
                                               >> 0xdU)) 
                                   | (0U != (0x1fffU 
                                             & vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_3_io_result_o)))),13);
        bufp->chgCData(oldp+1109,((0x1fU & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+1110,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),160);
        bufp->chgIData(oldp+1115,(vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_3_io_result_o),26);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1cU])) {
        bufp->chgIData(oldp+1116,(vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_0),26);
        bufp->chgIData(oldp+1117,(vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_1),26);
        bufp->chgIData(oldp+1118,(vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_2),26);
        bufp->chgIData(oldp+1119,(vlSelf->PvuTop__DOT__dotproduct__DOT__pir_frac_cmp_tmp_3),26);
    }
    bufp->chgBit(oldp+1120,(vlSelf->clock));
    bufp->chgBit(oldp+1121,(vlSelf->reset));
    bufp->chgSData(oldp+1122,(vlSelf->io_posit_i1_0),16);
    bufp->chgSData(oldp+1123,(vlSelf->io_posit_i1_1),16);
    bufp->chgSData(oldp+1124,(vlSelf->io_posit_i1_2),16);
    bufp->chgSData(oldp+1125,(vlSelf->io_posit_i1_3),16);
    bufp->chgSData(oldp+1126,(vlSelf->io_posit_i2_0),16);
    bufp->chgSData(oldp+1127,(vlSelf->io_posit_i2_1),16);
    bufp->chgSData(oldp+1128,(vlSelf->io_posit_i2_2),16);
    bufp->chgSData(oldp+1129,(vlSelf->io_posit_i2_3),16);
    bufp->chgCData(oldp+1130,(vlSelf->io_op),3);
    bufp->chgSData(oldp+1131,(vlSelf->io_posit_o_0),16);
    bufp->chgSData(oldp+1132,(vlSelf->io_posit_o_1),16);
    bufp->chgSData(oldp+1133,(vlSelf->io_posit_o_2),16);
    bufp->chgSData(oldp+1134,(vlSelf->io_posit_o_3),16);
    bufp->chgSData(oldp+1135,(vlSelf->io_posit_dot_o),16);
    bufp->chgBit(oldp+1136,((1U & ((IData)(vlSelf->io_posit_i1_0) 
                                   >> 0xfU))));
    bufp->chgBit(oldp+1137,((1U & ((IData)(vlSelf->io_posit_i1_1) 
                                   >> 0xfU))));
    bufp->chgBit(oldp+1138,((1U & ((IData)(vlSelf->io_posit_i1_2) 
                                   >> 0xfU))));
    bufp->chgBit(oldp+1139,((1U & ((IData)(vlSelf->io_posit_i1_3) 
                                   >> 0xfU))));
    bufp->chgBit(oldp+1140,((1U & ((IData)(vlSelf->io_posit_i2_0) 
                                   >> 0xfU))));
    bufp->chgBit(oldp+1141,((1U & ((IData)(vlSelf->io_posit_i2_1) 
                                   >> 0xfU))));
    bufp->chgBit(oldp+1142,((1U & ((IData)(vlSelf->io_posit_i2_2) 
                                   >> 0xfU))));
    bufp->chgBit(oldp+1143,((1U & ((IData)(vlSelf->io_posit_i2_3) 
                                   >> 0xfU))));
    bufp->chgCData(oldp+1144,(vlSelf->PvuTop__DOT___decode1_io_Exp_0),7);
    bufp->chgCData(oldp+1145,(vlSelf->PvuTop__DOT___decode1_io_Exp_1),7);
    bufp->chgCData(oldp+1146,(vlSelf->PvuTop__DOT___decode1_io_Exp_2),7);
    bufp->chgCData(oldp+1147,(vlSelf->PvuTop__DOT___decode1_io_Exp_3),7);
    bufp->chgBit(oldp+1148,((1U & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                    | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                    ? ((IData)(vlSelf->io_posit_i1_0) 
                                       >> 0xfU) : ((IData)(vlSelf->io_posit_i2_0) 
                                                   >> 0xfU)))));
    bufp->chgBit(oldp+1149,((1U & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0) 
                                    | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1))
                                    ? ((IData)(vlSelf->io_posit_i1_1) 
                                       >> 0xfU) : ((IData)(vlSelf->io_posit_i2_1) 
                                                   >> 0xfU)))));
    bufp->chgBit(oldp+1150,((1U & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1) 
                                    | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2))
                                    ? ((IData)(vlSelf->io_posit_i1_2) 
                                       >> 0xfU) : ((IData)(vlSelf->io_posit_i2_2) 
                                                   >> 0xfU)))));
    bufp->chgBit(oldp+1151,((1U & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2) 
                                    | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3))
                                    ? ((IData)(vlSelf->io_posit_i1_3) 
                                       >> 0xfU) : ((IData)(vlSelf->io_posit_i2_3) 
                                                   >> 0xfU)))));
    bufp->chgCData(oldp+1152,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0) 
                                        + ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                           & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                                              >> 0xcU))))),7);
    bufp->chgCData(oldp+1153,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1) 
                                        + ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0) 
                                           & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_1) 
                                              >> 0xcU))))),7);
    bufp->chgCData(oldp+1154,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2) 
                                        + ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1) 
                                           & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_2) 
                                              >> 0xcU))))),7);
    bufp->chgCData(oldp+1155,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3) 
                                        + ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2) 
                                           & ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_3) 
                                              >> 0xcU))))),7);
    bufp->chgSData(oldp+1156,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                ? (IData)(vlSelf->__VdfgTmp_h2299343e__0)
                                : (IData)(vlSelf->__VdfgTmp_h5b3a16c4__0))),12);
    bufp->chgSData(oldp+1157,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                ? (IData)(vlSelf->__VdfgTmp_h87d0ba2c__0)
                                : (IData)(vlSelf->__VdfgTmp_h64874eba__0))),12);
    bufp->chgSData(oldp+1158,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                ? (IData)(vlSelf->__VdfgTmp_h79bf5980__0)
                                : (IData)(vlSelf->__VdfgTmp_h085a2b98__0))),12);
    bufp->chgSData(oldp+1159,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                ? (IData)(vlSelf->__VdfgTmp_h980bc3a7__0)
                                : (IData)(vlSelf->__VdfgTmp_hcba88845__0))),12);
    bufp->chgSData(oldp+1160,(vlSelf->PvuTop__DOT___decode1_io_Frac_0),12);
    bufp->chgSData(oldp+1161,(vlSelf->PvuTop__DOT___decode1_io_Frac_1),12);
    bufp->chgSData(oldp+1162,(vlSelf->PvuTop__DOT___decode1_io_Frac_2),12);
    bufp->chgSData(oldp+1163,(vlSelf->PvuTop__DOT___decode1_io_Frac_3),12);
    bufp->chgCData(oldp+1164,(vlSelf->PvuTop__DOT__decode1__DOT__same_length_0),4);
    bufp->chgCData(oldp+1165,(vlSelf->PvuTop__DOT__decode1__DOT__same_length_1),4);
    bufp->chgCData(oldp+1166,(vlSelf->PvuTop__DOT__decode1__DOT__same_length_2),4);
    bufp->chgCData(oldp+1167,(vlSelf->PvuTop__DOT__decode1__DOT__same_length_3),4);
    bufp->chgCData(oldp+1168,(((1U & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o) 
                                         >> 0xdU)) : 0U)),2);
    bufp->chgCData(oldp+1169,(((1U & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))
                                ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o) 
                                         >> 0xdU)) : 0U)),2);
    bufp->chgCData(oldp+1170,(((1U & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))
                                ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o) 
                                         >> 0xdU)) : 0U)),2);
    bufp->chgCData(oldp+1171,(((1U & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))
                                ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o) 
                                         >> 0xdU)) : 0U)),2);
    bufp->chgCData(oldp+1172,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->PvuTop__DOT__decode1__DOT__same_length_0)))),4);
    bufp->chgSData(oldp+1173,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o),15);
    bufp->chgCData(oldp+1174,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->PvuTop__DOT__decode1__DOT__same_length_1)))),4);
    bufp->chgSData(oldp+1175,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o),15);
    bufp->chgCData(oldp+1176,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->PvuTop__DOT__decode1__DOT__same_length_2)))),4);
    bufp->chgSData(oldp+1177,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o),15);
    bufp->chgCData(oldp+1178,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->PvuTop__DOT__decode1__DOT__same_length_3)))),4);
    bufp->chgSData(oldp+1179,(vlSelf->PvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o),15);
    bufp->chgCData(oldp+1180,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+1181,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+1182,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+1183,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgCData(oldp+1185,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+1186,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+1187,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+1188,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgCData(oldp+1190,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+1191,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+1192,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+1193,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgCData(oldp+1195,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+1196,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+1197,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+1198,(vlSelf->PvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgCData(oldp+1200,(vlSelf->PvuTop__DOT___decode2_io_Exp_0),7);
    bufp->chgCData(oldp+1201,(vlSelf->PvuTop__DOT___decode2_io_Exp_1),7);
    bufp->chgCData(oldp+1202,(vlSelf->PvuTop__DOT___decode2_io_Exp_2),7);
    bufp->chgCData(oldp+1203,(vlSelf->PvuTop__DOT___decode2_io_Exp_3),7);
    bufp->chgCData(oldp+1204,(vlSelf->PvuTop__DOT__decode2__DOT__same_length_0),4);
    bufp->chgCData(oldp+1205,(vlSelf->PvuTop__DOT__decode2__DOT__same_length_1),4);
    bufp->chgCData(oldp+1206,(vlSelf->PvuTop__DOT__decode2__DOT__same_length_2),4);
    bufp->chgCData(oldp+1207,(vlSelf->PvuTop__DOT__decode2__DOT__same_length_3),4);
    bufp->chgCData(oldp+1208,(((1U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))
                                ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o) 
                                         >> 0xdU)) : 0U)),2);
    bufp->chgCData(oldp+1209,(((1U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))
                                ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o) 
                                         >> 0xdU)) : 0U)),2);
    bufp->chgCData(oldp+1210,(((1U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))
                                ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o) 
                                         >> 0xdU)) : 0U)),2);
    bufp->chgCData(oldp+1211,(((1U & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))
                                ? (3U & ((IData)(vlSelf->PvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o) 
                                         >> 0xdU)) : 0U)),2);
    bufp->chgCData(oldp+1212,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->PvuTop__DOT__decode2__DOT__same_length_0)))),4);
    bufp->chgCData(oldp+1213,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->PvuTop__DOT__decode2__DOT__same_length_1)))),4);
    bufp->chgCData(oldp+1214,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->PvuTop__DOT__decode2__DOT__same_length_2)))),4);
    bufp->chgCData(oldp+1215,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->PvuTop__DOT__decode2__DOT__same_length_3)))),4);
    bufp->chgCData(oldp+1216,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+1217,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+1218,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+1219,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgCData(oldp+1221,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+1222,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+1223,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+1224,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgCData(oldp+1226,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+1227,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+1228,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+1229,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgCData(oldp+1231,((0xfU & (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+1232,((1U & (~ (IData)(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+1233,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+1234,(vlSelf->PvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgBit(oldp+1236,((1U & (((IData)(vlSelf->io_posit_i1_0) 
                                    ^ (IData)(vlSelf->io_posit_i2_0)) 
                                   >> 0xfU))));
    bufp->chgBit(oldp+1237,((1U & (((IData)(vlSelf->io_posit_i1_1) 
                                    ^ (IData)(vlSelf->io_posit_i2_1)) 
                                   >> 0xfU))));
    bufp->chgBit(oldp+1238,((1U & (((IData)(vlSelf->io_posit_i1_2) 
                                    ^ (IData)(vlSelf->io_posit_i2_2)) 
                                   >> 0xfU))));
    bufp->chgBit(oldp+1239,((1U & (((IData)(vlSelf->io_posit_i1_3) 
                                    ^ (IData)(vlSelf->io_posit_i2_3)) 
                                   >> 0xfU))));
    bufp->chgCData(oldp+1240,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0) 
                                        - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0)))),7);
    bufp->chgCData(oldp+1241,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1) 
                                        - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1)))),7);
    bufp->chgCData(oldp+1242,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2) 
                                        - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2)))),7);
    bufp->chgCData(oldp+1243,((0x7fU & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3) 
                                        - (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3)))),7);
    bufp->chgBit(oldp+1244,((1U & ((1U == (IData)(vlSelf->io_op))
                                    ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                        | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                        ? ((IData)(vlSelf->io_posit_i1_0) 
                                           >> 0xfU)
                                        : ((IData)(vlSelf->io_posit_i2_0) 
                                           >> 0xfU))
                                    : ((2U == (IData)(vlSelf->io_op))
                                        ? (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                            & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                           ^ ((IData)(vlSelf->io_posit_i1_0) 
                                              >> 0xfU))
                                        : ((3U == (IData)(vlSelf->io_op))
                                            ? (((IData)(vlSelf->io_posit_i1_0) 
                                                ^ (IData)(vlSelf->io_posit_i2_0)) 
                                               >> 0xfU)
                                            : ((4U 
                                                == (IData)(vlSelf->io_op)) 
                                               & (((IData)(vlSelf->io_posit_i1_0) 
                                                   ^ (IData)(vlSelf->io_posit_i2_0)) 
                                                  >> 0xfU))))))));
    bufp->chgBit(oldp+1245,((1U & ((1U == (IData)(vlSelf->io_op))
                                    ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0) 
                                        | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1))
                                        ? ((IData)(vlSelf->io_posit_i1_1) 
                                           >> 0xfU)
                                        : ((IData)(vlSelf->io_posit_i2_1) 
                                           >> 0xfU))
                                    : ((2U == (IData)(vlSelf->io_op))
                                        ? (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1)) 
                                            & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)) 
                                           ^ ((IData)(vlSelf->io_posit_i1_1) 
                                              >> 0xfU))
                                        : ((3U == (IData)(vlSelf->io_op))
                                            ? (((IData)(vlSelf->io_posit_i1_1) 
                                                ^ (IData)(vlSelf->io_posit_i2_1)) 
                                               >> 0xfU)
                                            : ((4U 
                                                == (IData)(vlSelf->io_op)) 
                                               & (((IData)(vlSelf->io_posit_i1_1) 
                                                   ^ (IData)(vlSelf->io_posit_i2_1)) 
                                                  >> 0xfU))))))));
    bufp->chgBit(oldp+1246,((1U & ((1U == (IData)(vlSelf->io_op))
                                    ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1) 
                                        | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2))
                                        ? ((IData)(vlSelf->io_posit_i1_2) 
                                           >> 0xfU)
                                        : ((IData)(vlSelf->io_posit_i2_2) 
                                           >> 0xfU))
                                    : ((2U == (IData)(vlSelf->io_op))
                                        ? (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2)) 
                                            & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)) 
                                           ^ ((IData)(vlSelf->io_posit_i1_2) 
                                              >> 0xfU))
                                        : ((3U == (IData)(vlSelf->io_op))
                                            ? (((IData)(vlSelf->io_posit_i1_2) 
                                                ^ (IData)(vlSelf->io_posit_i2_2)) 
                                               >> 0xfU)
                                            : ((4U 
                                                == (IData)(vlSelf->io_op)) 
                                               & (((IData)(vlSelf->io_posit_i1_2) 
                                                   ^ (IData)(vlSelf->io_posit_i2_2)) 
                                                  >> 0xfU))))))));
    bufp->chgBit(oldp+1247,((1U & ((1U == (IData)(vlSelf->io_op))
                                    ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2) 
                                        | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3))
                                        ? ((IData)(vlSelf->io_posit_i1_3) 
                                           >> 0xfU)
                                        : ((IData)(vlSelf->io_posit_i2_3) 
                                           >> 0xfU))
                                    : ((2U == (IData)(vlSelf->io_op))
                                        ? (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)) 
                                            & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)) 
                                           ^ ((IData)(vlSelf->io_posit_i1_3) 
                                              >> 0xfU))
                                        : ((3U == (IData)(vlSelf->io_op))
                                            ? (((IData)(vlSelf->io_posit_i1_3) 
                                                ^ (IData)(vlSelf->io_posit_i2_3)) 
                                               >> 0xfU)
                                            : ((4U 
                                                == (IData)(vlSelf->io_op)) 
                                               & (((IData)(vlSelf->io_posit_i1_3) 
                                                   ^ (IData)(vlSelf->io_posit_i2_3)) 
                                                  >> 0xfU))))))));
    bufp->chgCData(oldp+1248,(((5U == (IData)(vlSelf->io_op))
                                ? 0U : (IData)(vlSelf->__VdfgTmp_h1ec67085__0))),7);
    bufp->chgCData(oldp+1249,(((5U == (IData)(vlSelf->io_op))
                                ? 0U : (IData)(vlSelf->__VdfgTmp_h6fb595b3__0))),7);
    bufp->chgCData(oldp+1250,(((5U == (IData)(vlSelf->io_op))
                                ? 0U : (IData)(vlSelf->__VdfgTmp_h3716be99__0))),7);
    bufp->chgCData(oldp+1251,(((5U == (IData)(vlSelf->io_op))
                                ? 0U : (IData)(vlSelf->__VdfgTmp_hc6283759__0))),7);
    bufp->chgSData(oldp+1252,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_0),13);
    bufp->chgSData(oldp+1253,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_1),13);
    bufp->chgSData(oldp+1254,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_2),13);
    bufp->chgSData(oldp+1255,(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_3),13);
    bufp->chgSData(oldp+1256,(((0x1000U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_0))
                                ? ((1U & ((1U == (IData)(vlSelf->io_op))
                                           ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                               | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                               ? ((IData)(vlSelf->io_posit_i1_0) 
                                                  >> 0xfU)
                                               : ((IData)(vlSelf->io_posit_i2_0) 
                                                  >> 0xfU))
                                           : ((2U == (IData)(vlSelf->io_op))
                                               ? ((
                                                   (~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                                   & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                                  ^ 
                                                  ((IData)(vlSelf->io_posit_i1_0) 
                                                   >> 0xfU))
                                               : ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  (((IData)(vlSelf->io_posit_i1_0) 
                                                    ^ (IData)(vlSelf->io_posit_i2_0)) 
                                                   >> 0xfU)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op)) 
                                                   & (((IData)(vlSelf->io_posit_i1_0) 
                                                       ^ (IData)(vlSelf->io_posit_i2_0)) 
                                                      >> 0xfU))))))
                                    ? (0x8000U | (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T)))))
                                    : (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))
                                : 0U)),16);
    bufp->chgSData(oldp+1257,(((0x1000U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_1))
                                ? ((1U & ((1U == (IData)(vlSelf->io_op))
                                           ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0) 
                                               | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1))
                                               ? ((IData)(vlSelf->io_posit_i1_1) 
                                                  >> 0xfU)
                                               : ((IData)(vlSelf->io_posit_i2_1) 
                                                  >> 0xfU))
                                           : ((2U == (IData)(vlSelf->io_op))
                                               ? ((
                                                   (~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1)) 
                                                   & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)) 
                                                  ^ 
                                                  ((IData)(vlSelf->io_posit_i1_1) 
                                                   >> 0xfU))
                                               : ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  (((IData)(vlSelf->io_posit_i1_1) 
                                                    ^ (IData)(vlSelf->io_posit_i2_1)) 
                                                   >> 0xfU)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op)) 
                                                   & (((IData)(vlSelf->io_posit_i1_1) 
                                                       ^ (IData)(vlSelf->io_posit_i2_1)) 
                                                      >> 0xfU))))))
                                    ? (0x8000U | (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T)))))
                                    : (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T))
                                : 0U)),16);
    bufp->chgSData(oldp+1258,(((0x1000U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_2))
                                ? ((1U & ((1U == (IData)(vlSelf->io_op))
                                           ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1) 
                                               | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2))
                                               ? ((IData)(vlSelf->io_posit_i1_2) 
                                                  >> 0xfU)
                                               : ((IData)(vlSelf->io_posit_i2_2) 
                                                  >> 0xfU))
                                           : ((2U == (IData)(vlSelf->io_op))
                                               ? ((
                                                   (~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2)) 
                                                   & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)) 
                                                  ^ 
                                                  ((IData)(vlSelf->io_posit_i1_2) 
                                                   >> 0xfU))
                                               : ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  (((IData)(vlSelf->io_posit_i1_2) 
                                                    ^ (IData)(vlSelf->io_posit_i2_2)) 
                                                   >> 0xfU)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op)) 
                                                   & (((IData)(vlSelf->io_posit_i1_2) 
                                                       ^ (IData)(vlSelf->io_posit_i2_2)) 
                                                      >> 0xfU))))))
                                    ? (0x8000U | (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T)))))
                                    : (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T))
                                : 0U)),16);
    bufp->chgSData(oldp+1259,(((0x1000U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__encode__io_pir_frac_3))
                                ? ((1U & ((1U == (IData)(vlSelf->io_op))
                                           ? (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2) 
                                               | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3))
                                               ? ((IData)(vlSelf->io_posit_i1_3) 
                                                  >> 0xfU)
                                               : ((IData)(vlSelf->io_posit_i2_3) 
                                                  >> 0xfU))
                                           : ((2U == (IData)(vlSelf->io_op))
                                               ? ((
                                                   (~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)) 
                                                   & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)) 
                                                  ^ 
                                                  ((IData)(vlSelf->io_posit_i1_3) 
                                                   >> 0xfU))
                                               : ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  (((IData)(vlSelf->io_posit_i1_3) 
                                                    ^ (IData)(vlSelf->io_posit_i2_3)) 
                                                   >> 0xfU)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op)) 
                                                   & (((IData)(vlSelf->io_posit_i1_3) 
                                                       ^ (IData)(vlSelf->io_posit_i2_3)) 
                                                      >> 0xfU))))))
                                    ? (0x8000U | (0x7fffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T)))))
                                    : (IData)(vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T))
                                : 0U)),16);
    bufp->chgQData(oldp+1260,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i),44);
    bufp->chgCData(oldp+1262,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount),4);
    bufp->chgQData(oldp+1263,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o),44);
    bufp->chgQData(oldp+1265,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i),44);
    bufp->chgCData(oldp+1267,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount),4);
    bufp->chgQData(oldp+1268,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o),44);
    bufp->chgQData(oldp+1270,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i),44);
    bufp->chgCData(oldp+1272,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount),4);
    bufp->chgQData(oldp+1273,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o),44);
    bufp->chgQData(oldp+1275,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i),44);
    bufp->chgCData(oldp+1277,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount),4);
    bufp->chgQData(oldp+1278,(vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o),44);
    bufp->chgCData(oldp+1280,(((5U == (IData)(vlSelf->io_op))
                                ? ((1U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                    ? (0x7fU & (IData)(vlSelf->__VdfgTmp_hffa0ba97__0))
                                    : 0U) : 0U)),7);
    bufp->chgSData(oldp+1281,(((5U == (IData)(vlSelf->io_op))
                                ? ((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                               >> 0xdU)) 
                                   | (0U != (0x1fffU 
                                             & vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o)))
                                : 0U)),13);
    bufp->chgSData(oldp+1282,((((5U == (IData)(vlSelf->io_op)) 
                                & (vlSelf->PvuTop__DOT__frac_norm__DOT___shifter_io_result_o 
                                   >> 0x19U)) ? (0x7fffU 
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
    bufp->chgQData(oldp+1283,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i),44);
    bufp->chgCData(oldp+1285,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount),4);
    bufp->chgQData(oldp+1286,(vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o),44);
    bufp->chgCData(oldp+1288,(((1U & vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                ? (IData)(vlSelf->__VdfgTmp_hffa0ba97__0)
                                : 0U)),8);
    bufp->chgBit(oldp+1289,((1U & (~ vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1290,(vlSelf->PvuTop__DOT__frac_norm__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgCData(oldp+1291,(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_0),7);
    bufp->chgCData(oldp+1292,(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_1),7);
    bufp->chgCData(oldp+1293,(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_2),7);
    bufp->chgCData(oldp+1294,(vlSelf->PvuTop__DOT___frac_norm_1_io_exp_adjust_3),7);
    bufp->chgSData(oldp+1295,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                          ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter__DOT___temp_results_0_T_2) 
                                             << 1U)
                                          : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter__DOT___temp_results_0_T_2)))),13);
    bufp->chgSData(oldp+1296,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                          ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_1__DOT___temp_results_0_T_2) 
                                             << 1U)
                                          : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_1__DOT___temp_results_0_T_2)))),13);
    bufp->chgSData(oldp+1297,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                          ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_2__DOT___temp_results_0_T_2) 
                                             << 1U)
                                          : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_2__DOT___temp_results_0_T_2)))),13);
    bufp->chgSData(oldp+1298,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                          ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_3__DOT___temp_results_0_T_2) 
                                             << 1U)
                                          : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_3__DOT___temp_results_0_T_2)))),13);
    bufp->chgCData(oldp+1299,((0xfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+1300,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+1301,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+1302,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgCData(oldp+1304,((0xfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+1305,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+1306,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+1307,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgCData(oldp+1309,((0xfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+1310,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+1311,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+1312,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgCData(oldp+1314,((0xfU & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))),4);
    bufp->chgBit(oldp+1315,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgSData(oldp+1316,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),16);
    bufp->chgQData(oldp+1317,(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes),64);
    bufp->chgSData(oldp+1319,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                          ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter__DOT___temp_results_0_T_2) 
                                             << 1U)
                                          : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter__DOT___temp_results_0_T_2)))),12);
    bufp->chgSData(oldp+1320,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                          ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_1__DOT___temp_results_0_T_2) 
                                             << 1U)
                                          : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_1__DOT___temp_results_0_T_2)))),12);
    bufp->chgSData(oldp+1321,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                          ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_2__DOT___temp_results_0_T_2) 
                                             << 1U)
                                          : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_2__DOT___temp_results_0_T_2)))),12);
    bufp->chgSData(oldp+1322,((0xfffU & ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes))
                                          ? ((IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_3__DOT___temp_results_0_T_2) 
                                             << 1U)
                                          : (IData)(vlSelf->PvuTop__DOT__frac_norm_1__DOT__shifter_3__DOT___temp_results_0_T_2)))),12);
    bufp->chgCData(oldp+1323,(((1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                ? (IData)(vlSelf->PvuTop__DOT__frac_norm_2__DOT____VdfgTmp_h2de102ef__0)
                                : 0U)),8);
    bufp->chgCData(oldp+1324,(((1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                ? (IData)(vlSelf->PvuTop__DOT__frac_norm_2__DOT____VdfgTmp_h2de102ef__0)
                                : 0U)),8);
    bufp->chgCData(oldp+1325,(((1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                ? (IData)(vlSelf->PvuTop__DOT__frac_norm_2__DOT____VdfgTmp_h2de102ef__0)
                                : 0U)),8);
    bufp->chgCData(oldp+1326,(((1U & vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                ? (IData)(vlSelf->PvuTop__DOT__frac_norm_2__DOT____VdfgTmp_h2de102ef__0)
                                : 0U)),8);
    bufp->chgSData(oldp+1327,(((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_io_result_o 
                                           >> 0xdU)) 
                               | (0U != (0x1fffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_io_result_o)))),13);
    bufp->chgSData(oldp+1328,(((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_1_io_result_o 
                                           >> 0xdU)) 
                               | (0U != (0x1fffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_1_io_result_o)))),13);
    bufp->chgSData(oldp+1329,(((0x1ffeU & (vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_2_io_result_o 
                                           >> 0xdU)) 
                               | (0U != (0x1fffU & vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_2_io_result_o)))),13);
    bufp->chgBit(oldp+1330,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1331,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+1332,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1333,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+1334,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1335,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+1336,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+1337,(vlSelf->PvuTop__DOT__frac_norm_2__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgIData(oldp+1338,(vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_io_result_o),26);
    bufp->chgIData(oldp+1339,(vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_1_io_result_o),26);
    bufp->chgIData(oldp+1340,(vlSelf->PvuTop__DOT__frac_norm_2__DOT___shifter_2_io_result_o),26);
    bufp->chgBit(oldp+1341,((1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                    & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)) 
                                   ^ ((IData)(vlSelf->io_posit_i1_0) 
                                      >> 0xfU)))));
    bufp->chgBit(oldp+1342,((1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1)) 
                                    & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)) 
                                   ^ ((IData)(vlSelf->io_posit_i1_1) 
                                      >> 0xfU)))));
    bufp->chgBit(oldp+1343,((1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2)) 
                                    & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)) 
                                   ^ ((IData)(vlSelf->io_posit_i1_2) 
                                      >> 0xfU)))));
    bufp->chgBit(oldp+1344,((1U & (((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)) 
                                    & (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)) 
                                   ^ ((IData)(vlSelf->io_posit_i1_3) 
                                      >> 0xfU)))));
    bufp->chgCData(oldp+1345,((0x7fU & ((1U & ((~ ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum) 
                                                   >> 0xcU)) 
                                               | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)))
                                         ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0)
                                         : ((IData)(1U) 
                                            + (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0))))),7);
    bufp->chgCData(oldp+1346,((0x7fU & ((1U & ((~ ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_1) 
                                                   >> 0xcU)) 
                                               | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)))
                                         ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1)
                                         : ((IData)(1U) 
                                            + (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1))))),7);
    bufp->chgCData(oldp+1347,((0x7fU & ((1U & ((~ ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_2) 
                                                   >> 0xcU)) 
                                               | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)))
                                         ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2)
                                         : ((IData)(1U) 
                                            + (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2))))),7);
    bufp->chgCData(oldp+1348,((0x7fU & ((1U & ((~ ((IData)(vlSelf->PvuTop__DOT__add__DOT__sum_3) 
                                                   >> 0xcU)) 
                                               | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)))
                                         ? (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3)
                                         : ((IData)(1U) 
                                            + (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3))))),7);
    bufp->chgSData(oldp+1349,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                ? (IData)(vlSelf->__VdfgTmp_h5b3a16c4__0)
                                : (IData)(vlSelf->__VdfgTmp_h2299343e__0))),12);
    bufp->chgSData(oldp+1350,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                ? (IData)(vlSelf->__VdfgTmp_h64874eba__0)
                                : (IData)(vlSelf->__VdfgTmp_h87d0ba2c__0))),12);
    bufp->chgSData(oldp+1351,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                ? (IData)(vlSelf->__VdfgTmp_h085a2b98__0)
                                : (IData)(vlSelf->__VdfgTmp_h79bf5980__0))),12);
    bufp->chgSData(oldp+1352,(((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                ? (IData)(vlSelf->__VdfgTmp_hcba88845__0)
                                : (IData)(vlSelf->__VdfgTmp_h980bc3a7__0))),12);
    bufp->chgIData(oldp+1353,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum))
                                ? 0U : (0x3ffffffU 
                                        & ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0))) 
                                           + ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                               & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0 
                                                  & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0 
                                                     & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                                        & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h505784c4__0) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h4c64d241__0 
                                                           | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h8444d1ae__0) 
                                                          & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd4782908__0))))))))),26);
    bufp->chgIData(oldp+1354,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_1))
                                ? 0U : (0x3ffffffU 
                                        & ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0))) 
                                           + ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                               & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0 
                                                  & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0 
                                                     & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                                        & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h7acef19d__0) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd548faa5__0 
                                                           | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h95c4cb47__0) 
                                                          & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h97c227e4__0))))))))),26);
    bufp->chgIData(oldp+1355,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_2))
                                ? 0U : (0x3ffffffU 
                                        & ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0))) 
                                           + ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                               & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0 
                                                  & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0 
                                                     & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                                        & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h43f2123a__0) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h17ee467a__0 
                                                           | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h82e80ff0__0) 
                                                          & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hb60bfffe__0))))))))),26);
    bufp->chgIData(oldp+1356,(((0x80U & (IData)(vlSymsp->TOP__PvuTop__DOT__mul.__PVT__sum_3))
                                ? 0U : (0x3ffffffU 
                                        & ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                            ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                               ^ (vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                                  ^ vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0))) 
                                           + ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                               & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                                              | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0 
                                                  & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                                 | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0 
                                                     & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0) 
                                                    | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                                        & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h456b2780__0) 
                                                       | ((vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_h677abb95__0 
                                                           | vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hd573abef__0) 
                                                          & vlSymsp->TOP__PvuTop__DOT__mul.__VdfgTmp_hc69fe621__0))))))))),26);
    bufp->chgCData(oldp+1357,(((0x80U & (((0x80U & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0) 
                                            << 1U)) 
                                          | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0)) 
                                         + ((0x80U 
                                             & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0) 
                                                << 1U)) 
                                            | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0))))
                                ? 0x3fU : (0x7fU & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0) 
                                            + (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0))))),7);
    bufp->chgCData(oldp+1358,(((0x80U & (((0x80U & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1) 
                                            << 1U)) 
                                          | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1)) 
                                         + ((0x80U 
                                             & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1) 
                                                << 1U)) 
                                            | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1))))
                                ? 0x3fU : (0x7fU & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1) 
                                            + (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1))))),7);
    bufp->chgCData(oldp+1359,(((0x80U & (((0x80U & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2) 
                                            << 1U)) 
                                          | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2)) 
                                         + ((0x80U 
                                             & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2) 
                                                << 1U)) 
                                            | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2))))
                                ? 0x3fU : (0x7fU & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2) 
                                            + (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2))))),7);
    bufp->chgCData(oldp+1360,(((0x80U & (((0x80U & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3) 
                                            << 1U)) 
                                          | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3)) 
                                         + ((0x80U 
                                             & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3) 
                                                << 1U)) 
                                            | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3))))
                                ? 0x3fU : (0x7fU & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3) 
                                            + (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3))))),7);
    bufp->chgIData(oldp+1361,(((0x80U & (((0x80U & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0) 
                                            << 1U)) 
                                          | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0)) 
                                         + ((0x80U 
                                             & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0) 
                                                << 1U)) 
                                            | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0))))
                                ? 0U : (0x3ffffffU 
                                        & ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                            ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                 & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                                | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                    | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                               ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                    ^ 
                                                    (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))) 
                                                  ^ 
                                                  ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                                | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))))))) 
                                           + ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                               & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))) 
                                              | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                     ^ 
                                                     (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                       ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))) 
                                                 | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                       ^ 
                                                       (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6))) 
                                                     & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                                     | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))))) 
                                                    | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                         ^ 
                                                         (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                          ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                                        & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                           ^ 
                                                           (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))) 
                                                       | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2)) 
                                                           | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1) 
                                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_1 
                                                                  | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                                 & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_2))) 
                                                          & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                             | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4 
                                                                 & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                                | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5 
                                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6) 
                                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_5) 
                                                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_3 
                                                                          | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_4) 
                                                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier__DOT___genProds_io_partial_prods_6)))))))))))))),26);
    bufp->chgIData(oldp+1362,(((0x80U & (((0x80U & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1) 
                                            << 1U)) 
                                          | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1)) 
                                         + ((0x80U 
                                             & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1) 
                                                << 1U)) 
                                            | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1))))
                                ? 0U : (0x3ffffffU 
                                        & ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                            ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                 & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                                | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                    | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                               ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                    ^ 
                                                    (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))) 
                                                  ^ 
                                                  ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                                | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))))))) 
                                           + ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                               & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))) 
                                              | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                     ^ 
                                                     (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                       ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))) 
                                                 | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                       ^ 
                                                       (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6))) 
                                                     & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                                     | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))))) 
                                                    | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                         ^ 
                                                         (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                          ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                                        & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                           ^ 
                                                           (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))) 
                                                       | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2)) 
                                                           | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1) 
                                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_1 
                                                                  | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                                 & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_2))) 
                                                          & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                             | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4 
                                                                 & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                                | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5 
                                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6) 
                                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_5) 
                                                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_3 
                                                                          | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_4) 
                                                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_1__DOT___genProds_io_partial_prods_6)))))))))))))),26);
    bufp->chgIData(oldp+1363,(((0x80U & (((0x80U & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2) 
                                            << 1U)) 
                                          | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2)) 
                                         + ((0x80U 
                                             & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2) 
                                                << 1U)) 
                                            | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2))))
                                ? 0U : (0x3ffffffU 
                                        & ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                            ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                 & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                                | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                    | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                               ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                    ^ 
                                                    (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))) 
                                                  ^ 
                                                  ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                                | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))))))) 
                                           + ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                               & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))) 
                                              | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                     ^ 
                                                     (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                       ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))) 
                                                 | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                       ^ 
                                                       (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6))) 
                                                     & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                                     | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))))) 
                                                    | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                         ^ 
                                                         (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                          ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                                        & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                           ^ 
                                                           (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))) 
                                                       | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2)) 
                                                           | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1) 
                                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_1 
                                                                  | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                                 & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_2))) 
                                                          & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                             | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4 
                                                                 & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                                | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5 
                                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6) 
                                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_5) 
                                                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_3 
                                                                          | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_4) 
                                                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_2__DOT___genProds_io_partial_prods_6)))))))))))))),26);
    bufp->chgIData(oldp+1364,(((0x80U & (((0x80U & 
                                           ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3) 
                                            << 1U)) 
                                          | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3)) 
                                         + ((0x80U 
                                             & ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3) 
                                                << 1U)) 
                                            | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3))))
                                ? 0U : (0x3ffffffU 
                                        & ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                             ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                            ^ ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                 & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                                | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                    | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                               ^ ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                   ^ 
                                                   (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                    ^ 
                                                    (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                     ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))) 
                                                  ^ 
                                                  ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                          & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                                         | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                             & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                            | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                                | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))))))) 
                                           + ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                ^ (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                   ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                               & (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                   & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                                  | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                      | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                     & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))) 
                                              | (((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                       | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                      & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                     ^ 
                                                     (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                       ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))) 
                                                 | (((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                      ^ 
                                                      (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                       ^ 
                                                       (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                        ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6))) 
                                                     & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                        | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                            & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                           | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                                  & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                                 | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                                     | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))))) 
                                                    | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                         ^ 
                                                         (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                          ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                                        & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                           ^ 
                                                           (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))) 
                                                       | ((((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                            ^ 
                                                            (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                             ^ vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2)) 
                                                           | (((IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                                               & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1) 
                                                              | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_1 
                                                                  | (IData)(vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                                                 & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_2))) 
                                                          & ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                              & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                             | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4 
                                                                 & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                                | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5 
                                                                    & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6) 
                                                                   | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                                       & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_5) 
                                                                      | ((vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_3 
                                                                          | vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_4) 
                                                                         & vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul.__PVT__radix4BoothMultiplier_3__DOT___genProds_io_partial_prods_6)))))))))))))),26);
    bufp->chgCData(oldp+1365,((0xffU & (((0x80U & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0) 
                                                   << 1U)) 
                                         | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_0)) 
                                        + ((0x80U & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0) 
                                             << 1U)) 
                                           | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_0))))),8);
    bufp->chgCData(oldp+1366,((0xffU & (((0x80U & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1) 
                                                   << 1U)) 
                                         | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_1)) 
                                        + ((0x80U & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1) 
                                             << 1U)) 
                                           | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_1))))),8);
    bufp->chgCData(oldp+1367,((0xffU & (((0x80U & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2) 
                                                   << 1U)) 
                                         | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_2)) 
                                        + ((0x80U & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2) 
                                             << 1U)) 
                                           | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_2))))),8);
    bufp->chgCData(oldp+1368,((0xffU & (((0x80U & ((IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3) 
                                                   << 1U)) 
                                         | (IData)(vlSelf->PvuTop__DOT___decode1_io_Exp_3)) 
                                        + ((0x80U & 
                                            ((IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3) 
                                             << 1U)) 
                                           | (IData)(vlSelf->PvuTop__DOT___decode2_io_Exp_3))))),8);
    bufp->chgIData(oldp+1369,(((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_0) 
                               << 0xcU)),24);
    bufp->chgIData(oldp+1370,(((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_1) 
                               << 0xcU)),24);
    bufp->chgIData(oldp+1371,(((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_2) 
                               << 0xcU)),24);
    bufp->chgIData(oldp+1372,(((IData)(vlSelf->PvuTop__DOT___decode1_io_Frac_3) 
                               << 0xcU)),24);
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
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x16U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x17U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x18U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x19U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1dU] = 0U;
}
