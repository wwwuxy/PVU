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
        VL_FWRITEF(0x80000002U,"Module Mul:\n\nsum_frac = %b\ncarry = %b\nfrac = %b\n",
                   56,vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor->__PVT__io_sum_o,
                   56,vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor->__PVT__io_carry_o,
                   56,(0xffffffffffffffULL & (vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor->__PVT__io_carry_o 
                                              + vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor->__PVT__io_sum_o)));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Module Radix4BoothMultiplier\na: %b\nb: %b\ngenProds.io.partial_prods[0] = %b\ngenProds.io.partial_prods[1] = %b\ngenProds.io.partial_prods[2] = %b\ngenProds.io.partial_prods[3] = %b\ngenProds.io.partial_prods[4] = %b\ngenProds.io.partial_prods[5] = %b\ngenProds.io.partial_prods[6] = %b\ngenProds.io.partial_prods[7] = %b\ngenProds.io.partial_prods[ 8] = %b\ngenProds.io.partial_prods[ 9] = %b\ngenProds.io.partial_prods[10] = %b\ngenProds.io.partial_prods[11] = %b\ngenProds.io.partial_prods[12] = %b\n",
                   28,vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac,
                   28,vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac,
                   56,(0xffffffffffffffULL & (((QData)((IData)(
                                                               ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                                                                 << 0x1aU) 
                                                                | (IData)(
                                                                          ((((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                             << 0x38U) 
                                                                            | (QData)((IData)(
                                                                                (((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                                << 0x1fU) 
                                                                                | ((0x60000000U 
                                                                                & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                                                << 0x1dU)) 
                                                                                | vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod))))) 
                                                                           >> 0x20U))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                  << 0x38U) 
                                                                 | (QData)((IData)(
                                                                                (((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                                << 0x1fU) 
                                                                                | ((0x60000000U 
                                                                                & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                                                << 0x1dU)) 
                                                                                | vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod))))))))),
                   56,(0xffffffffffffffULL & (((QData)((IData)(
                                                               ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                                 << 0x14U) 
                                                                | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                                   << 0x12U)))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0x1000000U 
                                                                   | ((0x800000U 
                                                                       & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                          << 0x17U)) 
                                                                      | (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                                                                         >> 6U))))) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                                                                      << 0x1aU) 
                                                                     | (IData)(
                                                                               ((((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                                << 0x38U) 
                                                                                | (QData)((IData)(
                                                                                (((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                                << 0x1fU) 
                                                                                | ((0x60000000U 
                                                                                & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                                                << 0x1dU)) 
                                                                                | vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod))))) 
                                                                                >> 0x20U))))) 
                                                    >> 0x18U)))),
                   56,(0xffffffffffffffULL & (((QData)((IData)(
                                                               ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                                 << 0xeU) 
                                                                | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0x40000U 
                                                                   | ((0x20000U 
                                                                       & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                                          << 0x11U)) 
                                                                      | (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                                         >> 0xcU))))) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
                                                                      << 0x14U) 
                                                                     | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                                        << 0x12U)))) 
                                                    >> 0x10U)))),
                   56,(0xffffffffffffffULL & (((QData)((IData)(
                                                               (0x1000U 
                                                                | ((0x800U 
                                                                    & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                                       << 0xbU)) 
                                                                   | (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                                      >> 0x12U))))) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                                                   << 0xeU) 
                                                                  | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                     << 0xcU)))) 
                                                 >> 8U))),
                   56,(0xffffffffffffffULL & (((QData)((IData)(
                                                               (0x40U 
                                                                | ((0x20U 
                                                                    & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                                       << 5U)) 
                                                                   | (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                                      >> 0x18U))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                                  << 8U) 
                                                                 | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                                    << 6U)))))),
                   56,(0xffffffffffffffULL & (((QData)((IData)(
                                                               (1U 
                                                                | ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                                    << 0x1cU) 
                                                                   | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                                      << 0x1aU))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                                    << 0x1fU) 
                                                                   | ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                                                       << 2U) 
                                                                      | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))))) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    (0x40U 
                                                                     | ((0x20U 
                                                                         & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                                            << 5U)) 
                                                                        | (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                                                           >> 0x18U))))) 
                                                    >> 0x18U)))),
                   56,(0xffffffffffffffULL & (((QData)((IData)(
                                                               ((((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                  ^ 
                                                                  (((0U 
                                                                     != 
                                                                     (7U 
                                                                      & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                         >> 0xdU))) 
                                                                    & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                       | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                          & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                    ? vlSelf->__VdfgTmp_h35f5b851__0
                                                                    : 
                                                                   (((~ 
                                                                      ((0U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                            >> 0xdU))) 
                                                                       | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                     & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                     ? 
                                                                    (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                     << 1U)
                                                                     : 0U))) 
                                                                 << 0x16U) 
                                                                | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0x14U)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0x4000000U 
                                                                   | ((0x2000000U 
                                                                       & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                                          << 0x19U)) 
                                                                      | (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                                         >> 4U))))) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     | ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                                         << 0x1cU) 
                                                                        | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                                           << 0x1aU))))) 
                                                    >> 0x10U)))),
                   56,(0xffffffffffffffULL & (((QData)((IData)(
                                                               (0x100000U 
                                                                | ((0x80000U 
                                                                    & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                                       << 0x13U)) 
                                                                   | (0x7ffffU 
                                                                      & (((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                          ^ 
                                                                          (((0U 
                                                                             != 
                                                                             (7U 
                                                                              & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                                >> 0xdU))) 
                                                                            & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                               | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                            ? vlSelf->__VdfgTmp_h35f5b851__0
                                                                            : 
                                                                           (((~ 
                                                                              ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                                >> 0xdU))) 
                                                                               | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                             & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                             ? 
                                                                            (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                             << 1U)
                                                                             : 0U))) 
                                                                         >> 0xaU)))))) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 ((((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                    ^ 
                                                                    (((0U 
                                                                       != 
                                                                       (7U 
                                                                        & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                           >> 0xdU))) 
                                                                      & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                         | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                            & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                      ? vlSelf->__VdfgTmp_h35f5b851__0
                                                                      : 
                                                                     (((~ 
                                                                        ((0U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                              >> 0xdU))) 
                                                                         | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                       & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                       ? 
                                                                      (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                       << 1U)
                                                                       : 0U))) 
                                                                   << 0x16U) 
                                                                  | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                     << 0x14U)))) 
                                                 >> 8U))),
                   56,(0xffffffffffffffULL & (((QData)((IData)(
                                                               (0x4000U 
                                                                | ((0x2000U 
                                                                    & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                                       << 0xdU)) 
                                                                   | (0x1fffU 
                                                                      & (((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                                                          ^ 
                                                                          (((0U 
                                                                             != 
                                                                             (7U 
                                                                              & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                                >> 0xfU))) 
                                                                            & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                                                               | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                            ? vlSelf->__VdfgTmp_h35f5b851__0
                                                                            : 
                                                                           (((~ 
                                                                              ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                                >> 0xfU))) 
                                                                               | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                                                             & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                             ? 
                                                                            (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                             << 1U)
                                                                             : 0U))) 
                                                                         >> 0x10U)))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                                                   ^ 
                                                                   (((0U 
                                                                      != 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                          >> 0xfU))) 
                                                                     & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                                                        | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                           & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                     ? vlSelf->__VdfgTmp_h35f5b851__0
                                                                     : 
                                                                    (((~ 
                                                                       ((0U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                             >> 0xfU))) 
                                                                        | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                                                      & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                      ? 
                                                                     (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                      << 1U)
                                                                      : 0U))) 
                                                                  << 0x10U) 
                                                                 | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                                    << 0xeU)))))),
                   56,(0xffffffffffffffULL & (((QData)((IData)(
                                                               (0x100U 
                                                                | ((0x80U 
                                                                    & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                                       << 7U)) 
                                                                   | (0x7fU 
                                                                      & (((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                                                          ^ 
                                                                          (((0U 
                                                                             != 
                                                                             (7U 
                                                                              & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                                >> 0x11U))) 
                                                                            & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                                                               | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                            ? vlSelf->__VdfgTmp_h35f5b851__0
                                                                            : 
                                                                           (((~ 
                                                                              ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                                >> 0x11U))) 
                                                                               | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                                                             & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                             ? 
                                                                            (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                             << 1U)
                                                                             : 0U))) 
                                                                         >> 0x16U)))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                                                     ^ 
                                                                     (((0U 
                                                                        != 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                            >> 0x11U))) 
                                                                       & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                                                          | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                             & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                       ? vlSelf->__VdfgTmp_h35f5b851__0
                                                                       : 
                                                                      (((~ 
                                                                         ((0U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                               >> 0x11U))) 
                                                                          | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                                                        & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                        ? 
                                                                       (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                        << 1U)
                                                                        : 0U))) 
                                                                    << 0xaU) 
                                                                   | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                                      << 8U)))) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    (0x4000U 
                                                                     | ((0x2000U 
                                                                         & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                                            << 0xdU)) 
                                                                        | (0x1fffU 
                                                                           & (((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                                                               ^ 
                                                                               (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                                >> 0xfU))) 
                                                                                & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                                                                | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                                 ? vlSelf->__VdfgTmp_h35f5b851__0
                                                                                 : 
                                                                                (((~ 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                                >> 0xfU))) 
                                                                                | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                                                                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                                 ? 
                                                                                (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                                << 1U)
                                                                                 : 0U))) 
                                                                              >> 0x10U)))))) 
                                                    >> 0x18U)))),
                   56,(0xffffffffffffffULL & (((QData)((IData)(
                                                               (4U 
                                                                | ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                                    << 0x1eU) 
                                                                   | (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                       << 0x1cU) 
                                                                      | ((2U 
                                                                          & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & (((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                                                                ^ 
                                                                                (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                                >> 0x13U))) 
                                                                                & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                                                                | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                                 ? vlSelf->__VdfgTmp_h35f5b851__0
                                                                                 : 
                                                                                (((~ 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                                >> 0x13U))) 
                                                                                | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                                                                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                                 ? 
                                                                                (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                                << 1U)
                                                                                 : 0U))) 
                                                                               >> 0x1cU)))))))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  ((((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                                                     ^ 
                                                                     (((0U 
                                                                        != 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                            >> 0x13U))) 
                                                                       & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                                                          | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                             & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                       ? vlSelf->__VdfgTmp_h35f5b851__0
                                                                       : 
                                                                      (((~ 
                                                                         ((0U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                               >> 0x13U))) 
                                                                          | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                                                        & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                        ? 
                                                                       (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                        << 1U)
                                                                        : 0U))) 
                                                                    << 4U) 
                                                                   | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                                      << 2U)))) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    (0x100U 
                                                                     | ((0x80U 
                                                                         & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                                            << 7U)) 
                                                                        | (0x7fU 
                                                                           & (((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                                                               ^ 
                                                                               (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                                >> 0x11U))) 
                                                                                & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                                                                | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                                 ? vlSelf->__VdfgTmp_h35f5b851__0
                                                                                 : 
                                                                                (((~ 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                                >> 0x11U))) 
                                                                                | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                                                                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                                 ? 
                                                                                (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                                << 1U)
                                                                                 : 0U))) 
                                                                              >> 0x16U)))))) 
                                                    >> 0x10U)))),
                   56,(0xffffffffffffffULL & (((QData)((IData)(
                                                               (0x10000000U 
                                                                | ((0x8000000U 
                                                                    & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                                       << 0x1bU)) 
                                                                   | (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                                      >> 2U))))) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 (4U 
                                                                  | ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                                                      << 0x1eU) 
                                                                     | (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                         << 0x1cU) 
                                                                        | ((2U 
                                                                            & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & (((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                                                                ^ 
                                                                                (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                                >> 0x13U))) 
                                                                                & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                                                                | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                                 ? vlSelf->__VdfgTmp_h35f5b851__0
                                                                                 : 
                                                                                (((~ 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                                                >> 0x13U))) 
                                                                                | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                                                                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                                 ? 
                                                                                (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                                                                                << 1U)
                                                                                 : 0U))) 
                                                                                >> 0x1cU)))))))) 
                                                 >> 8U))),
                   56,(0xffffffffffffffULL & (((QData)((IData)(
                                                               (0x400000U 
                                                                | ((0x200000U 
                                                                    & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                                       << 0x15U)) 
                                                                   | (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                                      >> 8U))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                                    << 0x16U)))))));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[13] = %b\ngenProds.io.partial_prods[14] = %b\nsum_o = %b\ncarry_o = %b\n",
                   56,(0xffffffffffffffULL & (((QData)((IData)(
                                                               ((0x8000U 
                                                                 & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                                    << 0xfU)) 
                                                                | (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                                   >> 0xeU)))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                                    << 0x12U) 
                                                                   | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                                      << 0x10U)))) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    (0x400000U 
                                                                     | ((0x200000U 
                                                                         & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                                            << 0x15U)) 
                                                                        | (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                                                           >> 8U))))) 
                                                    >> 0x18U)))),
                   56,(0xffffffffffffffULL & (((QData)((IData)(
                                                               ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                                << 0xaU))) 
                                               << 0x10U) 
                                              | ((QData)((IData)(
                                                                 ((0x8000U 
                                                                   & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                                      << 0xfU)) 
                                                                  | (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                                                     >> 0xeU)))) 
                                                 >> 0x10U))),
                   56,vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor->__PVT__io_sum_o,
                   56,vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor->__PVT__io_carry_o);
    }
}
