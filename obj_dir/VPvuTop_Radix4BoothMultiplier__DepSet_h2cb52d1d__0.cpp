// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Radix4BoothMultiplier.h"
#include "VPvuTop__Syms.h"

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__0\n"); );
    // Body
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0xdU))));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0xdU))));
    vlSelf->__PVT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 1U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                  >> 1U))));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 1U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                  >> 1U))));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 3U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                  >> 3U))));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 3U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                  >> 3U))));
    vlSelf->__PVT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x1bU))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x1bU))));
    vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x1bU))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x1bU))));
    vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x1bU))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x1bU))));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 5U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                  >> 5U))));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 5U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                  >> 5U))));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 7U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                  >> 7U))));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 7U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                  >> 7U))));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 9U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                  >> 9U))));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 9U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                  >> 9U))));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0xbU))));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0xbU))));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0xfU))));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0xfU))));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x11U))));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x11U))));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x13U))));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x13U))));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x15U))));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x15U))));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x17U))));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x17U))));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x19U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x19U))));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x19U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x19U))));
    vlSelf->__VdfgTmp_hd6a46e59__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)))));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0xdU))));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 1U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                  >> 1U))));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 3U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                  >> 3U))));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x19U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x19U))));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 5U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                  >> 5U))));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 7U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                  >> 7U))));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 9U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                  >> 9U))));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0xfU))));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x11U))));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x13U))));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x15U))));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x17U))));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0xbU))));
    vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_hd6a46e59__0) 
           & ((2U == (3U & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)) 
              | (3U == (3U & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0))));
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                            >> 0xdU))) | (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                            >> 1U))) | (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                            >> 3U))) | (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                             >> 0x19U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0x19U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                    >> 0x19U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                      >> 0x19U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                            >> 0x19U))) | (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                            >> 5U))) | (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                            >> 7U))) | (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                            >> 9U))) | (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                            >> 0xfU))) | (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                            >> 0x11U))) | (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                      >> 0x13U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                            >> 0x13U))) | (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                      >> 0x15U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                            >> 0x15U))) | (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                             >> 0x17U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0x17U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                    >> 0x17U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                      >> 0x17U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                            >> 0x17U))) | (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                            >> 0xbU))) | (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__1(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__1\n"); );
    // Init
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    // Body
    vlSelf->__PVT__genProds__DOT___genProdLast_io_partial_prod 
        = (0x7fffffffU & ((- (IData)(((~ ((0U == (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                     >> 0x1bU))) 
                                          | ((1U == 
                                              (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                >> 0x1bU))) 
                                             | ((2U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                     >> 0x1bU))) 
                                                | (3U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                       >> 0x1bU))))))) 
                                      & ((4U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                    >> 0x1bU))) 
                                         | (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                            >> 0x1bU))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0x1bU))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                     << 1U) : 0U))));
    vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0 
        = (((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
            << 0x21U) | (((QData)((IData)((3U & (- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                          << 0x1fU) | (QData)((IData)(
                                                      (0x7fffffffU 
                                                       & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != 
                                                             (3U 
                                                              & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)) 
                                                            & ((1U 
                                                                == 
                                                                (3U 
                                                                 & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)) 
                                                               | ((2U 
                                                                   != 
                                                                   (3U 
                                                                    & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)) 
                                                                  & (3U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)))))
                                                            ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                                                            : 
                                                           (((IData)(vlSelf->__VdfgTmp_hd6a46e59__0) 
                                                             & (2U 
                                                                == 
                                                                (3U 
                                                                 & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0)))
                                                             ? 
                                                            (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                                             << 1U)
                                                             : 0U))))))));
    vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                            >> 1U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 1U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                            >> 3U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 3U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                            >> 0x19U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0x19U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                            >> 5U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 5U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                            >> 7U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 7U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                            >> 9U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 9U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                            >> 0xfU))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0xfU))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                            >> 0x11U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0x11U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                            >> 0x13U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0x13U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                            >> 0x15U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0x15U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                            >> 0x17U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0x17U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                     << 1U) : 0U))));
    vlSelf->__VdfgTmp_h85f8e7ff__0 = (((QData)((IData)(
                                                       (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                         << 0x1fU) 
                                                        | (0x7fffffffU 
                                                           & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                              ^ 
                                                              (((0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                                     >> 0xdU))) 
                                                                & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                   | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                      & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                                                                : 
                                                               (((~ 
                                                                  ((0U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                                        >> 0xdU))) 
                                                                   | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                 & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                 ? 
                                                                (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                                                 << 1U)
                                                                 : 0U))))))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU))));
    vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                            >> 0xbU))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                               >> 0xbU))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProdLast_io_partial_prod)) 
            << 0x1cU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                         << 0x1aU))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x400000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                << 0x1fU) 
                                               | vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod))) 
                              << 2U) | (QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x1000000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                 << 0x1fU) 
                                                | vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod))) 
                               << 4U) | (QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                         << 2U)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x400000000000000ULL | (((QData)((IData)(
                                                    (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                      << 0x1fU) 
                                                     | vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod))) 
                                    << 0x1aU) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                                 << 0x18U)))));
    vlSelf->__VdfgTmp_hdc244b89__0 = (((QData)((IData)(
                                                       (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                         << 0x1fU) 
                                                        | vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod))) 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x10000000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                  << 0x1fU) 
                                                 | vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod))) 
                                << 8U) | (QData)((IData)(
                                                         ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                          << 6U)))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x40000000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                  << 0x1fU) 
                                                 | vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod))) 
                                << 0xaU) | (QData)((IData)(
                                                           ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                            << 8U)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x1000000000000ULL | (((QData)((IData)((
                                                   ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                    << 0x1fU) 
                                                   | vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod))) 
                                  << 0x10U) | (QData)((IData)(
                                                              ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                               << 0xeU)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x4000000000000ULL | (((QData)((IData)((
                                                   ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                    << 0x1fU) 
                                                   | vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod))) 
                                  << 0x12U) | (QData)((IData)(
                                                              ((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                               << 0x10U)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (0x10000000000000ULL | (((QData)((IData)(
                                                   (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                     << 0x1fU) 
                                                    | vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod))) 
                                   << 0x14U) | (QData)((IData)(
                                                               ((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                                << 0x12U)))));
    vlSelf->__VdfgTmp_h076a945b__0 = (((QData)((IData)(
                                                       (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                         << 0x1fU) 
                                                        | vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod))) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x100000000000000ULL | (((QData)((IData)(
                                                    (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                      << 0x1fU) 
                                                     | vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod))) 
                                    << 0x18U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                                 << 0x16U)))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (0x100000000000ULL | (((QData)((IData)(((
                                                   (~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                   << 0x1fU) 
                                                  | vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod))) 
                                 << 0xcU) | (QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                             << 0xaU)))));
    vlSelf->__VdfgTmp_h980876b1__0 = (vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0));
    vlSelf->__VdfgTmp_h3892f7c2__0 = ((vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0) 
                                         & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0));
    vlSelf->__VdfgTmp_h52338b1e__0 = ((0x400000000000ULL 
                                       | vlSelf->__VdfgTmp_h85f8e7ff__0) 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_hdd618ffd__0 = (((0x400000000000ULL 
                                        | vlSelf->__VdfgTmp_h85f8e7ff__0) 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | (((0x400000000000ULL 
                                                 | vlSelf->__VdfgTmp_h85f8e7ff__0) 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((0x400000000000ULL 
                                                   | (vlSelf->__VdfgTmp_h85f8e7ff__0 
                                                      | csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0)) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__VdfgTmp_h78bef3d3__0 = ((0x40000000000000ULL 
                                       | vlSelf->__VdfgTmp_h076a945b__0) 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_h0d753817__0 = (((0x40000000000000ULL 
                                        | vlSelf->__VdfgTmp_h076a945b__0) 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | (((0x40000000000000ULL 
                                                 | vlSelf->__VdfgTmp_h076a945b__0) 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((0x40000000000000ULL 
                                                   | (vlSelf->__VdfgTmp_h076a945b__0 
                                                      | csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0)) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__VdfgTmp_h69578a99__0 = ((0x4000000000ULL 
                                       | vlSelf->__VdfgTmp_hdc244b89__0) 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_hc81d027b__0 = (((0x4000000000ULL 
                                        | vlSelf->__VdfgTmp_hdc244b89__0) 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | (((0x4000000000ULL 
                                                 | vlSelf->__VdfgTmp_hdc244b89__0) 
                                                & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((0x4000000000ULL 
                                                   | (vlSelf->__VdfgTmp_hdc244b89__0 
                                                      | csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0)) 
                                                  & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h52338b1e__0 & vlSelf->__VdfgTmp_hdd618ffd__0) 
           | ((vlSelf->__VdfgTmp_hdd618ffd__0 & vlSelf->__VdfgTmp_h78bef3d3__0) 
              | ((vlSelf->__VdfgTmp_h78bef3d3__0 & vlSelf->__VdfgTmp_h0d753817__0) 
                 | ((vlSelf->__VdfgTmp_h52338b1e__0 
                     & vlSelf->__VdfgTmp_h78bef3d3__0) 
                    | ((vlSelf->__VdfgTmp_h52338b1e__0 
                        | vlSelf->__VdfgTmp_hdd618ffd__0) 
                       & vlSelf->__VdfgTmp_h0d753817__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h52338b1e__0 ^ (vlSelf->__VdfgTmp_hdd618ffd__0 
                                             ^ (vlSelf->__VdfgTmp_h78bef3d3__0 
                                                ^ vlSelf->__VdfgTmp_h0d753817__0)));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h980876b1__0 & vlSelf->__VdfgTmp_h3892f7c2__0) 
           | ((vlSelf->__VdfgTmp_h3892f7c2__0 & vlSelf->__VdfgTmp_h69578a99__0) 
              | ((vlSelf->__VdfgTmp_h69578a99__0 & vlSelf->__VdfgTmp_hc81d027b__0) 
                 | ((vlSelf->__VdfgTmp_h980876b1__0 
                     & vlSelf->__VdfgTmp_h69578a99__0) 
                    | ((vlSelf->__VdfgTmp_h980876b1__0 
                        | vlSelf->__VdfgTmp_h3892f7c2__0) 
                       & vlSelf->__VdfgTmp_hc81d027b__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h980876b1__0 ^ (vlSelf->__VdfgTmp_h3892f7c2__0 
                                             ^ (vlSelf->__VdfgTmp_h69578a99__0 
                                                ^ vlSelf->__VdfgTmp_hc81d027b__0)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___nba_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___nba_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"multiplier = %b\n",
                   31,(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                       << 1U));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[0] = %x\ngenProds.io.partial_prods[1] = %x\ngenProds.io.partial_prods[2] = %x\ngenProds.io.partial_prods[3] = %x\ngenProds.io.partial_prods[4] = %x\ngenProds.io.partial_prods[5] = %x\ngenProds.io.partial_prods[6] = %x\ngenProds.io.partial_prods[7] = %x\ngenProds.io.partial_prods[ 8] = %x\ngenProds.io.partial_prods[ 9] = %x\ngenProds.io.partial_prods[10] = %x\ngenProds.io.partial_prods[11] = %x\ngenProds.io.partial_prods[12] = %x\ngenProds.io.partial_prods[13] = %x\n",
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                  << 0x1eU) 
                                                                 | (IData)(
                                                                           ((((QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                              << 0x3cU) 
                                                                             | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0) 
                                                                            >> 0x20U))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                   << 0x3cU) 
                                                                  | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0))))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                  << 0x1cU) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                                    << 0x1aU)))) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   (0x40000000U 
                                                                    | (0x3fffffffU 
                                                                       & ((0x20000000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                              << 0x1dU)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                             >> 2U)))))) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                       << 0x1eU) 
                                                                      | (IData)(
                                                                                ((((QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                                << 0x3cU) 
                                                                                | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0) 
                                                                                >> 0x20U))))) 
                                                     >> 0x1cU)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
                                                                  << 0x1aU) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                    << 0x18U)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0x10000000U 
                                                                    | (0xfffffffU 
                                                                       & ((0x8000000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                                              << 0x1bU)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                             >> 4U)))))) 
                                                   << 8U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                       << 0x1cU) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                                         << 0x1aU)))) 
                                                     >> 0x18U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                                    << 0x16U)))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   (0x4000000U 
                                                                    | (0x3ffffffU 
                                                                       & ((0x2000000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                                              << 0x19U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
                                                                             >> 6U)))))) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
                                                                       << 0x1aU) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                         << 0x18U)))) 
                                                     >> 0x14U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
                                                                  << 0x16U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0x1000000U 
                                                                    | (0xffffffU 
                                                                       & ((0x800000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                                              << 0x17U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
                                                                             >> 8U)))))) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
                                                                       << 0x18U) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                                         << 0x16U)))) 
                                                     >> 0x10U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
                                                                  << 0x14U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                                    << 0x12U)))) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   (0x400000U 
                                                                    | (0x3fffffU 
                                                                       & ((0x200000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                                              << 0x15U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
                                                                             >> 0xaU)))))) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
                                                                       << 0x16U) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                                         << 0x14U)))) 
                                                     >> 0xcU)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                   ^ 
                                                                   (((0U 
                                                                      != 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                                          >> 0xdU))) 
                                                                     & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                        | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                           & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                     ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                                                                     : 
                                                                    (((~ 
                                                                       ((0U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                                             >> 0xdU))) 
                                                                        | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                      & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                      ? 
                                                                     (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                                                      << 1U)
                                                                      : 0U))) 
                                                                  << 0x12U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                    << 0x10U)))) 
                                                << 0x38U) 
                                               | (((QData)((IData)(
                                                                   (0x100000U 
                                                                    | (0xfffffU 
                                                                       & ((0x80000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                                              << 0x13U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
                                                                             >> 0xcU)))))) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
                                                                       << 0x14U) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                                         << 0x12U)))) 
                                                     >> 8U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x40000U 
                                                                 | (0x3ffffU 
                                                                    & ((0x20000U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                                           << 0x11U)) 
                                                                       | (0x1ffffU 
                                                                          & (((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                              ^ 
                                                                              (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                                                >> 0xdU))) 
                                                                                & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                                | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                                & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                                ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                                                                                : 
                                                                               (((~ 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                                                >> 0xdU))) 
                                                                                | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                                & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                                 ? 
                                                                                (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                                                                << 1U)
                                                                                 : 0U))) 
                                                                             >> 0xeU))))))) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  ((((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                     ^ 
                                                                     (((0U 
                                                                        != 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                                            >> 0xdU))) 
                                                                       & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                          | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                             & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                       ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0
                                                                       : 
                                                                      (((~ 
                                                                         ((0U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2894fbe8__0 
                                                                               >> 0xdU))) 
                                                                          | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                        & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                        ? 
                                                                       (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h799ff3bb__0 
                                                                        << 1U)
                                                                        : 0U))) 
                                                                    << 0x12U) 
                                                                   | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                      << 0x10U)))) 
                                                  >> 4U))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x10000U 
                                                                 | (0xffffU 
                                                                    & ((0x8000U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                                           << 0xfU)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
                                                                          >> 0x10U)))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
                                                                   << 0x10U) 
                                                                  | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                                     << 0xeU)))))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x4000U 
                                                                 | (0x3fffU 
                                                                    & ((0x2000U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                                           << 0xdU)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
                                                                          >> 0x12U)))))) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
                                                                     << 0xeU) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                                       << 0xcU)))) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     (0x10000U 
                                                                      | (0xffffU 
                                                                         & ((0x8000U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                                                << 0xfU)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
                                                                               >> 0x10U)))))) 
                                                     >> 0x1cU)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x1000U 
                                                                 | (0xfffU 
                                                                    & ((0x800U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                                           << 0xbU)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
                                                                          >> 0x14U)))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
                                                                     << 0xcU) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                                       << 0xaU)))) 
                                                   << 8U) 
                                                  | ((QData)((IData)(
                                                                     (0x4000U 
                                                                      | (0x3fffU 
                                                                         & ((0x2000U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                                                << 0xdU)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
                                                                               >> 0x12U)))))) 
                                                     >> 0x18U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x400U 
                                                                 | (0x3ffU 
                                                                    & ((0x200U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                                           << 9U)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
                                                                          >> 0x16U)))))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
                                                                     << 0xaU) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                       << 8U)))) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     (0x1000U 
                                                                      | (0xfffU 
                                                                         & ((0x800U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                                                << 0xbU)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
                                                                               >> 0x14U)))))) 
                                                     >> 0x14U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x100U 
                                                                 | (0xffU 
                                                                    & ((0x80U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                                           << 7U)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
                                                                          >> 0x18U)))))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
                                                                     << 8U) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                                       << 6U)))) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     (0x400U 
                                                                      | (0x3ffU 
                                                                         & ((0x200U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                                                << 9U)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
                                                                               >> 0x16U)))))) 
                                                     >> 0x10U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x40U 
                                                                 | (0x3fU 
                                                                    & ((0x20U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                                           << 5U)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
                                                                          >> 0x1aU)))))) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
                                                                     << 6U) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                                       << 4U)))) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     (0x100U 
                                                                      | (0xffU 
                                                                         & ((0x80U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                                                << 7U)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
                                                                               >> 0x18U)))))) 
                                                     >> 0xcU)))));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[14] = %x\n",
                   60,(((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProdLast_io_partial_prod)) 
                        << 0x1cU) | (QData)((IData)(
                                                    (0xfffffffU 
                                                     & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                        << 0x1aU))))));
    }
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__0\n"); );
    // Body
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0xdU))));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0xdU))));
    vlSelf->__PVT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 1U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                  >> 1U))));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 1U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                  >> 1U))));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 3U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                  >> 3U))));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 3U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                  >> 3U))));
    vlSelf->__PVT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x1bU))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x1bU))));
    vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x1bU))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x1bU))));
    vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x1bU))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x1bU))));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 5U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                  >> 5U))));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 5U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                  >> 5U))));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 7U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                  >> 7U))));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 7U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                  >> 7U))));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 9U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                  >> 9U))));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 9U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                  >> 9U))));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0xbU))));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0xbU))));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0xfU))));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0xfU))));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x11U))));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x11U))));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x13U))));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x13U))));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x15U))));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x15U))));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x17U))));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x17U))));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x19U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x19U))));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x19U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x19U))));
    vlSelf->__VdfgTmp_hd6a46e59__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)))));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0xdU))));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 1U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                  >> 1U))));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 3U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                  >> 3U))));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x19U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x19U))));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 5U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                  >> 5U))));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 7U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                  >> 7U))));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 9U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                  >> 9U))));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0xfU))));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x11U))));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x13U))));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x15U))));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x17U))));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0xbU))));
    vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_hd6a46e59__0) 
           & ((2U == (3U & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)) 
              | (3U == (3U & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0))));
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                            >> 0xdU))) | (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                            >> 1U))) | (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                            >> 3U))) | (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                             >> 0x19U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0x19U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                    >> 0x19U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                      >> 0x19U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                            >> 0x19U))) | (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                            >> 5U))) | (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                            >> 7U))) | (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                            >> 9U))) | (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                            >> 0xfU))) | (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                            >> 0x11U))) | (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                      >> 0x13U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                            >> 0x13U))) | (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                      >> 0x15U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                            >> 0x15U))) | (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                             >> 0x17U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0x17U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                    >> 0x17U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                      >> 0x17U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                            >> 0x17U))) | (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                            >> 0xbU))) | (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__1(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__1\n"); );
    // Init
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    // Body
    vlSelf->__PVT__genProds__DOT___genProdLast_io_partial_prod 
        = (0x7fffffffU & ((- (IData)(((~ ((0U == (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                     >> 0x1bU))) 
                                          | ((1U == 
                                              (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                >> 0x1bU))) 
                                             | ((2U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                     >> 0x1bU))) 
                                                | (3U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                       >> 0x1bU))))))) 
                                      & ((4U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                    >> 0x1bU))) 
                                         | (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                            >> 0x1bU))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0x1bU))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                     << 1U) : 0U))));
    vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0 
        = (((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
            << 0x21U) | (((QData)((IData)((3U & (- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                          << 0x1fU) | (QData)((IData)(
                                                      (0x7fffffffU 
                                                       & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != 
                                                             (3U 
                                                              & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)) 
                                                            & ((1U 
                                                                == 
                                                                (3U 
                                                                 & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)) 
                                                               | ((2U 
                                                                   != 
                                                                   (3U 
                                                                    & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)) 
                                                                  & (3U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)))))
                                                            ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                                                            : 
                                                           (((IData)(vlSelf->__VdfgTmp_hd6a46e59__0) 
                                                             & (2U 
                                                                == 
                                                                (3U 
                                                                 & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0)))
                                                             ? 
                                                            (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                                             << 1U)
                                                             : 0U))))))));
    vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                            >> 1U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 1U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                            >> 3U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 3U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                            >> 0x19U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0x19U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                            >> 5U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 5U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                            >> 7U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 7U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                            >> 9U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 9U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                            >> 0xfU))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0xfU))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                            >> 0x11U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0x11U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                            >> 0x13U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0x13U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                            >> 0x15U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0x15U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                            >> 0x17U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0x17U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                     << 1U) : 0U))));
    vlSelf->__VdfgTmp_h85f8e7ff__0 = (((QData)((IData)(
                                                       (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                         << 0x1fU) 
                                                        | (0x7fffffffU 
                                                           & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                              ^ 
                                                              (((0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                                     >> 0xdU))) 
                                                                & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                   | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                      & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                                                                : 
                                                               (((~ 
                                                                  ((0U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                                        >> 0xdU))) 
                                                                   | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                 & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                 ? 
                                                                (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                                                 << 1U)
                                                                 : 0U))))))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU))));
    vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                            >> 0xbU))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                               >> 0xbU))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProdLast_io_partial_prod)) 
            << 0x1cU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                         << 0x1aU))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x400000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                << 0x1fU) 
                                               | vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod))) 
                              << 2U) | (QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x1000000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                 << 0x1fU) 
                                                | vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod))) 
                               << 4U) | (QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                         << 2U)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x400000000000000ULL | (((QData)((IData)(
                                                    (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                      << 0x1fU) 
                                                     | vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod))) 
                                    << 0x1aU) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                                 << 0x18U)))));
    vlSelf->__VdfgTmp_hdc244b89__0 = (((QData)((IData)(
                                                       (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                         << 0x1fU) 
                                                        | vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod))) 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x10000000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                  << 0x1fU) 
                                                 | vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod))) 
                                << 8U) | (QData)((IData)(
                                                         ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                          << 6U)))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x40000000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                  << 0x1fU) 
                                                 | vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod))) 
                                << 0xaU) | (QData)((IData)(
                                                           ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                            << 8U)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x1000000000000ULL | (((QData)((IData)((
                                                   ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                    << 0x1fU) 
                                                   | vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod))) 
                                  << 0x10U) | (QData)((IData)(
                                                              ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                               << 0xeU)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x4000000000000ULL | (((QData)((IData)((
                                                   ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                    << 0x1fU) 
                                                   | vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod))) 
                                  << 0x12U) | (QData)((IData)(
                                                              ((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                               << 0x10U)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (0x10000000000000ULL | (((QData)((IData)(
                                                   (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                     << 0x1fU) 
                                                    | vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod))) 
                                   << 0x14U) | (QData)((IData)(
                                                               ((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                                << 0x12U)))));
    vlSelf->__VdfgTmp_h076a945b__0 = (((QData)((IData)(
                                                       (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                         << 0x1fU) 
                                                        | vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod))) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x100000000000000ULL | (((QData)((IData)(
                                                    (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                      << 0x1fU) 
                                                     | vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod))) 
                                    << 0x18U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                                 << 0x16U)))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (0x100000000000ULL | (((QData)((IData)(((
                                                   (~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                   << 0x1fU) 
                                                  | vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod))) 
                                 << 0xcU) | (QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                             << 0xaU)))));
    vlSelf->__VdfgTmp_h980876b1__0 = (vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0));
    vlSelf->__VdfgTmp_h3892f7c2__0 = ((vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0) 
                                         & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0));
    vlSelf->__VdfgTmp_h52338b1e__0 = ((0x400000000000ULL 
                                       | vlSelf->__VdfgTmp_h85f8e7ff__0) 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_hdd618ffd__0 = (((0x400000000000ULL 
                                        | vlSelf->__VdfgTmp_h85f8e7ff__0) 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | (((0x400000000000ULL 
                                                 | vlSelf->__VdfgTmp_h85f8e7ff__0) 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((0x400000000000ULL 
                                                   | (vlSelf->__VdfgTmp_h85f8e7ff__0 
                                                      | csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0)) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__VdfgTmp_h78bef3d3__0 = ((0x40000000000000ULL 
                                       | vlSelf->__VdfgTmp_h076a945b__0) 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_h0d753817__0 = (((0x40000000000000ULL 
                                        | vlSelf->__VdfgTmp_h076a945b__0) 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | (((0x40000000000000ULL 
                                                 | vlSelf->__VdfgTmp_h076a945b__0) 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((0x40000000000000ULL 
                                                   | (vlSelf->__VdfgTmp_h076a945b__0 
                                                      | csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0)) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__VdfgTmp_h69578a99__0 = ((0x4000000000ULL 
                                       | vlSelf->__VdfgTmp_hdc244b89__0) 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_hc81d027b__0 = (((0x4000000000ULL 
                                        | vlSelf->__VdfgTmp_hdc244b89__0) 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | (((0x4000000000ULL 
                                                 | vlSelf->__VdfgTmp_hdc244b89__0) 
                                                & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((0x4000000000ULL 
                                                   | (vlSelf->__VdfgTmp_hdc244b89__0 
                                                      | csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0)) 
                                                  & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h52338b1e__0 & vlSelf->__VdfgTmp_hdd618ffd__0) 
           | ((vlSelf->__VdfgTmp_hdd618ffd__0 & vlSelf->__VdfgTmp_h78bef3d3__0) 
              | ((vlSelf->__VdfgTmp_h78bef3d3__0 & vlSelf->__VdfgTmp_h0d753817__0) 
                 | ((vlSelf->__VdfgTmp_h52338b1e__0 
                     & vlSelf->__VdfgTmp_h78bef3d3__0) 
                    | ((vlSelf->__VdfgTmp_h52338b1e__0 
                        | vlSelf->__VdfgTmp_hdd618ffd__0) 
                       & vlSelf->__VdfgTmp_h0d753817__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h52338b1e__0 ^ (vlSelf->__VdfgTmp_hdd618ffd__0 
                                             ^ (vlSelf->__VdfgTmp_h78bef3d3__0 
                                                ^ vlSelf->__VdfgTmp_h0d753817__0)));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h980876b1__0 & vlSelf->__VdfgTmp_h3892f7c2__0) 
           | ((vlSelf->__VdfgTmp_h3892f7c2__0 & vlSelf->__VdfgTmp_h69578a99__0) 
              | ((vlSelf->__VdfgTmp_h69578a99__0 & vlSelf->__VdfgTmp_hc81d027b__0) 
                 | ((vlSelf->__VdfgTmp_h980876b1__0 
                     & vlSelf->__VdfgTmp_h69578a99__0) 
                    | ((vlSelf->__VdfgTmp_h980876b1__0 
                        | vlSelf->__VdfgTmp_h3892f7c2__0) 
                       & vlSelf->__VdfgTmp_hc81d027b__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h980876b1__0 ^ (vlSelf->__VdfgTmp_h3892f7c2__0 
                                             ^ (vlSelf->__VdfgTmp_h69578a99__0 
                                                ^ vlSelf->__VdfgTmp_hc81d027b__0)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___nba_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___nba_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"multiplier = %b\n",
                   31,(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                       << 1U));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[0] = %x\ngenProds.io.partial_prods[1] = %x\ngenProds.io.partial_prods[2] = %x\ngenProds.io.partial_prods[3] = %x\ngenProds.io.partial_prods[4] = %x\ngenProds.io.partial_prods[5] = %x\ngenProds.io.partial_prods[6] = %x\ngenProds.io.partial_prods[7] = %x\ngenProds.io.partial_prods[ 8] = %x\ngenProds.io.partial_prods[ 9] = %x\ngenProds.io.partial_prods[10] = %x\ngenProds.io.partial_prods[11] = %x\ngenProds.io.partial_prods[12] = %x\ngenProds.io.partial_prods[13] = %x\n",
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                  << 0x1eU) 
                                                                 | (IData)(
                                                                           ((((QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                              << 0x3cU) 
                                                                             | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0) 
                                                                            >> 0x20U))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                   << 0x3cU) 
                                                                  | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0))))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                  << 0x1cU) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                                    << 0x1aU)))) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   (0x40000000U 
                                                                    | (0x3fffffffU 
                                                                       & ((0x20000000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                              << 0x1dU)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                             >> 2U)))))) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                       << 0x1eU) 
                                                                      | (IData)(
                                                                                ((((QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                                << 0x3cU) 
                                                                                | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0) 
                                                                                >> 0x20U))))) 
                                                     >> 0x1cU)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
                                                                  << 0x1aU) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                    << 0x18U)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0x10000000U 
                                                                    | (0xfffffffU 
                                                                       & ((0x8000000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                                              << 0x1bU)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                             >> 4U)))))) 
                                                   << 8U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                       << 0x1cU) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                                         << 0x1aU)))) 
                                                     >> 0x18U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                                    << 0x16U)))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   (0x4000000U 
                                                                    | (0x3ffffffU 
                                                                       & ((0x2000000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                                              << 0x19U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
                                                                             >> 6U)))))) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
                                                                       << 0x1aU) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                         << 0x18U)))) 
                                                     >> 0x14U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
                                                                  << 0x16U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0x1000000U 
                                                                    | (0xffffffU 
                                                                       & ((0x800000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                                              << 0x17U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
                                                                             >> 8U)))))) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
                                                                       << 0x18U) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                                         << 0x16U)))) 
                                                     >> 0x10U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
                                                                  << 0x14U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                                    << 0x12U)))) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   (0x400000U 
                                                                    | (0x3fffffU 
                                                                       & ((0x200000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                                              << 0x15U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
                                                                             >> 0xaU)))))) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
                                                                       << 0x16U) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                                         << 0x14U)))) 
                                                     >> 0xcU)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                   ^ 
                                                                   (((0U 
                                                                      != 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                                          >> 0xdU))) 
                                                                     & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                        | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                           & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                     ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                                                                     : 
                                                                    (((~ 
                                                                       ((0U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                                             >> 0xdU))) 
                                                                        | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                      & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                      ? 
                                                                     (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                                                      << 1U)
                                                                      : 0U))) 
                                                                  << 0x12U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                    << 0x10U)))) 
                                                << 0x38U) 
                                               | (((QData)((IData)(
                                                                   (0x100000U 
                                                                    | (0xfffffU 
                                                                       & ((0x80000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                                              << 0x13U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
                                                                             >> 0xcU)))))) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
                                                                       << 0x14U) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                                         << 0x12U)))) 
                                                     >> 8U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x40000U 
                                                                 | (0x3ffffU 
                                                                    & ((0x20000U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                                           << 0x11U)) 
                                                                       | (0x1ffffU 
                                                                          & (((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                              ^ 
                                                                              (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                                                >> 0xdU))) 
                                                                                & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                                | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                                & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                                ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                                                                                : 
                                                                               (((~ 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                                                >> 0xdU))) 
                                                                                | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                                & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                                 ? 
                                                                                (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                                                                << 1U)
                                                                                 : 0U))) 
                                                                             >> 0xeU))))))) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  ((((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                     ^ 
                                                                     (((0U 
                                                                        != 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                                            >> 0xdU))) 
                                                                       & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                          | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                             & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                       ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0
                                                                       : 
                                                                      (((~ 
                                                                         ((0U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h29f4980a__0 
                                                                               >> 0xdU))) 
                                                                          | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                        & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                        ? 
                                                                       (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7ee3803d__0 
                                                                        << 1U)
                                                                        : 0U))) 
                                                                    << 0x12U) 
                                                                   | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                      << 0x10U)))) 
                                                  >> 4U))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x10000U 
                                                                 | (0xffffU 
                                                                    & ((0x8000U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                                           << 0xfU)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
                                                                          >> 0x10U)))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
                                                                   << 0x10U) 
                                                                  | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                                     << 0xeU)))))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x4000U 
                                                                 | (0x3fffU 
                                                                    & ((0x2000U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                                           << 0xdU)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
                                                                          >> 0x12U)))))) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
                                                                     << 0xeU) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                                       << 0xcU)))) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     (0x10000U 
                                                                      | (0xffffU 
                                                                         & ((0x8000U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                                                << 0xfU)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
                                                                               >> 0x10U)))))) 
                                                     >> 0x1cU)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x1000U 
                                                                 | (0xfffU 
                                                                    & ((0x800U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                                           << 0xbU)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
                                                                          >> 0x14U)))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
                                                                     << 0xcU) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                                       << 0xaU)))) 
                                                   << 8U) 
                                                  | ((QData)((IData)(
                                                                     (0x4000U 
                                                                      | (0x3fffU 
                                                                         & ((0x2000U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                                                << 0xdU)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
                                                                               >> 0x12U)))))) 
                                                     >> 0x18U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x400U 
                                                                 | (0x3ffU 
                                                                    & ((0x200U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                                           << 9U)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
                                                                          >> 0x16U)))))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
                                                                     << 0xaU) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                       << 8U)))) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     (0x1000U 
                                                                      | (0xfffU 
                                                                         & ((0x800U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                                                << 0xbU)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
                                                                               >> 0x14U)))))) 
                                                     >> 0x14U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x100U 
                                                                 | (0xffU 
                                                                    & ((0x80U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                                           << 7U)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
                                                                          >> 0x18U)))))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
                                                                     << 8U) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                                       << 6U)))) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     (0x400U 
                                                                      | (0x3ffU 
                                                                         & ((0x200U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                                                << 9U)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
                                                                               >> 0x16U)))))) 
                                                     >> 0x10U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x40U 
                                                                 | (0x3fU 
                                                                    & ((0x20U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                                           << 5U)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
                                                                          >> 0x1aU)))))) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
                                                                     << 6U) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                                       << 4U)))) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     (0x100U 
                                                                      | (0xffU 
                                                                         & ((0x80U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                                                << 7U)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
                                                                               >> 0x18U)))))) 
                                                     >> 0xcU)))));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[14] = %x\n",
                   60,(((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProdLast_io_partial_prod)) 
                        << 0x1cU) | (QData)((IData)(
                                                    (0xfffffffU 
                                                     & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                        << 0x1aU))))));
    }
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__0\n"); );
    // Body
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0xdU))));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0xdU))));
    vlSelf->__PVT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 1U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                  >> 1U))));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 1U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                  >> 1U))));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 3U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                  >> 3U))));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 3U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                  >> 3U))));
    vlSelf->__PVT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x1bU))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x1bU))));
    vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x1bU))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x1bU))));
    vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x1bU))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x1bU))));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 5U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                  >> 5U))));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 5U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                  >> 5U))));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 7U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                  >> 7U))));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 7U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                  >> 7U))));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 9U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                  >> 9U))));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 9U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                  >> 9U))));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0xbU))));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0xbU))));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0xfU))));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0xfU))));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x11U))));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x11U))));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x13U))));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x13U))));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x15U))));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x15U))));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x17U))));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x17U))));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x19U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x19U))));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x19U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x19U))));
    vlSelf->__VdfgTmp_hd6a46e59__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0)) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0)))));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0xdU))));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 1U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                  >> 1U))));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 3U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                  >> 3U))));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x19U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x19U))));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 5U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                  >> 5U))));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 7U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                  >> 7U))));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 9U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                  >> 9U))));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0xfU))));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x11U))));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x13U))));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x15U))));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x17U))));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0xbU))));
    vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_hd6a46e59__0) 
           & ((2U == (3U & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0)) 
              | (3U == (3U & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0))));
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                            >> 0xdU))) | (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                            >> 1U))) | (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                            >> 3U))) | (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                             >> 0x19U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0x19U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                    >> 0x19U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                      >> 0x19U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                            >> 0x19U))) | (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                            >> 5U))) | (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                            >> 7U))) | (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                            >> 9U))) | (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                            >> 0xfU))) | (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                            >> 0x11U))) | (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                      >> 0x13U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                            >> 0x13U))) | (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                      >> 0x15U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                            >> 0x15U))) | (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                             >> 0x17U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0x17U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                    >> 0x17U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                      >> 0x17U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                            >> 0x17U))) | (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                            >> 0xbU))) | (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__1(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__1\n"); );
    // Init
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    // Body
    vlSelf->__PVT__genProds__DOT___genProdLast_io_partial_prod 
        = (0x7fffffffU & ((- (IData)(((~ ((0U == (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                     >> 0x1bU))) 
                                          | ((1U == 
                                              (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                >> 0x1bU))) 
                                             | ((2U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                     >> 0x1bU))) 
                                                | (3U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                       >> 0x1bU))))))) 
                                      & ((4U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                    >> 0x1bU))) 
                                         | (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                            >> 0x1bU))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0x1bU))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                     << 1U) : 0U))));
    vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0 
        = (((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
            << 0x21U) | (((QData)((IData)((3U & (- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                          << 0x1fU) | (QData)((IData)(
                                                      (0x7fffffffU 
                                                       & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != 
                                                             (3U 
                                                              & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0)) 
                                                            & ((1U 
                                                                == 
                                                                (3U 
                                                                 & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0)) 
                                                               | ((2U 
                                                                   != 
                                                                   (3U 
                                                                    & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0)) 
                                                                  & (3U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0)))))
                                                            ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                                                            : 
                                                           (((IData)(vlSelf->__VdfgTmp_hd6a46e59__0) 
                                                             & (2U 
                                                                == 
                                                                (3U 
                                                                 & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0)))
                                                             ? 
                                                            (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                                             << 1U)
                                                             : 0U))))))));
    vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                            >> 1U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 1U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                            >> 3U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 3U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                            >> 0x19U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0x19U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                            >> 5U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 5U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                            >> 7U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 7U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                            >> 9U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 9U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                            >> 0xfU))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0xfU))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                            >> 0x11U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0x11U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                            >> 0x13U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0x13U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                            >> 0x15U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0x15U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                            >> 0x17U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0x17U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                     << 1U) : 0U))));
    vlSelf->__VdfgTmp_h85f8e7ff__0 = (((QData)((IData)(
                                                       (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                         << 0x1fU) 
                                                        | (0x7fffffffU 
                                                           & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                              ^ 
                                                              (((0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                                     >> 0xdU))) 
                                                                & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                   | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                      & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                                                                : 
                                                               (((~ 
                                                                  ((0U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                                        >> 0xdU))) 
                                                                   | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                 & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                 ? 
                                                                (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                                                 << 1U)
                                                                 : 0U))))))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU))));
    vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                            >> 0xbU))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                               >> 0xbU))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProdLast_io_partial_prod)) 
            << 0x1cU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                         << 0x1aU))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x400000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                << 0x1fU) 
                                               | vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod))) 
                              << 2U) | (QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x1000000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                 << 0x1fU) 
                                                | vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod))) 
                               << 4U) | (QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                         << 2U)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x400000000000000ULL | (((QData)((IData)(
                                                    (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                      << 0x1fU) 
                                                     | vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod))) 
                                    << 0x1aU) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                                 << 0x18U)))));
    vlSelf->__VdfgTmp_hdc244b89__0 = (((QData)((IData)(
                                                       (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                         << 0x1fU) 
                                                        | vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod))) 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x10000000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                  << 0x1fU) 
                                                 | vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod))) 
                                << 8U) | (QData)((IData)(
                                                         ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                          << 6U)))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x40000000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                  << 0x1fU) 
                                                 | vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod))) 
                                << 0xaU) | (QData)((IData)(
                                                           ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                            << 8U)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x1000000000000ULL | (((QData)((IData)((
                                                   ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                    << 0x1fU) 
                                                   | vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod))) 
                                  << 0x10U) | (QData)((IData)(
                                                              ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                               << 0xeU)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x4000000000000ULL | (((QData)((IData)((
                                                   ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                    << 0x1fU) 
                                                   | vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod))) 
                                  << 0x12U) | (QData)((IData)(
                                                              ((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                               << 0x10U)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (0x10000000000000ULL | (((QData)((IData)(
                                                   (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                     << 0x1fU) 
                                                    | vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod))) 
                                   << 0x14U) | (QData)((IData)(
                                                               ((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                                << 0x12U)))));
    vlSelf->__VdfgTmp_h076a945b__0 = (((QData)((IData)(
                                                       (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                         << 0x1fU) 
                                                        | vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod))) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x100000000000000ULL | (((QData)((IData)(
                                                    (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                      << 0x1fU) 
                                                     | vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod))) 
                                    << 0x18U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                                 << 0x16U)))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (0x100000000000ULL | (((QData)((IData)(((
                                                   (~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                   << 0x1fU) 
                                                  | vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod))) 
                                 << 0xcU) | (QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                             << 0xaU)))));
    vlSelf->__VdfgTmp_h980876b1__0 = (vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0));
    vlSelf->__VdfgTmp_h3892f7c2__0 = ((vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0) 
                                         & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0));
    vlSelf->__VdfgTmp_h52338b1e__0 = ((0x400000000000ULL 
                                       | vlSelf->__VdfgTmp_h85f8e7ff__0) 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_hdd618ffd__0 = (((0x400000000000ULL 
                                        | vlSelf->__VdfgTmp_h85f8e7ff__0) 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | (((0x400000000000ULL 
                                                 | vlSelf->__VdfgTmp_h85f8e7ff__0) 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((0x400000000000ULL 
                                                   | (vlSelf->__VdfgTmp_h85f8e7ff__0 
                                                      | csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0)) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__VdfgTmp_h78bef3d3__0 = ((0x40000000000000ULL 
                                       | vlSelf->__VdfgTmp_h076a945b__0) 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_h0d753817__0 = (((0x40000000000000ULL 
                                        | vlSelf->__VdfgTmp_h076a945b__0) 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | (((0x40000000000000ULL 
                                                 | vlSelf->__VdfgTmp_h076a945b__0) 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((0x40000000000000ULL 
                                                   | (vlSelf->__VdfgTmp_h076a945b__0 
                                                      | csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0)) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__VdfgTmp_h69578a99__0 = ((0x4000000000ULL 
                                       | vlSelf->__VdfgTmp_hdc244b89__0) 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_hc81d027b__0 = (((0x4000000000ULL 
                                        | vlSelf->__VdfgTmp_hdc244b89__0) 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | (((0x4000000000ULL 
                                                 | vlSelf->__VdfgTmp_hdc244b89__0) 
                                                & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((0x4000000000ULL 
                                                   | (vlSelf->__VdfgTmp_hdc244b89__0 
                                                      | csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0)) 
                                                  & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h52338b1e__0 & vlSelf->__VdfgTmp_hdd618ffd__0) 
           | ((vlSelf->__VdfgTmp_hdd618ffd__0 & vlSelf->__VdfgTmp_h78bef3d3__0) 
              | ((vlSelf->__VdfgTmp_h78bef3d3__0 & vlSelf->__VdfgTmp_h0d753817__0) 
                 | ((vlSelf->__VdfgTmp_h52338b1e__0 
                     & vlSelf->__VdfgTmp_h78bef3d3__0) 
                    | ((vlSelf->__VdfgTmp_h52338b1e__0 
                        | vlSelf->__VdfgTmp_hdd618ffd__0) 
                       & vlSelf->__VdfgTmp_h0d753817__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h52338b1e__0 ^ (vlSelf->__VdfgTmp_hdd618ffd__0 
                                             ^ (vlSelf->__VdfgTmp_h78bef3d3__0 
                                                ^ vlSelf->__VdfgTmp_h0d753817__0)));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h980876b1__0 & vlSelf->__VdfgTmp_h3892f7c2__0) 
           | ((vlSelf->__VdfgTmp_h3892f7c2__0 & vlSelf->__VdfgTmp_h69578a99__0) 
              | ((vlSelf->__VdfgTmp_h69578a99__0 & vlSelf->__VdfgTmp_hc81d027b__0) 
                 | ((vlSelf->__VdfgTmp_h980876b1__0 
                     & vlSelf->__VdfgTmp_h69578a99__0) 
                    | ((vlSelf->__VdfgTmp_h980876b1__0 
                        | vlSelf->__VdfgTmp_h3892f7c2__0) 
                       & vlSelf->__VdfgTmp_hc81d027b__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h980876b1__0 ^ (vlSelf->__VdfgTmp_h3892f7c2__0 
                                             ^ (vlSelf->__VdfgTmp_h69578a99__0 
                                                ^ vlSelf->__VdfgTmp_hc81d027b__0)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___nba_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___nba_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"multiplier = %b\n",
                   31,(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                       << 1U));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[0] = %x\ngenProds.io.partial_prods[1] = %x\ngenProds.io.partial_prods[2] = %x\ngenProds.io.partial_prods[3] = %x\ngenProds.io.partial_prods[4] = %x\ngenProds.io.partial_prods[5] = %x\ngenProds.io.partial_prods[6] = %x\ngenProds.io.partial_prods[7] = %x\ngenProds.io.partial_prods[ 8] = %x\ngenProds.io.partial_prods[ 9] = %x\ngenProds.io.partial_prods[10] = %x\ngenProds.io.partial_prods[11] = %x\ngenProds.io.partial_prods[12] = %x\ngenProds.io.partial_prods[13] = %x\n",
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                  << 0x1eU) 
                                                                 | (IData)(
                                                                           ((((QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                              << 0x3cU) 
                                                                             | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0) 
                                                                            >> 0x20U))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                   << 0x3cU) 
                                                                  | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0))))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                  << 0x1cU) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                                    << 0x1aU)))) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   (0x40000000U 
                                                                    | (0x3fffffffU 
                                                                       & ((0x20000000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                              << 0x1dU)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                             >> 2U)))))) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                       << 0x1eU) 
                                                                      | (IData)(
                                                                                ((((QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                                << 0x3cU) 
                                                                                | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0) 
                                                                                >> 0x20U))))) 
                                                     >> 0x1cU)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
                                                                  << 0x1aU) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                    << 0x18U)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0x10000000U 
                                                                    | (0xfffffffU 
                                                                       & ((0x8000000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                                              << 0x1bU)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                             >> 4U)))))) 
                                                   << 8U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                       << 0x1cU) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                                         << 0x1aU)))) 
                                                     >> 0x18U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                                    << 0x16U)))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   (0x4000000U 
                                                                    | (0x3ffffffU 
                                                                       & ((0x2000000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                                              << 0x19U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
                                                                             >> 6U)))))) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
                                                                       << 0x1aU) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                         << 0x18U)))) 
                                                     >> 0x14U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
                                                                  << 0x16U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0x1000000U 
                                                                    | (0xffffffU 
                                                                       & ((0x800000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                                              << 0x17U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
                                                                             >> 8U)))))) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
                                                                       << 0x18U) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                                         << 0x16U)))) 
                                                     >> 0x10U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
                                                                  << 0x14U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                                    << 0x12U)))) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   (0x400000U 
                                                                    | (0x3fffffU 
                                                                       & ((0x200000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                                              << 0x15U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
                                                                             >> 0xaU)))))) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
                                                                       << 0x16U) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                                         << 0x14U)))) 
                                                     >> 0xcU)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                   ^ 
                                                                   (((0U 
                                                                      != 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                                          >> 0xdU))) 
                                                                     & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                        | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                           & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                     ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                                                                     : 
                                                                    (((~ 
                                                                       ((0U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                                             >> 0xdU))) 
                                                                        | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                      & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                      ? 
                                                                     (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                                                      << 1U)
                                                                      : 0U))) 
                                                                  << 0x12U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                    << 0x10U)))) 
                                                << 0x38U) 
                                               | (((QData)((IData)(
                                                                   (0x100000U 
                                                                    | (0xfffffU 
                                                                       & ((0x80000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                                              << 0x13U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
                                                                             >> 0xcU)))))) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
                                                                       << 0x14U) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                                         << 0x12U)))) 
                                                     >> 8U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x40000U 
                                                                 | (0x3ffffU 
                                                                    & ((0x20000U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                                           << 0x11U)) 
                                                                       | (0x1ffffU 
                                                                          & (((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                              ^ 
                                                                              (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                                                >> 0xdU))) 
                                                                                & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                                | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                                & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                                ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                                                                                : 
                                                                               (((~ 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                                                >> 0xdU))) 
                                                                                | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                                & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                                 ? 
                                                                                (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                                                                << 1U)
                                                                                 : 0U))) 
                                                                             >> 0xeU))))))) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  ((((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                     ^ 
                                                                     (((0U 
                                                                        != 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                                            >> 0xdU))) 
                                                                       & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                          | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                             & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                       ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0
                                                                       : 
                                                                      (((~ 
                                                                         ((0U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h298ac180__0 
                                                                               >> 0xdU))) 
                                                                          | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                        & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                        ? 
                                                                       (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7eb5ce53__0 
                                                                        << 1U)
                                                                        : 0U))) 
                                                                    << 0x12U) 
                                                                   | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                      << 0x10U)))) 
                                                  >> 4U))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x10000U 
                                                                 | (0xffffU 
                                                                    & ((0x8000U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                                           << 0xfU)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
                                                                          >> 0x10U)))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
                                                                   << 0x10U) 
                                                                  | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                                     << 0xeU)))))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x4000U 
                                                                 | (0x3fffU 
                                                                    & ((0x2000U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                                           << 0xdU)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
                                                                          >> 0x12U)))))) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
                                                                     << 0xeU) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                                       << 0xcU)))) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     (0x10000U 
                                                                      | (0xffffU 
                                                                         & ((0x8000U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                                                << 0xfU)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
                                                                               >> 0x10U)))))) 
                                                     >> 0x1cU)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x1000U 
                                                                 | (0xfffU 
                                                                    & ((0x800U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                                           << 0xbU)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
                                                                          >> 0x14U)))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
                                                                     << 0xcU) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                                       << 0xaU)))) 
                                                   << 8U) 
                                                  | ((QData)((IData)(
                                                                     (0x4000U 
                                                                      | (0x3fffU 
                                                                         & ((0x2000U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                                                << 0xdU)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
                                                                               >> 0x12U)))))) 
                                                     >> 0x18U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x400U 
                                                                 | (0x3ffU 
                                                                    & ((0x200U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                                           << 9U)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
                                                                          >> 0x16U)))))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
                                                                     << 0xaU) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                       << 8U)))) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     (0x1000U 
                                                                      | (0xfffU 
                                                                         & ((0x800U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                                                << 0xbU)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
                                                                               >> 0x14U)))))) 
                                                     >> 0x14U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x100U 
                                                                 | (0xffU 
                                                                    & ((0x80U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                                           << 7U)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
                                                                          >> 0x18U)))))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
                                                                     << 8U) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                                       << 6U)))) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     (0x400U 
                                                                      | (0x3ffU 
                                                                         & ((0x200U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                                                << 9U)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
                                                                               >> 0x16U)))))) 
                                                     >> 0x10U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x40U 
                                                                 | (0x3fU 
                                                                    & ((0x20U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                                           << 5U)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
                                                                          >> 0x1aU)))))) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
                                                                     << 6U) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                                       << 4U)))) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     (0x100U 
                                                                      | (0xffU 
                                                                         & ((0x80U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                                                << 7U)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
                                                                               >> 0x18U)))))) 
                                                     >> 0xcU)))));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[14] = %x\n",
                   60,(((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProdLast_io_partial_prod)) 
                        << 0x1cU) | (QData)((IData)(
                                                    (0xfffffffU 
                                                     & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                        << 0x1aU))))));
    }
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__0\n"); );
    // Body
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0xdU))));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0xdU))));
    vlSelf->__PVT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 1U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                  >> 1U))));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 1U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                  >> 1U))));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 3U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                  >> 3U))));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 3U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                  >> 3U))));
    vlSelf->__PVT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x1bU))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x1bU))));
    vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x1bU))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x1bU))));
    vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x1bU))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x1bU))));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 5U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                  >> 5U))));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 5U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                  >> 5U))));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 7U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                  >> 7U))));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 7U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                  >> 7U))));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 9U))) | (2U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                  >> 9U))));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 9U))) | (4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                  >> 9U))));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0xbU))));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0xbU))));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0xfU))));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0xfU))));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x11U))));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x11U))));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x13U))));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x13U))));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x15U))));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x15U))));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x17U))));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x17U))));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x19U))) | (2U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x19U))));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x19U))) | (4U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x19U))));
    vlSelf->__VdfgTmp_hd6a46e59__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0)) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0)))));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0xdU))));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 1U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                  >> 1U))));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 3U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                  >> 3U))));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x19U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x19U))));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 5U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                  >> 5U))));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 7U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                  >> 7U))));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 9U))) | (6U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                  >> 9U))));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0xfU))));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x11U))));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x13U))));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x15U))));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x17U))));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0xbU))));
    vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_hd6a46e59__0) 
           & ((2U == (3U & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0)) 
              | (3U == (3U & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0))));
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                            >> 0xdU))) | (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                            >> 1U))) | (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                            >> 3U))) | (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                             >> 0x19U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0x19U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                    >> 0x19U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                      >> 0x19U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                            >> 0x19U))) | (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                            >> 5U))) | (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                            >> 7U))) | (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                            >> 9U))) | (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                            >> 0xfU))) | (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                            >> 0x11U))) | (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                      >> 0x13U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                            >> 0x13U))) | (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                      >> 0x15U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                            >> 0x15U))) | (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                             >> 0x17U))) | ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0x17U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                    >> 0x17U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                      >> 0x17U))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                            >> 0x17U))) | (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                            >> 0xbU))) | (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__1(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__1\n"); );
    // Init
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 = 0;
    QData/*59:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 = 0;
    // Body
    vlSelf->__PVT__genProds__DOT___genProdLast_io_partial_prod 
        = (0x7fffffffU & ((- (IData)(((~ ((0U == (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                     >> 0x1bU))) 
                                          | ((1U == 
                                              (7U & 
                                               (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                >> 0x1bU))) 
                                             | ((2U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                     >> 0x1bU))) 
                                                | (3U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                       >> 0x1bU))))))) 
                                      & ((4U == (7U 
                                                 & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                    >> 0x1bU))) 
                                         | (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                            >> 0x1bU))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0x1bU))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProdLast__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProdLast__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                     << 1U) : 0U))));
    vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0 
        = (((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))) 
            << 0x21U) | (((QData)((IData)((3U & (- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)))))) 
                          << 0x1fU) | (QData)((IData)(
                                                      (0x7fffffffU 
                                                       & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != 
                                                             (3U 
                                                              & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0)) 
                                                            & ((1U 
                                                                == 
                                                                (3U 
                                                                 & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0)) 
                                                               | ((2U 
                                                                   != 
                                                                   (3U 
                                                                    & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0)) 
                                                                  & (3U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0)))))
                                                            ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                                                            : 
                                                           (((IData)(vlSelf->__VdfgTmp_hd6a46e59__0) 
                                                             & (2U 
                                                                == 
                                                                (3U 
                                                                 & vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0)))
                                                             ? 
                                                            (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                                             << 1U)
                                                             : 0U))))))));
    vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                            >> 1U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 1U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                            >> 3U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 3U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                            >> 0x19U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0x19U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                            >> 5U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 5U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                            >> 7U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 7U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                            >> 9U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 9U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                            >> 0xfU))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0xfU))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                            >> 0x11U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0x11U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                            >> 0x13U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0x13U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                            >> 0x15U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0x15U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                            >> 0x17U))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0x17U))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                     << 1U) : 0U))));
    vlSelf->__VdfgTmp_h85f8e7ff__0 = (((QData)((IData)(
                                                       (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                         << 0x1fU) 
                                                        | (0x7fffffffU 
                                                           & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                              ^ 
                                                              (((0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                                     >> 0xdU))) 
                                                                & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                   | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                      & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                                                                : 
                                                               (((~ 
                                                                  ((0U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                                        >> 0xdU))) 
                                                                   | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                 & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                 ? 
                                                                (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                                                 << 1U)
                                                                 : 0U))))))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU))));
    vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x7fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                            >> 0xbU))) 
                              & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                              : (((~ ((0U == (7U & 
                                              (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                               >> 0xbU))) 
                                      | (IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProdLast_io_partial_prod)) 
            << 0x1cU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                         << 0x1aU))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x400000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                << 0x1fU) 
                                               | vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod))) 
                              << 2U) | (QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x1000000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                 << 0x1fU) 
                                                | vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod))) 
                               << 4U) | (QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                         << 2U)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x400000000000000ULL | (((QData)((IData)(
                                                    (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                      << 0x1fU) 
                                                     | vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod))) 
                                    << 0x1aU) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                                 << 0x18U)))));
    vlSelf->__VdfgTmp_hdc244b89__0 = (((QData)((IData)(
                                                       (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                         << 0x1fU) 
                                                        | vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod))) 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x10000000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                  << 0x1fU) 
                                                 | vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod))) 
                                << 8U) | (QData)((IData)(
                                                         ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                          << 6U)))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x40000000000ULL | (((QData)((IData)((((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                  << 0x1fU) 
                                                 | vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod))) 
                                << 0xaU) | (QData)((IData)(
                                                           ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                            << 8U)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x1000000000000ULL | (((QData)((IData)((
                                                   ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                    << 0x1fU) 
                                                   | vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod))) 
                                  << 0x10U) | (QData)((IData)(
                                                              ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                               << 0xeU)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
        = (0x4000000000000ULL | (((QData)((IData)((
                                                   ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                    << 0x1fU) 
                                                   | vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod))) 
                                  << 0x12U) | (QData)((IData)(
                                                              ((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                               << 0x10U)))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (0x10000000000000ULL | (((QData)((IData)(
                                                   (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                     << 0x1fU) 
                                                    | vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod))) 
                                   << 0x14U) | (QData)((IData)(
                                                               ((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                                << 0x12U)))));
    vlSelf->__VdfgTmp_h076a945b__0 = (((QData)((IData)(
                                                       (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                         << 0x1fU) 
                                                        | vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod))) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
        = (0x100000000000000ULL | (((QData)((IData)(
                                                    (((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                      << 0x1fU) 
                                                     | vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod))) 
                                    << 0x18U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                                 << 0x16U)))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0 
        = (0x100000000000ULL | (((QData)((IData)(((
                                                   (~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                   << 0x1fU) 
                                                  | vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod))) 
                                 << 0xcU) | (QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                             << 0xaU)))));
    vlSelf->__VdfgTmp_h980876b1__0 = (vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0));
    vlSelf->__VdfgTmp_h3892f7c2__0 = ((vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0) 
                                         & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0));
    vlSelf->__VdfgTmp_h52338b1e__0 = ((0x400000000000ULL 
                                       | vlSelf->__VdfgTmp_h85f8e7ff__0) 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_hdd618ffd__0 = (((0x400000000000ULL 
                                        | vlSelf->__VdfgTmp_h85f8e7ff__0) 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | (((0x400000000000ULL 
                                                 | vlSelf->__VdfgTmp_h85f8e7ff__0) 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((0x400000000000ULL 
                                                   | (vlSelf->__VdfgTmp_h85f8e7ff__0 
                                                      | csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0)) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__VdfgTmp_h78bef3d3__0 = ((0x40000000000000ULL 
                                       | vlSelf->__VdfgTmp_h076a945b__0) 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_h0d753817__0 = (((0x40000000000000ULL 
                                        | vlSelf->__VdfgTmp_h076a945b__0) 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | (((0x40000000000000ULL 
                                                 | vlSelf->__VdfgTmp_h076a945b__0) 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((0x40000000000000ULL 
                                                   | (vlSelf->__VdfgTmp_h076a945b__0 
                                                      | csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0)) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__VdfgTmp_h69578a99__0 = ((0x4000000000ULL 
                                       | vlSelf->__VdfgTmp_hdc244b89__0) 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                         ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                            ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)));
    vlSelf->__VdfgTmp_hc81d027b__0 = (((0x4000000000ULL 
                                        | vlSelf->__VdfgTmp_hdc244b89__0) 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0 
                                          & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                         | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0 
                                             & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0) 
                                            | (((0x4000000000ULL 
                                                 | vlSelf->__VdfgTmp_hdc244b89__0) 
                                                & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h164b42ac__0) 
                                               | ((0x4000000000ULL 
                                                   | (vlSelf->__VdfgTmp_hdc244b89__0 
                                                      | csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1534e8eb__0)) 
                                                  & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h174e5f03__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h52338b1e__0 & vlSelf->__VdfgTmp_hdd618ffd__0) 
           | ((vlSelf->__VdfgTmp_hdd618ffd__0 & vlSelf->__VdfgTmp_h78bef3d3__0) 
              | ((vlSelf->__VdfgTmp_h78bef3d3__0 & vlSelf->__VdfgTmp_h0d753817__0) 
                 | ((vlSelf->__VdfgTmp_h52338b1e__0 
                     & vlSelf->__VdfgTmp_h78bef3d3__0) 
                    | ((vlSelf->__VdfgTmp_h52338b1e__0 
                        | vlSelf->__VdfgTmp_hdd618ffd__0) 
                       & vlSelf->__VdfgTmp_h0d753817__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h52338b1e__0 ^ (vlSelf->__VdfgTmp_hdd618ffd__0 
                                             ^ (vlSelf->__VdfgTmp_h78bef3d3__0 
                                                ^ vlSelf->__VdfgTmp_h0d753817__0)));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h980876b1__0 & vlSelf->__VdfgTmp_h3892f7c2__0) 
           | ((vlSelf->__VdfgTmp_h3892f7c2__0 & vlSelf->__VdfgTmp_h69578a99__0) 
              | ((vlSelf->__VdfgTmp_h69578a99__0 & vlSelf->__VdfgTmp_hc81d027b__0) 
                 | ((vlSelf->__VdfgTmp_h980876b1__0 
                     & vlSelf->__VdfgTmp_h69578a99__0) 
                    | ((vlSelf->__VdfgTmp_h980876b1__0 
                        | vlSelf->__VdfgTmp_h3892f7c2__0) 
                       & vlSelf->__VdfgTmp_hc81d027b__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h980876b1__0 ^ (vlSelf->__VdfgTmp_h3892f7c2__0 
                                             ^ (vlSelf->__VdfgTmp_h69578a99__0 
                                                ^ vlSelf->__VdfgTmp_hc81d027b__0)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___nba_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___nba_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"multiplier = %b\n",
                   31,(vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                       << 1U));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[0] = %x\ngenProds.io.partial_prods[1] = %x\ngenProds.io.partial_prods[2] = %x\ngenProds.io.partial_prods[3] = %x\ngenProds.io.partial_prods[4] = %x\ngenProds.io.partial_prods[5] = %x\ngenProds.io.partial_prods[6] = %x\ngenProds.io.partial_prods[7] = %x\ngenProds.io.partial_prods[ 8] = %x\ngenProds.io.partial_prods[ 9] = %x\ngenProds.io.partial_prods[10] = %x\ngenProds.io.partial_prods[11] = %x\ngenProds.io.partial_prods[12] = %x\ngenProds.io.partial_prods[13] = %x\n",
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                  << 0x1eU) 
                                                                 | (IData)(
                                                                           ((((QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                              << 0x3cU) 
                                                                             | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0) 
                                                                            >> 0x20U))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                   << 0x3cU) 
                                                                  | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0))))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                  << 0x1cU) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                                    << 0x1aU)))) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   (0x40000000U 
                                                                    | (0x3fffffffU 
                                                                       & ((0x20000000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                              << 0x1dU)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                             >> 2U)))))) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                                                                       << 0x1eU) 
                                                                      | (IData)(
                                                                                ((((QData)((IData)(vlSelf->__PVT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                                << 0x3cU) 
                                                                                | vlSelf->csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h142e6eef__0) 
                                                                                >> 0x20U))))) 
                                                     >> 0x1cU)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
                                                                  << 0x1aU) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                    << 0x18U)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0x10000000U 
                                                                    | (0xfffffffU 
                                                                       & ((0x8000000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg)) 
                                                                              << 0x1bU)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                             >> 4U)))))) 
                                                   << 8U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
                                                                       << 0x1cU) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                                         << 0x1aU)))) 
                                                     >> 0x18U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                                    << 0x16U)))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   (0x4000000U 
                                                                    | (0x3ffffffU 
                                                                       & ((0x2000000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                                                              << 0x19U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
                                                                             >> 6U)))))) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
                                                                       << 0x1aU) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                         << 0x18U)))) 
                                                     >> 0x14U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
                                                                  << 0x16U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0x1000000U 
                                                                    | (0xffffffU 
                                                                       & ((0x800000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                                                              << 0x17U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
                                                                             >> 8U)))))) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
                                                                       << 0x18U) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                                                         << 0x16U)))) 
                                                     >> 0x10U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
                                                                  << 0x14U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                                    << 0x12U)))) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   (0x400000U 
                                                                    | (0x3fffffU 
                                                                       & ((0x200000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                                                              << 0x15U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
                                                                             >> 0xaU)))))) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
                                                                       << 0x16U) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                                                         << 0x14U)))) 
                                                     >> 0xcU)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                ((((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                   ^ 
                                                                   (((0U 
                                                                      != 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                                          >> 0xdU))) 
                                                                     & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                        | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                           & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                     ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                                                                     : 
                                                                    (((~ 
                                                                       ((0U 
                                                                         == 
                                                                         (7U 
                                                                          & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                                             >> 0xdU))) 
                                                                        | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                      & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                      ? 
                                                                     (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                                                      << 1U)
                                                                      : 0U))) 
                                                                  << 0x12U) 
                                                                 | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                    << 0x10U)))) 
                                                << 0x38U) 
                                               | (((QData)((IData)(
                                                                   (0x100000U 
                                                                    | (0xfffffU 
                                                                       & ((0x80000U 
                                                                           & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                                                              << 0x13U)) 
                                                                          | (vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
                                                                             >> 0xcU)))))) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
                                                                       << 0x14U) 
                                                                      | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                                         << 0x12U)))) 
                                                     >> 8U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x40000U 
                                                                 | (0x3ffffU 
                                                                    & ((0x20000U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg)) 
                                                                           << 0x11U)) 
                                                                       | (0x1ffffU 
                                                                          & (((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                              ^ 
                                                                              (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                                                >> 0xdU))) 
                                                                                & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                                | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                                & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                                ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                                                                                : 
                                                                               (((~ 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                                                >> 0xdU))) 
                                                                                | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                                & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                                 ? 
                                                                                (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                                                                << 1U)
                                                                                 : 0U))) 
                                                                             >> 0xeU))))))) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  ((((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                     ^ 
                                                                     (((0U 
                                                                        != 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                                            >> 0xdU))) 
                                                                       & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                          | ((~ (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                             & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                       ? vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0
                                                                       : 
                                                                      (((~ 
                                                                         ((0U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h2a1c05ed__0 
                                                                               >> 0xdU))) 
                                                                          | (IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                        & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                        ? 
                                                                       (vlSymsp->TOP.PvuTop__DOT__fracalign__DOT____VdfgTmp_h7b131dde__0 
                                                                        << 1U)
                                                                        : 0U))) 
                                                                    << 0x12U) 
                                                                   | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                      << 0x10U)))) 
                                                  >> 4U))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x10000U 
                                                                 | (0xffffU 
                                                                    & ((0x8000U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                                           << 0xfU)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
                                                                          >> 0x10U)))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
                                                                   << 0x10U) 
                                                                  | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                                                     << 0xeU)))))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x4000U 
                                                                 | (0x3fffU 
                                                                    & ((0x2000U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                                           << 0xdU)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
                                                                          >> 0x12U)))))) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
                                                                     << 0xeU) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                                       << 0xcU)))) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     (0x10000U 
                                                                      | (0xffffU 
                                                                         & ((0x8000U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                                                << 0xfU)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
                                                                               >> 0x10U)))))) 
                                                     >> 0x1cU)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x1000U 
                                                                 | (0xfffU 
                                                                    & ((0x800U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                                           << 0xbU)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
                                                                          >> 0x14U)))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
                                                                     << 0xcU) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                                       << 0xaU)))) 
                                                   << 8U) 
                                                  | ((QData)((IData)(
                                                                     (0x4000U 
                                                                      | (0x3fffU 
                                                                         & ((0x2000U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                                                                << 0xdU)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
                                                                               >> 0x12U)))))) 
                                                     >> 0x18U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x400U 
                                                                 | (0x3ffU 
                                                                    & ((0x200U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                                           << 9U)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
                                                                          >> 0x16U)))))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
                                                                     << 0xaU) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                       << 8U)))) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     (0x1000U 
                                                                      | (0xfffU 
                                                                         & ((0x800U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                                                                << 0xbU)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
                                                                               >> 0x14U)))))) 
                                                     >> 0x14U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x100U 
                                                                 | (0xffU 
                                                                    & ((0x80U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                                           << 7U)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
                                                                          >> 0x18U)))))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
                                                                     << 8U) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                                                       << 6U)))) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     (0x400U 
                                                                      | (0x3ffU 
                                                                         & ((0x200U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg)) 
                                                                                << 9U)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
                                                                               >> 0x16U)))))) 
                                                     >> 0x10U)))),
                   60,(0xfffffffffffffffULL & (((QData)((IData)(
                                                                (0x40U 
                                                                 | (0x3fU 
                                                                    & ((0x20U 
                                                                        & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                                                                           << 5U)) 
                                                                       | (vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
                                                                          >> 0x1aU)))))) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   ((vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
                                                                     << 6U) 
                                                                    | ((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                                                       << 4U)))) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     (0x100U 
                                                                      | (0xffU 
                                                                         & ((0x80U 
                                                                             & ((~ (IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                                                                << 7U)) 
                                                                            | (vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
                                                                               >> 0x18U)))))) 
                                                     >> 0xcU)))));
        VL_FWRITEF(0x80000002U,"genProds.io.partial_prods[14] = %x\n",
                   60,(((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProdLast_io_partial_prod)) 
                        << 0x1cU) | (QData)((IData)(
                                                    (0xfffffffU 
                                                     & ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                        << 0x1aU))))));
    }
}
