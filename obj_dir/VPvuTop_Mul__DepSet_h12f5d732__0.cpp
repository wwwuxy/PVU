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
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hc98c43e0__0;
    // Body
    vlSelf->__PVT__sum = (0x1ffU & (((0x100U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp) 
                                                << 1U)) 
                                     | (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp)) 
                                    + ((0x100U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp) 
                                                  << 1U)) 
                                       | (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp))));
    vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
        = ((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac 
            < vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac);
    vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
        = ((vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac 
            < vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac)
            ? vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac
            : vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac);
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 3U))) | (2U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                  >> 3U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 3U))) | (4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                  >> 3U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 1U))) | (2U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                  >> 1U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 1U))) | (4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                  >> 1U))));
    vlSelf->__VdfgTmp_h3bc26ad5__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b)) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b)))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 1U))) | (6U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                  >> 1U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0xdU))) | (2U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0xdU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0xdU))) | (4U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0xdU))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0xfU))) | (2U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0xfU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0xfU))) | (4U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0xfU))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0x11U))) | (2U == (7U & 
                                               (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                >> 0x11U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0x11U))) | (4U == (7U & 
                                               (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                >> 0x11U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0x13U))) | (2U == (7U & 
                                               (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                >> 0x13U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0x13U))) | (4U == (7U & 
                                               (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                >> 0x13U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0x15U))) | (2U == (7U & 
                                               (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                >> 0x15U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0x15U))) | (4U == (7U & 
                                               (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                >> 0x15U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0x17U))) | (2U == (7U & 
                                               (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                >> 0x17U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0x17U))) | (4U == (7U & 
                                               (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                >> 0x17U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0x19U))) | (2U == (7U & 
                                               (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                >> 0x19U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0x19U))) | (4U == (7U & 
                                               (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                >> 0x19U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 5U))) | (2U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                  >> 5U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 5U))) | (4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                  >> 5U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 7U))) | (2U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                  >> 7U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 7U))) | (4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                  >> 7U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 9U))) | (2U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                  >> 9U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 9U))) | (4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                  >> 9U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0xbU))) | (2U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0xbU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0xbU))) | (4U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0xbU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 3U))) | (6U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                  >> 3U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0xdU))) | (6U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0xdU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0xfU))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0x11U))) | (6U == (7U & 
                                               (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                >> 0x11U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0x13U))) | (6U == (7U & 
                                               (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                >> 0x13U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0x15U))) | (6U == (7U & 
                                               (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                >> 0x15U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0x17U))) | (6U == (7U & 
                                               (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                >> 0x17U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0x19U))) | (6U == (7U & 
                                               (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                >> 0x19U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 5U))) | (6U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                  >> 5U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 7U))) | (6U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                  >> 7U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 9U))) | (6U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                  >> 9U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                         >> 0xbU))) | (6U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0xbU))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_h3bc26ad5__0) 
           & ((2U == (3U & vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b)) 
              | (3U == (3U & vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                             >> 1U))) | ((1U == (7U 
                                                 & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                   >> 1U))))))) 
           & ((4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                            >> 1U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                             >> 3U))) | ((1U == (7U 
                                                 & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                    >> 3U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 3U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                   >> 3U))))))) 
           & ((4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                            >> 3U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                             >> 0xdU))) | ((1U == (7U 
                                                   & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                            >> 0xdU))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                             >> 0xfU))) | ((1U == (7U 
                                                   & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                     >> 0xfU))))))) 
           & ((4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                            >> 0xfU))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                             >> 0x11U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0x11U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                    >> 0x11U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                      >> 0x11U))))))) 
           & ((4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                            >> 0x11U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                             >> 0x13U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0x13U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                    >> 0x13U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                      >> 0x13U))))))) 
           & ((4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                            >> 0x13U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                             >> 0x15U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0x15U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                    >> 0x15U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                      >> 0x15U))))))) 
           & ((4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                            >> 0x15U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                             >> 0x17U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0x17U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                    >> 0x17U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                      >> 0x17U))))))) 
           & ((4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                            >> 0x17U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                             >> 0x19U))) | ((1U == 
                                             (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0x19U))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                    >> 0x19U))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                      >> 0x19U))))))) 
           & ((4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                            >> 0x19U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                             >> 5U))) | ((1U == (7U 
                                                 & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                   >> 5U))))))) 
           & ((4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                            >> 5U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                             >> 7U))) | ((1U == (7U 
                                                 & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                    >> 7U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 7U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                   >> 7U))))))) 
           & ((4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                            >> 7U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                             >> 9U))) | ((1U == (7U 
                                                 & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                   >> 9U))))))) 
           & ((4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                            >> 9U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                             >> 0xbU))) | ((1U == (7U 
                                                   & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                      >> 0xbU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                   >> 0xbU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                     >> 0xbU))))))) 
           & ((4U == (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                            >> 0xbU))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (3U & vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b)) 
                              & ((1U == (3U & vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b)) 
                                 | ((2U != (3U & vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b)) 
                                    & (3U == (3U & vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b)))))
                              ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                              : (((IData)(vlSelf->__VdfgTmp_h3bc26ad5__0) 
                                  & (2U == (3U & vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b)))
                                  ? (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_31__DOT___io_carry_T 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
           ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                            >> 1U))) 
                              & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                              : (((~ ((0U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 1U))) 
                                      | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                            >> 3U))) 
                              & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                              : (((~ ((0U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 3U))) 
                                      | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                            >> 0x15U))) 
                              & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                              : (((~ ((0U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0x15U))) 
                                      | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                            >> 0x17U))) 
                              & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                              : (((~ ((0U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0x17U))) 
                                      | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                            >> 0x19U))) 
                              & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                              : (((~ ((0U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0x19U))) 
                                      | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                            >> 5U))) 
                              & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                              : (((~ ((0U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 5U))) 
                                      | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                            >> 7U))) 
                              & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                              : (((~ ((0U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 7U))) 
                                      | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                            >> 9U))) 
                              & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                              : (((~ ((0U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 9U))) 
                                      | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                     << 1U) : 0U))));
    __Vtemp_hc98c43e0__0[1U] = (0x1000U | (IData)((
                                                   (((QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))))) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        (0x1fffffffU 
                                                                         & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                            ^ 
                                                                            (((0U 
                                                                               != 
                                                                               (7U 
                                                                                & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                                                >> 0xdU))) 
                                                                              & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                                | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                              ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                                                                              : 
                                                                             (((~ 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                                                >> 0xdU))) 
                                                                                | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                               & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                               ? 
                                                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                                                               << 1U)
                                                                               : 0U)))))) 
                                                        << 0xeU) 
                                                       | (QData)((IData)(
                                                                         ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                          << 0xcU))))) 
                                                   >> 0x20U)));
    vlSelf->__VdfgTmp_hd44a9f03__0[0U] = (IData)((((QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))))) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fffffffU 
                                                                       & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                                          ^ 
                                                                          (((0U 
                                                                             != 
                                                                             (7U 
                                                                              & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                                                >> 0xdU))) 
                                                                            & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4) 
                                                                               | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                                & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                                            ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                                                                            : 
                                                                           (((~ 
                                                                              ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                                                >> 0xdU))) 
                                                                               | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT___GEN_4))) 
                                                                             & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                                             ? 
                                                                            (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                                                             << 1U)
                                                                             : 0U)))))) 
                                                      << 0xeU) 
                                                     | (QData)((IData)(
                                                                       ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                        << 0xcU))))));
    vlSelf->__VdfgTmp_hd44a9f03__0[1U] = __Vtemp_hc98c43e0__0[1U];
    vlSelf->__VdfgTmp_hd44a9f03__0[2U] = ((((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                            ^ (((0U 
                                                 != 
                                                 (7U 
                                                  & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                     >> 0xfU))) 
                                                & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                                   | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                      & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                                                : (
                                                   ((~ 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                           >> 0xfU))) 
                                                      | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                                    & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                    ? 
                                                   (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                                    << 1U)
                                                    : 0U))) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                           << 6U));
    vlSelf->__VdfgTmp_hd44a9f03__0[3U] = (0x40U | (
                                                   (0x20U 
                                                    & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)) 
                                                       << 5U)) 
                                                   | (0x1fU 
                                                      & (((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                                          ^ 
                                                          (((0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                                 >> 0xfU))) 
                                                            & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4) 
                                                               | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                                  & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                            ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                                                            : 
                                                           (((~ 
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                                    >> 0xfU))) 
                                                               | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT___GEN_4))) 
                                                             & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                             ? 
                                                            (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                                             << 1U)
                                                             : 0U))) 
                                                         >> 0x18U))));
    vlSelf->__VdfgTmp_hd44a9f03__0[4U] = (((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg)) 
                                           << 0x1fU) 
                                          | ((0x7ffffffcU 
                                              & (((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                                  ^ 
                                                  (((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                         >> 0x11U))) 
                                                    & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4) 
                                                       | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                          & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                    ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                                                    : 
                                                   (((~ 
                                                      ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                            >> 0x11U))) 
                                                       | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT___GEN_4))) 
                                                     & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                     ? 
                                                    (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                                     << 1U)
                                                     : 0U))) 
                                                 << 2U)) 
                                             | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg)));
    vlSelf->__VdfgTmp_hd44a9f03__0[5U] = (1U | ((((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                                  ^ 
                                                  (((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                         >> 0x13U))) 
                                                    & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                                       | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                          & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                    ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                                                    : 
                                                   (((~ 
                                                      ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                            >> 0x13U))) 
                                                       | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                                     & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                     ? 
                                                    (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                                     << 1U)
                                                     : 0U))) 
                                                 << 0x1cU) 
                                                | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                                   << 0x1aU)));
    vlSelf->__VdfgTmp_hd44a9f03__0[6U] = ((0x2000000U 
                                           & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg)) 
                                              << 0x19U)) 
                                          | (0x1ffffffU 
                                             & (((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                                 ^ 
                                                 (((0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                        >> 0x13U))) 
                                                   & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4) 
                                                      | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                         & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                                                   ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                                                   : 
                                                  (((~ 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                                           >> 0x13U))) 
                                                      | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT___GEN_4))) 
                                                    & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                    ? 
                                                   (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                                    << 1U)
                                                    : 0U))) 
                                                >> 4U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                          ^ (((0U != (7U & (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                            >> 0xbU))) 
                              & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4) 
                                 | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                    & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                              ? vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a
                              : (((~ ((0U == (7U & 
                                              (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_b 
                                               >> 0xbU))) 
                                      | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT___GEN_4))) 
                                  & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                  ? (vlSelf->radix4BoothMultiplier__DOT____Vcellinp__genProds__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_2__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 2U) ^ vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_4__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 4U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                            >> 2U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_5__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 5U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                            >> 3U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_6__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 6U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                            >> 4U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_7__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 7U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                            >> 5U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_8__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 8U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                            >> 6U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_9__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 9U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                            >> 7U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_10__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0xaU) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                              >> 8U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_11__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0xbU) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                              >> 9U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_12__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0xcU) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                              >> 0xaU)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_13__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0xdU) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                              >> 0xbU)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_14__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0xeU) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                              >> 0xcU)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_15__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0xfU) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                              >> 0xdU)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_16__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0x10U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                               >> 0xeU)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_17__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0x11U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                               >> 0xfU)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_18__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0x12U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                               >> 0x10U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_19__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0x13U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                               >> 0x11U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_20__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0x14U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                               >> 0x12U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_21__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0x15U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                               >> 0x13U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_22__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0x16U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                               >> 0x14U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_23__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0x17U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                               >> 0x15U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_24__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0x18U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                               >> 0x16U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_25__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0x19U) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                               >> 0x17U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_26__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0x1aU) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                               >> 0x18U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_27__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0x1bU) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                               >> 0x19U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_28__DOT___io_carry_T 
        = (1U & ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
                  >> 0x1cU) ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                               >> 0x1aU)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_29__DOT___io_carry_T 
        = (1U & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                 ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
                    >> 0x1bU)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT__fa_30__DOT___io_carry_T 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
           ^ (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
              >> 0x1cU));
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = (IData)((((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))))) 
                    << 0x33U) | (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod)) 
                                  << 0x16U) | (QData)((IData)(
                                                              ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                               << 0x14U))))));
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = (0x100000U | (IData)(((((QData)((IData)((1U 
                                                   & (~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))))) 
                                  << 0x33U) | (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_10_io_partial_prod)) 
                                                << 0x16U) 
                                               | (QData)((IData)(
                                                                 ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                  << 0x14U))))) 
                                >> 0x20U)));
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
            << 0x10U) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                         << 0xeU));
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = (0x4000U | ((0x2000U & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg)) 
                                  << 0xdU)) | (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_11_io_partial_prod 
                                               >> 0x10U)));
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
            << 0xaU) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                        << 8U));
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = ((0x80U & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg)) 
                     << 7U)) | (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_12_io_partial_prod 
                                >> 0x16U));
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
           << 2U);
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = (IData)((0x1000000000ULL | (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))))) 
                                        << 0x23U) | 
                                       (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod)) 
                                         << 6U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                   << 4U))))))));
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = (IData)(((0x1000000000ULL | (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg)) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))))) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_2_io_partial_prod)) 
                                            << 6U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                              << 4U))))))) 
                   >> 0x20U));
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = (0x40000000U | ((0x20000000U & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg)) 
                                          << 0x1dU)) 
                          | vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_3_io_partial_prod));
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
            << 0x1aU) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                         << 0x18U));
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = (0x1000000U | ((0x800000U & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg)) 
                                       << 0x17U)) | 
                         (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_4_io_partial_prod 
                          >> 6U)));
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = ((vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
            << 0x14U) | ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                         << 0x12U));
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = (0x40000U | ((0x20000U & ((~ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg)) 
                                    << 0x11U)) | (vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                                  >> 0xcU)));
}
