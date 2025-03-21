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
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one 
        = (1U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                 >> 3U));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one 
        = (1U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                 >> 7U));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one 
        = (1U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                 >> 0xbU));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one 
        = (1U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                 >> 0xfU));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                         >> 1U))) | (2U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                  >> 1U))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                         >> 1U))) | (4U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                  >> 1U))));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                         >> 5U))) | (2U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                  >> 5U))));
    vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                         >> 5U))) | (4U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                  >> 5U))));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                         >> 9U))) | (2U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                  >> 9U))));
    vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                         >> 9U))) | (4U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                  >> 9U))));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4 
        = ((1U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                         >> 0xdU))) | (2U == (7U & 
                                              ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                               >> 0xdU))));
    vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0 
        = ((3U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                         >> 0xdU))) | (4U == (7U & 
                                              ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                               >> 0xdU))));
    vlSelf->__VdfgTmp_he79a7065__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))))));
    vlSelf->__VdfgTmp_hfa1d381d__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                    >> 4U))) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                      >> 4U))))));
    vlSelf->__VdfgTmp_h9f372218__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                    >> 8U))) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                      >> 8U))))));
    vlSelf->__VdfgTmp_h56183a7d__0 = (1U & (~ ((0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                    >> 0xcU))) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                      >> 0xcU))))));
    vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                         >> 1U))) | (6U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                  >> 1U))));
    vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                         >> 5U))) | (6U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                  >> 5U))));
    vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                         >> 9U))) | (6U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                  >> 9U))));
    vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0 
        = ((5U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                         >> 0xdU))) | (6U == (7U & 
                                              ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                               >> 0xdU))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_he79a7065__0) 
           & ((2U == (3U & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
              | (3U == (3U & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac)))));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_hfa1d381d__0) 
           & ((2U == (3U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                            >> 4U))) | (3U == (3U & 
                                               ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                >> 4U)))));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_h9f372218__0) 
           & ((2U == (3U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                            >> 8U))) | (3U == (3U & 
                                               ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                >> 8U)))));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->__VdfgTmp_h56183a7d__0) 
           & ((2U == (3U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                            >> 0xcU))) | (3U == (3U 
                                                 & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                    >> 0xcU)))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                             >> 1U))) | ((1U == (7U 
                                                 & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                    >> 1U))) 
                                         | ((2U == 
                                             (7U & 
                                              ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                               >> 1U))) 
                                            | (3U == 
                                               (7U 
                                                & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                   >> 1U))))))) 
           & ((4U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                            >> 1U))) | (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                             >> 5U))) | ((1U == (7U 
                                                 & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                    >> 5U))) 
                                         | ((2U == 
                                             (7U & 
                                              ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                               >> 5U))) 
                                            | (3U == 
                                               (7U 
                                                & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                   >> 5U))))))) 
           & ((4U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                            >> 5U))) | (IData)(vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                             >> 9U))) | ((1U == (7U 
                                                 & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                    >> 9U))) 
                                         | ((2U == 
                                             (7U & 
                                              ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                               >> 9U))) 
                                            | (3U == 
                                               (7U 
                                                & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                   >> 9U))))))) 
           & ((4U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                            >> 9U))) | (IData)(vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((~ ((0U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                             >> 0xdU))) | ((1U == (7U 
                                                   & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                      >> 0xdU))) 
                                           | ((2U == 
                                               (7U 
                                                & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                   >> 0xdU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                     >> 0xdU))))))) 
           & ((4U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                            >> 0xdU))) | (IData)(vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0)));
}

VL_INLINE_OPT void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1(VPvuTop_Mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__1\n"); );
    // Body
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
           & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac));
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
           & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
              >> 1U));
    vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
           & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
              >> 2U));
    vlSelf->radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
           & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
              >> 4U));
    vlSelf->radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
           & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
              >> 5U));
    vlSelf->radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
           & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
              >> 6U));
    vlSelf->radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
           & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
              >> 8U));
    vlSelf->radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
           & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
              >> 9U));
    vlSelf->radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
           & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
              >> 0xaU));
    vlSelf->radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
           & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
              >> 0xcU));
    vlSelf->radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
           & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
              >> 0xdU));
    vlSelf->radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
           & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
              >> 0xeU));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod 
        = (0x1fU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                    ^ (((0U != (3U & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                        & ((1U == (3U & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                           | ((2U != (3U & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                              & (3U == (3U & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))))))
                        ? (0xfU & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac))
                        : (((IData)(vlSelf->__VdfgTmp_he79a7065__0) 
                            & (2U == (3U & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))))
                            ? (0x1eU & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                        << 1U)) : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProdFirst_io_partial_prod 
        = (0x1fU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                    ^ (((0U != (3U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                      >> 4U))) & ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                       >> 4U))) 
                                                  | (IData)(
                                                            ((0x30U 
                                                              == 
                                                              (0x30U 
                                                               & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                                             & (2U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                                    >> 4U)))))))
                        ? (0xfU & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                   >> 4U)) : (((IData)(vlSelf->__VdfgTmp_hfa1d381d__0) 
                                               & (0x20U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))))
                                               ? (0x1eU 
                                                  & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                     >> 3U))
                                               : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProdFirst_io_partial_prod 
        = (0x1fU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                    ^ (((0U != (3U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                      >> 8U))) & ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                       >> 8U))) 
                                                  | (IData)(
                                                            ((0x300U 
                                                              == 
                                                              (0x300U 
                                                               & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                                             & (2U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                                    >> 8U)))))))
                        ? (0xfU & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                   >> 8U)) : (((IData)(vlSelf->__VdfgTmp_h9f372218__0) 
                                               & (0x200U 
                                                  == 
                                                  (0x300U 
                                                   & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))))
                                               ? (0x1eU 
                                                  & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                     >> 7U))
                                               : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProdFirst_io_partial_prod 
        = (0x1fU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))) 
                    ^ (((0U != (3U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                      >> 0xcU))) & 
                        ((1U == (3U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                       >> 0xcU))) | (IData)(
                                                            ((0x3000U 
                                                              == 
                                                              (0x3000U 
                                                               & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))) 
                                                             & (2U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                                    >> 0xcU)))))))
                        ? (0xfU & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                   >> 0xcU)) : (((IData)(vlSelf->__VdfgTmp_h56183a7d__0) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x3000U 
                                                     & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac))))
                                                 ? 
                                                (0x1eU 
                                                 & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                    >> 0xbU))
                                                 : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                    ^ (((0U != (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                      >> 1U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                  | ((~ (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                     & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                        ? (0xfU & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac))
                        : (((~ ((0U == (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                              >> 1U))) 
                                | (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                            & (IData)(vlSelf->radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                            ? (0x1eU & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                        << 1U)) : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                    ^ (((0U != (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                      >> 5U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                  | ((~ (IData)(vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                     & (IData)(vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                        ? (0xfU & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                   >> 4U)) : (((~ (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                        >> 5U))) 
                                                   | (IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                               & (IData)(vlSelf->radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                               ? (0x1eU 
                                                  & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                     >> 3U))
                                               : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                    ^ (((0U != (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                      >> 9U))) & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                                                  | ((~ (IData)(vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                                                     & (IData)(vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                        ? (0xfU & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                   >> 8U)) : (((~ (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                        >> 9U))) 
                                                   | (IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                               & (IData)(vlSelf->radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                               ? (0x1eU 
                                                  & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                     >> 7U))
                                               : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fU & ((- (IData)((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                    ^ (((0U != (7U & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                      >> 0xdU))) & 
                        ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4) 
                         | ((~ (IData)(vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0)) 
                            & (IData)(vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h2f460be7__0))))
                        ? (0xfU & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                   >> 0xcU)) : (((~ 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Frac) 
                                                        >> 0xdU))) 
                                                   | (IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT___GEN_4))) 
                                                 & (IData)(vlSelf->radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h1678a7aa__0))
                                                 ? 
                                                (0x1eU 
                                                 & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                    >> 0xbU))
                                                 : 0U))));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T 
        = (1U & (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                  >> 2U) ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T 
        = (1U & (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                  >> 4U) ^ ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod) 
                            >> 2U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T 
        = (1U & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                 ^ ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod) 
                    >> 3U)));
    vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
           ^ ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod) 
              >> 4U));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T 
        = (1U & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                  >> 2U) ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod)));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T 
        = (1U & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                  >> 4U) ^ ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod) 
                            >> 2U)));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T 
        = (1U & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                 ^ ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod) 
                    >> 3U)));
    vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
           ^ ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod) 
              >> 4U));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T 
        = (1U & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                  >> 2U) ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod)));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T 
        = (1U & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                  >> 4U) ^ ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod) 
                            >> 2U)));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T 
        = (1U & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                 ^ ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod) 
                    >> 3U)));
    vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
           ^ ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod) 
              >> 4U));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T 
        = (1U & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                  >> 2U) ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod)));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T 
        = (1U & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                  >> 4U) ^ ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod) 
                            >> 2U)));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T 
        = (1U & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                 ^ ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod) 
                    >> 3U)));
    vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T 
        = ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
           ^ ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod) 
              >> 4U));
}

VL_INLINE_OPT void VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__2(VPvuTop_Mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_Mul___ico_comb__TOP__PvuTop__DOT__mul__2\n"); );
    // Body
    vlSelf->__PVT__sum_3 = (0x7fU & (((0x40U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp 
                                                >> 0x11U)) 
                                      | (0x3fU & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp 
                                                  >> 0x12U))) 
                                     + ((0x40U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp 
                                                  >> 0x11U)) 
                                        | (0x3fU & 
                                           (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp 
                                            >> 0x12U)))));
    vlSelf->__PVT__sum_2 = (0x7fU & (((0x40U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp 
                                                >> 0xbU)) 
                                      | (0x3fU & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp 
                                                  >> 0xcU))) 
                                     + ((0x40U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp 
                                                  >> 0xbU)) 
                                        | (0x3fU & 
                                           (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp 
                                            >> 0xcU)))));
    vlSelf->__PVT__sum_1 = (0x7fU & (((0x40U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp 
                                                >> 5U)) 
                                      | (0x3fU & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp 
                                                  >> 6U))) 
                                     + ((0x40U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp 
                                                  >> 5U)) 
                                        | (0x3fU & 
                                           (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp 
                                            >> 6U)))));
    vlSelf->__PVT__sum = (0x7fU & (((0x40U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp 
                                              << 1U)) 
                                    | (0x3fU & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Exp)) 
                                   + ((0x40U & (vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp 
                                                << 1U)) 
                                      | (0x3fU & vlSymsp->TOP.PvuTop__DOT____Vcellout__decode2__io_Exp))));
    vlSelf->io_pir_exp_o = ((((0x40U & (IData)(vlSelf->__PVT__sum_3))
                               ? 0x1fU : (0x3fU & (IData)(vlSelf->__PVT__sum_3))) 
                             << 0x12U) | ((((0x40U 
                                             & (IData)(vlSelf->__PVT__sum_2))
                                             ? 0x1fU
                                             : (0x3fU 
                                                & (IData)(vlSelf->__PVT__sum_2))) 
                                           << 0xcU) 
                                          | ((((0x40U 
                                                & (IData)(vlSelf->__PVT__sum_1))
                                                ? 0x1fU
                                                : (0x3fU 
                                                   & (IData)(vlSelf->__PVT__sum_1))) 
                                              << 6U) 
                                             | ((0x40U 
                                                 & (IData)(vlSelf->__PVT__sum))
                                                 ? 0x1fU
                                                 : 
                                                (0x3fU 
                                                 & (IData)(vlSelf->__PVT__sum))))));
    vlSelf->io_pir_frac_o = ((((0x40U & (IData)(vlSelf->__PVT__sum_3))
                                ? 0U : (0xffU & (((
                                                   (((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T) 
                                                     & (IData)(vlSelf->radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z)) 
                                                    << 7U) 
                                                   | (0xffffff80U 
                                                      & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                          << 7U) 
                                                         & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                            << 3U)))) 
                                                  | (((((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T) 
                                                        & (IData)(vlSelf->radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z)) 
                                                       << 6U) 
                                                      | (0xffffffc0U 
                                                         & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                             << 6U) 
                                                            & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                               << 3U)))) 
                                                     | ((0x20U 
                                                         & ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T) 
                                                              & (IData)(vlSelf->radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z)) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                   << 1U) 
                                                                  & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                     << 3U))))) 
                                                        | ((0x10U 
                                                            & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                << 1U) 
                                                               & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                  << 3U))) 
                                                           | ((8U 
                                                               & ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T) 
                                                                    & (IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                   << 3U) 
                                                                  | (0xfffffff8U 
                                                                     & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                         << 1U) 
                                                                        & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                           << 3U))))) 
                                                              | (((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                  & (IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                 << 1U)))))) 
                                                 + 
                                                 ((0x80U 
                                                   & ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                        ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                       << 7U) 
                                                      ^ 
                                                      (0xffff80U 
                                                       & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
                                                           << 7U) 
                                                          & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                             >> 8U))))) 
                                                  | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T) 
                                                       ^ (IData)(vlSelf->radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z)) 
                                                      << 6U) 
                                                     | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T) 
                                                          ^ (IData)(vlSelf->radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z)) 
                                                         << 5U) 
                                                        | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T) 
                                                             ^ (IData)(vlSelf->radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z)) 
                                                            << 4U) 
                                                           | ((8U 
                                                               & ((0xfffffff8U 
                                                                   & (IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProdFirst_io_partial_prod)) 
                                                                  ^ 
                                                                  (0xfffffff8U 
                                                                   & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                      << 2U)))) 
                                                              | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T) 
                                                                   ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                  << 2U) 
                                                                 | ((2U 
                                                                     & (IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProdFirst_io_partial_prod)) 
                                                                    | (1U 
                                                                       & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                          ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier_3__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))))))))))) 
                              << 0x18U) | ((((0x40U 
                                              & (IData)(vlSelf->__PVT__sum_2))
                                              ? 0U : 
                                             (0xffU 
                                              & ((((((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T) 
                                                     & (IData)(vlSelf->radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z)) 
                                                    << 7U) 
                                                   | (0xffffff80U 
                                                      & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                          << 7U) 
                                                         & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                            << 3U)))) 
                                                  | (((((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T) 
                                                        & (IData)(vlSelf->radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z)) 
                                                       << 6U) 
                                                      | (0xffffffc0U 
                                                         & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                             << 6U) 
                                                            & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                               << 3U)))) 
                                                     | ((0x20U 
                                                         & ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T) 
                                                              & (IData)(vlSelf->radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z)) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                   << 1U) 
                                                                  & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                     << 3U))))) 
                                                        | ((0x10U 
                                                            & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                << 1U) 
                                                               & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                  << 3U))) 
                                                           | ((8U 
                                                               & ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T) 
                                                                    & (IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                   << 3U) 
                                                                  | (0xfffffff8U 
                                                                     & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                         << 1U) 
                                                                        & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                           << 3U))))) 
                                                              | (((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                  & (IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                 << 1U)))))) 
                                                 + 
                                                 ((0x80U 
                                                   & ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                        ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                       << 7U) 
                                                      ^ 
                                                      (0xfffff80U 
                                                       & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
                                                           << 7U) 
                                                          & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                             >> 4U))))) 
                                                  | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T) 
                                                       ^ (IData)(vlSelf->radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z)) 
                                                      << 6U) 
                                                     | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T) 
                                                          ^ (IData)(vlSelf->radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z)) 
                                                         << 5U) 
                                                        | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T) 
                                                             ^ (IData)(vlSelf->radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z)) 
                                                            << 4U) 
                                                           | ((8U 
                                                               & ((0xfffffff8U 
                                                                   & (IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProdFirst_io_partial_prod)) 
                                                                  ^ 
                                                                  (0xfffffff8U 
                                                                   & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                      << 2U)))) 
                                                              | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T) 
                                                                   ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                  << 2U) 
                                                                 | ((2U 
                                                                     & (IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProdFirst_io_partial_prod)) 
                                                                    | (1U 
                                                                       & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                          ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier_2__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))))))))))) 
                                            << 0x10U) 
                                           | ((((0x40U 
                                                 & (IData)(vlSelf->__PVT__sum_1))
                                                 ? 0U
                                                 : 
                                                (0xffU 
                                                 & ((((((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T) 
                                                        & (IData)(vlSelf->radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z)) 
                                                       << 7U) 
                                                      | (0xffffff80U 
                                                         & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                             << 7U) 
                                                            & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                               << 3U)))) 
                                                     | (((((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T) 
                                                           & (IData)(vlSelf->radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z)) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                                << 6U) 
                                                               & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                  << 3U)))) 
                                                        | ((0x20U 
                                                            & ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T) 
                                                                 & (IData)(vlSelf->radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z)) 
                                                                << 5U) 
                                                               | (0xffffffe0U 
                                                                  & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                      << 1U) 
                                                                     & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                        << 3U))))) 
                                                           | ((0x10U 
                                                               & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                   << 1U) 
                                                                  & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                     << 3U))) 
                                                              | ((8U 
                                                                  & ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T) 
                                                                       & (IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                      << 3U) 
                                                                     | (0xfffffff8U 
                                                                        & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                            << 1U) 
                                                                           & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                              << 3U))))) 
                                                                 | (((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                     & (IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                    << 1U)))))) 
                                                    + 
                                                    ((0x80U 
                                                      & ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                           ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                          << 7U) 
                                                         ^ 
                                                         (0xffffff80U 
                                                          & (((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
                                                              << 7U) 
                                                             & (IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac))))) 
                                                     | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T) 
                                                          ^ (IData)(vlSelf->radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z)) 
                                                         << 6U) 
                                                        | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T) 
                                                             ^ (IData)(vlSelf->radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z)) 
                                                            << 5U) 
                                                           | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T) 
                                                                ^ (IData)(vlSelf->radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z)) 
                                                               << 4U) 
                                                              | ((8U 
                                                                  & ((0xfffffff8U 
                                                                      & (IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProdFirst_io_partial_prod)) 
                                                                     ^ 
                                                                     (0xfffffff8U 
                                                                      & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                         << 2U)))) 
                                                                 | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T) 
                                                                      ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                     << 2U) 
                                                                    | ((2U 
                                                                        & (IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProdFirst_io_partial_prod)) 
                                                                       | (1U 
                                                                          & ((IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                             ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier_1__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))))))))))) 
                                               << 8U) 
                                              | ((0x40U 
                                                  & (IData)(vlSelf->__PVT__sum))
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((((((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T) 
                                                         & (IData)(vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z)) 
                                                        << 7U) 
                                                       | (0xffffff80U 
                                                          & (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                              << 7U) 
                                                             & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                << 3U)))) 
                                                      | (((((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T) 
                                                            & (IData)(vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z)) 
                                                           << 6U) 
                                                          | (0xffffffc0U 
                                                             & (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg) 
                                                                 << 6U) 
                                                                & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                   << 3U)))) 
                                                         | ((0x20U 
                                                             & ((((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T) 
                                                                  & (IData)(vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z)) 
                                                                 << 5U) 
                                                                | (0xffffffe0U 
                                                                   & (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                       << 1U) 
                                                                      & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                         << 3U))))) 
                                                            | ((0x10U 
                                                                & (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                    << 1U) 
                                                                   & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                      << 3U))) 
                                                               | ((8U 
                                                                   & ((((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T) 
                                                                        & (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                       << 3U) 
                                                                      | (0xfffffff8U 
                                                                         & (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                             << 1U) 
                                                                            & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                               << 3U))))) 
                                                                  | (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                      & (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                                     << 1U)))))) 
                                                     + 
                                                     ((0x80U 
                                                       & ((((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                                            ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg)) 
                                                           << 7U) 
                                                          ^ 
                                                          (0xffffff80U 
                                                           & (((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdLast__DOT___boothEncoder_io_one) 
                                                               << 7U) 
                                                              & ((IData)(vlSymsp->TOP.PvuTop__DOT____Vcellout__decode1__io_Frac) 
                                                                 << 4U))))) 
                                                      | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_6__DOT___io_carry_T) 
                                                           ^ (IData)(vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_6__io_z)) 
                                                          << 6U) 
                                                         | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_5__DOT___io_carry_T) 
                                                              ^ (IData)(vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_5__io_z)) 
                                                             << 5U) 
                                                            | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_4__DOT___io_carry_T) 
                                                                 ^ (IData)(vlSelf->radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT____Vcellinp__fa_4__io_z)) 
                                                                << 4U) 
                                                               | ((8U 
                                                                   & ((0xfffffff8U 
                                                                       & (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod)) 
                                                                      ^ 
                                                                      (0xfffffff8U 
                                                                       & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProd_io_partial_prod) 
                                                                          << 2U)))) 
                                                                  | ((((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__csaTree__DOT__compressor__DOT__fa_2__DOT___io_carry_T) 
                                                                       ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg)) 
                                                                      << 2U) 
                                                                     | ((2U 
                                                                         & (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT___genProdFirst_io_partial_prod) 
                                                                              ^ (IData)(vlSelf->__PVT__radix4BoothMultiplier__DOT__genProds__DOT__genProdFirst__DOT___boothEncoder_io_neg))))))))))))))));
}
