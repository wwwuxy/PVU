// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Mul.h"
#include "VPvuTop__Syms.h"

VL_INLINE_OPT void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0(VPvuTop_Mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__0\n"); );
    // Body
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xdU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xdU))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 1U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 1U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 1U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 1U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 3U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 3U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 3U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 3U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 5U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 5U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 5U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 5U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 7U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 7U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 7U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 7U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 9U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 9U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 9U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 9U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xbU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xbU))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xfU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xfU))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x11U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x11U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x13U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x13U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x15U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x15U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x17U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x17U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x19U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x19U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x19U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x19U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x1bU))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x1bU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x1bU))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x1bU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x1bU))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x1bU))));
    vlSelf->__VdfgTmp_he79a7065__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 1U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 1U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xdU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 3U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 3U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 5U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 5U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 7U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 7U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 9U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 9U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xfU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x11U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x13U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x15U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x17U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x19U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x19U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xbU))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_he79a7065__0) 
           & ((2U == (3U & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)) 
              | (3U == (3U & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 1U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0xdU))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 3U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 5U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 7U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 9U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0xfU))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x11U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0x13U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x13U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0x15U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x15U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0x17U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0x17U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 0x17U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0x17U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x17U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0x19U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0x19U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 0x19U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0x19U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x19U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0xbU))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
}

VL_INLINE_OPT void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1(VPvuTop_Mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1\n"); );
    // Init
    QData/*59:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    QData/*59:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    QData/*59:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    // Body
    vlSelf->__PVT__sum = (0x1ffU & (((0x100U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp) 
                                                << 1U)) 
                                     | (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp)) 
                                    + ((0x100U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp) 
                                                  << 1U)) 
                                       | (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0x1bU))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4) 
                                         | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                            & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0x1bU))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT__tempProd 
        = (((0U != (3U & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)) 
            & ((1U == (3U & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)) 
               | ((2U != (3U & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                  & (3U == (3U & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((IData)(vlSelf->__VdfgTmp_he79a7065__0) 
                & (2U == (3U & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 1U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                      | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                         & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 1U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0xdU))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                        | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                           & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0xdU))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 3U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                      | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                         & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 3U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 5U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                      | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                         & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 5U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 7U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                      | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                         & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 7U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 9U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                      | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                         & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 9U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0xfU))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                        | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                           & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0xfU))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0x11U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                         | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                            & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0x11U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0x13U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                         | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                            & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0x13U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0x15U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                         | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                            & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0x15U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0x17U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                         | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                            & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0x17U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0x19U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                         | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                            & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0x19U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0xbU))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                        | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                           & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0xbU))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdLast_io_partial_prod 
        = (0x7fffffffU & (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                             >> 0x1bU))) 
                               | ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x1bU))) 
                                  | ((2U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0x1bU))) 
                                     | (3U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x1bU))))))) 
                           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                            >> 0x1bU))) 
                              | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)))
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__tempProd));
    vlSelf->__VdfgTmp_h7ca64093__0 = (((QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + 
                                                            (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__tempProd))
                                                            : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__tempProd)))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__tempProd));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdLast_io_partial_prod)) 
            << 0x1cU) | (QData)((IData)(((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                         << 0x1aU))));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod)) 
            << 2U) | (QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod)) 
            << 4U) | (QData)((IData)(((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                      << 2U))));
    vlSelf->__VdfgTmp_hedaea100__0 = (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod)) 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod)) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod)) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_7_io_partial_prod)) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod)) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod)) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__VdfgTmp_h0026d2c7__0 = (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod)) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U))));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod)) 
            << 0x18U) | (QData)((IData)(((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                         << 0x16U))));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod)) 
            << 0x1aU) | (QData)((IData)(((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                         << 0x18U))));
    radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod)) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__VdfgTmp_hb896bbae__0 = ((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod)) 
                                      ^ (radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0));
    vlSelf->__VdfgTmp_haed430ce__0 = (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod)) 
                                       & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          | (QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod))) 
                                         & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0));
    vlSelf->__VdfgTmp_hb1778750__0 = (vlSelf->__VdfgTmp_h7ca64093__0 
                                      ^ (radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_h56f4338c__0 = ((vlSelf->__VdfgTmp_h7ca64093__0 
                                       & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | ((vlSelf->__VdfgTmp_h7ca64093__0 
                                                & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((vlSelf->__VdfgTmp_h7ca64093__0 
                                                   | radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                                  & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__VdfgTmp_h377cc8cc__0 = (vlSelf->__VdfgTmp_h0026d2c7__0 
                                      ^ (radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_h92268a6d__0 = ((vlSelf->__VdfgTmp_h0026d2c7__0 
                                       & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | ((vlSelf->__VdfgTmp_h0026d2c7__0 
                                                & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((vlSelf->__VdfgTmp_h0026d2c7__0 
                                                   | radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                                  & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__VdfgTmp_h36e39658__0 = (vlSelf->__VdfgTmp_hedaea100__0 
                                      ^ (radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_hee7afa9a__0 = ((vlSelf->__VdfgTmp_hedaea100__0 
                                       & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | ((vlSelf->__VdfgTmp_hedaea100__0 
                                                & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((vlSelf->__VdfgTmp_hedaea100__0 
                                                   | radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                                  & radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_hb1778750__0 & vlSelf->__VdfgTmp_h56f4338c__0) 
           | ((vlSelf->__VdfgTmp_h56f4338c__0 & vlSelf->__VdfgTmp_h377cc8cc__0) 
              | ((vlSelf->__VdfgTmp_h377cc8cc__0 & vlSelf->__VdfgTmp_h92268a6d__0) 
                 | ((vlSelf->__VdfgTmp_hb1778750__0 
                     & vlSelf->__VdfgTmp_h377cc8cc__0) 
                    | ((vlSelf->__VdfgTmp_hb1778750__0 
                        | vlSelf->__VdfgTmp_h56f4338c__0) 
                       & vlSelf->__VdfgTmp_h92268a6d__0)))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_hb1778750__0 ^ (vlSelf->__VdfgTmp_h56f4338c__0 
                                             ^ (vlSelf->__VdfgTmp_h377cc8cc__0 
                                                ^ vlSelf->__VdfgTmp_h92268a6d__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_hb896bbae__0 & vlSelf->__VdfgTmp_haed430ce__0) 
           | ((vlSelf->__VdfgTmp_haed430ce__0 & vlSelf->__VdfgTmp_h36e39658__0) 
              | ((vlSelf->__VdfgTmp_h36e39658__0 & vlSelf->__VdfgTmp_hee7afa9a__0) 
                 | ((vlSelf->__VdfgTmp_hb896bbae__0 
                     & vlSelf->__VdfgTmp_h36e39658__0) 
                    | ((vlSelf->__VdfgTmp_hb896bbae__0 
                        | vlSelf->__VdfgTmp_haed430ce__0) 
                       & vlSelf->__VdfgTmp_hee7afa9a__0)))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_hb896bbae__0 ^ (vlSelf->__VdfgTmp_haed430ce__0 
                                             ^ (vlSelf->__VdfgTmp_h36e39658__0 
                                                ^ vlSelf->__VdfgTmp_hee7afa9a__0)));
}

VL_INLINE_OPT void VPvuTop_Mul___nba_sequent__TOP__PvuTop__DOT__mul__0(VPvuTop_Mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_Mul___nba_sequent__TOP__PvuTop__DOT__mul__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"multiplier = %b\nsigns[0] = %b\npartial_prods[0] = %x\ncodes[1] = %b\ncodes[2] = %b\ncodes[3] = %b\ncodes[4] = %b\ncodes[5] = %b\ncodes[6] = %b\ncodes[7] = %b\ncodes[ 8] = %b\ncodes[ 9] = %b\ncodes[10] = %b\ncodes[11] = %b\ncodes[12] = %b\ncodes[13] = %b\n",
                   31,(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                       << 1U),1,(IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg),
                   60,(QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod)),
                   3,(7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 1U)),3,(7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                             >> 3U)),
                   3,(7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 5U)),3,(7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                             >> 7U)),
                   3,(7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 9U)),3,(7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                             >> 0xbU)),
                   3,(7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0xdU)),3,(7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xfU)),
                   3,(7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x11U)),3,(7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x13U)),
                   3,(7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x15U)),3,(7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x17U)),
                   3,(7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x19U)));
    }
}

VL_INLINE_OPT void VPvuTop_Mul___ico_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__0(VPvuTop_Mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_Mul___ico_sequent__TOP__PvuTop__DOT__dotproduct__DOT__mul__0\n"); );
    // Body
    vlSelf->io_pir_sign_o = ((vlSymsp->TOP.io_posit_i1_0 
                              ^ vlSymsp->TOP.io_posit_i2_0) 
                             >> 0x1fU);
}

VL_INLINE_OPT void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__0(VPvuTop_Mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__0\n"); );
    // Body
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xdU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xdU))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 1U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 1U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 1U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 1U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 3U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 3U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 3U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 3U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 5U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 5U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 5U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 5U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 7U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 7U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 7U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 7U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 9U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 9U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 9U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 9U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xbU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xbU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xdU))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xfU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xfU))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x11U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x11U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x13U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x13U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x15U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x15U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x17U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x17U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x19U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x19U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x19U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x19U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x1bU))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x1bU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x1bU))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x1bU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x1bU))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x1bU))));
    vlSelf->__VdfgTmp_he79a7065__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 1U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 1U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 3U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 3U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 5U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 5U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 7U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 7U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 9U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                  >> 9U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xbU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0xfU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x11U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x13U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x15U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x17U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                         >> 0x19U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x19U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0xdU))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_he79a7065__0) 
           & ((2U == (3U & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)) 
              | (3U == (3U & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 1U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 3U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 5U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 7U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 9U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0xbU))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0xfU))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x11U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0x13U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x13U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0x15U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x15U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0x17U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0x17U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 0x17U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0x17U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x17U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                             >> 0x19U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                               >> 0x19U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                    >> 0x19U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                      >> 0x19U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                            >> 0x19U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
}

VL_INLINE_OPT void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__1(VPvuTop_Mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__1\n"); );
    // Body
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0xdU))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                        | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                           & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0xdU))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0x1bU))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4) 
                                         | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                            & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0x1bU))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT__tempProd 
        = (((0U != (3U & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)) 
            & ((1U == (3U & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)) 
               | ((2U != (3U & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)) 
                  & (3U == (3U & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((IData)(vlSelf->__VdfgTmp_he79a7065__0) 
                & (2U == (3U & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 1U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                      | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                         & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 1U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 3U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                      | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                         & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 3U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 5U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                      | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                         & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 5U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 7U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                      | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                         & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 7U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 9U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                      | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                         & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 9U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0xbU))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                        | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                           & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0xbU))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0xfU))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                        | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                           & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0xfU))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0x11U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                         | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                            & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0x11U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0x13U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                         | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                            & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0x13U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0x15U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                         | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                            & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0x15U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0x17U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                         | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                            & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0x17U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__tempProd 
        = (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                          >> 0x19U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                         | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                            & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                  >> 0x19U))) | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                ? (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
                   << 1U) : 0U));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdLast_io_partial_prod 
        = (0x7fffffffU & (((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                             >> 0x1bU))) 
                               | ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x1bU))) 
                                  | ((2U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                   >> 0x1bU))) 
                                     | (3U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                                >> 0x1bU))))))) 
                           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
                                            >> 0x1bU))) 
                              | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)))
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__tempProd));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x7fffffffU & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)
                           ? ((IData)(1U) + (~ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__tempProd))
                           : vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__tempProd));
}
