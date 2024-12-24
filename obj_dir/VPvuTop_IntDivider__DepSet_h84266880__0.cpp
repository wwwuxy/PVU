// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_IntDivider.h"
#include "VPvuTop__Syms.h"

VL_INLINE_OPT void VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider__0\n"); );
    // Body
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
        = (0xfffffffffULL & ((QData)((IData)((0xffffffU 
                                              & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_0))))) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_0) 
                                                    * 
                                                    (0xffffffU 
                                                     & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_0))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_0) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_0) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x2000ULL == (0x3000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000ULL == (0xc000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000ULL == (0x30000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000ULL == (0x300000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000ULL == (0xc00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000ULL == (0x3000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000ULL == (0x30000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000000ULL == (0xc00000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000ULL == (0xc0000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000000ULL == (0x300000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                          >> 0xdU)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000ULL == (0xa000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000ULL == (0x28000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000ULL == (0xa0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000ULL == (0x280000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000ULL == (0xa00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000ULL == (0x2800000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000ULL == (0xa000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000ULL == (0x28000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000000ULL == (0xa00000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000ULL == (0xa0000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000000ULL == (0x280000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                << 0xcU) : ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
        = (QData)((IData)(((0x7fffffcU & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000ULL 
                                                         == 
                                                         (0x6000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000ULL 
                                                           == 
                                                           (0x6000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000ULL 
                                                               == 
                                                               (0xe000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0xdU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U))) 
                                          << 2U)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2 
        = (QData)((IData)(((0x1ffffff0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10000ULL 
                                                            == 
                                                            (0x18000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x8000ULL 
                                                              == 
                                                              (0x18000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18000ULL 
                                                                == 
                                                                (0x38000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xfU))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 4U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                              << 2U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
        = (QData)((IData)(((0x7fffffc0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40000ULL 
                                                            == 
                                                            (0x60000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x20000ULL 
                                                              == 
                                                              (0x60000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60000ULL 
                                                                == 
                                                                (0xe0000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x11U))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 6U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                              << 4U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000ULL 
                                                         == 
                                                         (0x180000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000ULL 
                                                           == 
                                                           (0x180000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000ULL 
                                                               == 
                                                               (0x380000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x13U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000ULL 
                                                         == 
                                                         (0x600000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000ULL 
                                                           == 
                                                           (0x600000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000ULL 
                                                               == 
                                                               (0xe00000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x15U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x1000000ULL 
                                                         == 
                                                         (0x1800000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x800000ULL 
                                                           == 
                                                           (0x1800000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x1800000ULL 
                                                               == 
                                                               (0x3800000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x17U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000000ULL 
                                                         == 
                                                         (0x6000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000000ULL 
                                                           == 
                                                           (0x6000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000000ULL 
                                                               == 
                                                               (0xe000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x19U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xeU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                        << 0xcU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x10000000ULL 
                                                         == 
                                                         (0x18000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x8000000ULL 
                                                           == 
                                                           (0x18000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x18000000ULL 
                                                               == 
                                                               (0x38000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1bU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12 
        = (((QData)((IData)(((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                            >> 0x23U)))
                              ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                 << 0xcU) : 0U))) << 0x18U) 
           | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                              << 0x16U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x40000000ULL 
                                                         == 
                                                         (0x60000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x20000000ULL 
                                                           == 
                                                           (0x60000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x60000000ULL 
                                                               == 
                                                               (0xe0000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1dU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000000ULL 
                                                         == 
                                                         (0x180000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000000ULL 
                                                           == 
                                                           (0x180000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000000ULL 
                                                               == 
                                                               (0x380000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1fU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000000ULL 
                                                         == 
                                                         (0x600000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000000ULL 
                                                           == 
                                                           (0x600000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000000ULL 
                                                               == 
                                                               (0xe00000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x21U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x16U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                         << 0x14U))));
    vlSelf->__VdfgTmp_h037a5002__0 = ((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h32ec1818__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                          | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h5febfed3__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_he8298333__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_h160609f1__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h9e4e06c7__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h041e3646__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                         ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                            ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)));
    vlSelf->__VdfgTmp_h47de5b44__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                          & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                         | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                             & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12) 
                                            | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                               | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                   | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                                  & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h037a5002__0 ^ (vlSelf->__VdfgTmp_h32ec1818__0 
                                             ^ (vlSelf->__VdfgTmp_h5febfed3__0 
                                                ^ vlSelf->__VdfgTmp_he8298333__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h037a5002__0 & vlSelf->__VdfgTmp_h32ec1818__0) 
           | ((vlSelf->__VdfgTmp_h32ec1818__0 & vlSelf->__VdfgTmp_h5febfed3__0) 
              | ((vlSelf->__VdfgTmp_h5febfed3__0 & vlSelf->__VdfgTmp_he8298333__0) 
                 | ((vlSelf->__VdfgTmp_h037a5002__0 
                     & vlSelf->__VdfgTmp_h5febfed3__0) 
                    | ((vlSelf->__VdfgTmp_h037a5002__0 
                        | vlSelf->__VdfgTmp_h32ec1818__0) 
                       & vlSelf->__VdfgTmp_he8298333__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h160609f1__0 ^ (vlSelf->__VdfgTmp_h9e4e06c7__0 
                                             ^ (vlSelf->__VdfgTmp_h041e3646__0 
                                                ^ vlSelf->__VdfgTmp_h47de5b44__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h160609f1__0 & vlSelf->__VdfgTmp_h9e4e06c7__0) 
           | ((vlSelf->__VdfgTmp_h9e4e06c7__0 & vlSelf->__VdfgTmp_h041e3646__0) 
              | ((vlSelf->__VdfgTmp_h041e3646__0 & vlSelf->__VdfgTmp_h47de5b44__0) 
                 | ((vlSelf->__VdfgTmp_h160609f1__0 
                     & vlSelf->__VdfgTmp_h041e3646__0) 
                    | ((vlSelf->__VdfgTmp_h160609f1__0 
                        | vlSelf->__VdfgTmp_h9e4e06c7__0) 
                       & vlSelf->__VdfgTmp_h47de5b44__0)))));
}

VL_INLINE_OPT void VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider__0\n"); );
    // Body
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
        = (0xfffffffffULL & ((QData)((IData)((0xffffffU 
                                              & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_0))))) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_0) 
                                                    * 
                                                    (0xffffffU 
                                                     & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_0))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_0) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_0) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x2000ULL == (0x3000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000ULL == (0xc000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000ULL == (0x30000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000ULL == (0x300000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000ULL == (0xc00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000ULL == (0x3000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000ULL == (0x30000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000000ULL == (0xc00000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000ULL == (0xc0000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000000ULL == (0x300000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                          >> 0xdU)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000ULL == (0xa000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000ULL == (0x28000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000ULL == (0xa0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000ULL == (0x280000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000ULL == (0xa00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000ULL == (0x2800000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000ULL == (0xa000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000ULL == (0x28000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000000ULL == (0xa00000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000ULL == (0xa0000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000000ULL == (0x280000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider__0\n"); );
    // Body
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                << 0xcU) : ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
        = (QData)((IData)(((0x7fffffcU & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000ULL 
                                                         == 
                                                         (0x6000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000ULL 
                                                           == 
                                                           (0x6000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000ULL 
                                                               == 
                                                               (0xe000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0xdU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U))) 
                                          << 2U)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2 
        = (QData)((IData)(((0x1ffffff0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10000ULL 
                                                            == 
                                                            (0x18000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x8000ULL 
                                                              == 
                                                              (0x18000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18000ULL 
                                                                == 
                                                                (0x38000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xfU))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 4U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                              << 2U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
        = (QData)((IData)(((0x7fffffc0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40000ULL 
                                                            == 
                                                            (0x60000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x20000ULL 
                                                              == 
                                                              (0x60000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60000ULL 
                                                                == 
                                                                (0xe0000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x11U))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 6U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                              << 4U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000ULL 
                                                         == 
                                                         (0x180000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000ULL 
                                                           == 
                                                           (0x180000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000ULL 
                                                               == 
                                                               (0x380000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x13U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000ULL 
                                                         == 
                                                         (0x600000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000ULL 
                                                           == 
                                                           (0x600000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000ULL 
                                                               == 
                                                               (0xe00000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x15U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x1000000ULL 
                                                         == 
                                                         (0x1800000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x800000ULL 
                                                           == 
                                                           (0x1800000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x1800000ULL 
                                                               == 
                                                               (0x3800000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x17U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000000ULL 
                                                         == 
                                                         (0x6000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000000ULL 
                                                           == 
                                                           (0x6000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000000ULL 
                                                               == 
                                                               (0xe000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x19U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xeU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                        << 0xcU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x10000000ULL 
                                                         == 
                                                         (0x18000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x8000000ULL 
                                                           == 
                                                           (0x18000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x18000000ULL 
                                                               == 
                                                               (0x38000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1bU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12 
        = (((QData)((IData)(((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                            >> 0x23U)))
                              ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                 << 0xcU) : 0U))) << 0x18U) 
           | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                              << 0x16U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x40000000ULL 
                                                         == 
                                                         (0x60000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x20000000ULL 
                                                           == 
                                                           (0x60000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x60000000ULL 
                                                               == 
                                                               (0xe0000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1dU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000000ULL 
                                                         == 
                                                         (0x180000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000000ULL 
                                                           == 
                                                           (0x180000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000000ULL 
                                                               == 
                                                               (0x380000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1fU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000000ULL 
                                                         == 
                                                         (0x600000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000000ULL 
                                                           == 
                                                           (0x600000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000000ULL 
                                                               == 
                                                               (0xe00000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x21U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_0) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x16U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                         << 0x14U))));
    vlSelf->__VdfgTmp_h037a5002__0 = ((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h32ec1818__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                          | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h5febfed3__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_he8298333__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_h160609f1__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h9e4e06c7__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h041e3646__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                         ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                            ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)));
    vlSelf->__VdfgTmp_h47de5b44__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                          & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                         | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                             & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12) 
                                            | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                               | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                   | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                                  & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h037a5002__0 ^ (vlSelf->__VdfgTmp_h32ec1818__0 
                                             ^ (vlSelf->__VdfgTmp_h5febfed3__0 
                                                ^ vlSelf->__VdfgTmp_he8298333__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h037a5002__0 & vlSelf->__VdfgTmp_h32ec1818__0) 
           | ((vlSelf->__VdfgTmp_h32ec1818__0 & vlSelf->__VdfgTmp_h5febfed3__0) 
              | ((vlSelf->__VdfgTmp_h5febfed3__0 & vlSelf->__VdfgTmp_he8298333__0) 
                 | ((vlSelf->__VdfgTmp_h037a5002__0 
                     & vlSelf->__VdfgTmp_h5febfed3__0) 
                    | ((vlSelf->__VdfgTmp_h037a5002__0 
                        | vlSelf->__VdfgTmp_h32ec1818__0) 
                       & vlSelf->__VdfgTmp_he8298333__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h160609f1__0 ^ (vlSelf->__VdfgTmp_h9e4e06c7__0 
                                             ^ (vlSelf->__VdfgTmp_h041e3646__0 
                                                ^ vlSelf->__VdfgTmp_h47de5b44__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h160609f1__0 & vlSelf->__VdfgTmp_h9e4e06c7__0) 
           | ((vlSelf->__VdfgTmp_h9e4e06c7__0 & vlSelf->__VdfgTmp_h041e3646__0) 
              | ((vlSelf->__VdfgTmp_h041e3646__0 & vlSelf->__VdfgTmp_h47de5b44__0) 
                 | ((vlSelf->__VdfgTmp_h160609f1__0 
                     & vlSelf->__VdfgTmp_h041e3646__0) 
                    | ((vlSelf->__VdfgTmp_h160609f1__0 
                        | vlSelf->__VdfgTmp_h9e4e06c7__0) 
                       & vlSelf->__VdfgTmp_h47de5b44__0)))));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_1__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_1__0\n"); );
    // Body
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
        = (0xfffffffffULL & ((QData)((IData)((0xffffffU 
                                              & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_1))))) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_1) 
                                                    * 
                                                    (0xffffffU 
                                                     & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_1))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_1) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_1) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x2000ULL == (0x3000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000ULL == (0xc000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000ULL == (0x30000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000ULL == (0x300000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000ULL == (0xc00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000ULL == (0x3000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000ULL == (0x30000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000000ULL == (0xc00000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000ULL == (0xc0000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000000ULL == (0x300000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                          >> 0xdU)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000ULL == (0xa000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000ULL == (0x28000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000ULL == (0xa0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000ULL == (0x280000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000ULL == (0xa00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000ULL == (0x2800000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000ULL == (0xa000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000ULL == (0x28000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000000ULL == (0xa00000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000ULL == (0xa0000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000000ULL == (0x280000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                << 0xcU) : ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
        = (QData)((IData)(((0x7fffffcU & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000ULL 
                                                         == 
                                                         (0x6000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000ULL 
                                                           == 
                                                           (0x6000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000ULL 
                                                               == 
                                                               (0xe000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0xdU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U))) 
                                          << 2U)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2 
        = (QData)((IData)(((0x1ffffff0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10000ULL 
                                                            == 
                                                            (0x18000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x8000ULL 
                                                              == 
                                                              (0x18000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18000ULL 
                                                                == 
                                                                (0x38000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xfU))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 4U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                              << 2U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
        = (QData)((IData)(((0x7fffffc0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40000ULL 
                                                            == 
                                                            (0x60000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x20000ULL 
                                                              == 
                                                              (0x60000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60000ULL 
                                                                == 
                                                                (0xe0000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x11U))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 6U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                              << 4U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000ULL 
                                                         == 
                                                         (0x180000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000ULL 
                                                           == 
                                                           (0x180000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000ULL 
                                                               == 
                                                               (0x380000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x13U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000ULL 
                                                         == 
                                                         (0x600000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000ULL 
                                                           == 
                                                           (0x600000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000ULL 
                                                               == 
                                                               (0xe00000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x15U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x1000000ULL 
                                                         == 
                                                         (0x1800000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x800000ULL 
                                                           == 
                                                           (0x1800000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x1800000ULL 
                                                               == 
                                                               (0x3800000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x17U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000000ULL 
                                                         == 
                                                         (0x6000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000000ULL 
                                                           == 
                                                           (0x6000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000000ULL 
                                                               == 
                                                               (0xe000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x19U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xeU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                        << 0xcU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x10000000ULL 
                                                         == 
                                                         (0x18000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x8000000ULL 
                                                           == 
                                                           (0x18000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x18000000ULL 
                                                               == 
                                                               (0x38000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1bU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12 
        = (((QData)((IData)(((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                            >> 0x23U)))
                              ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                 << 0xcU) : 0U))) << 0x18U) 
           | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                              << 0x16U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x40000000ULL 
                                                         == 
                                                         (0x60000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x20000000ULL 
                                                           == 
                                                           (0x60000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x60000000ULL 
                                                               == 
                                                               (0xe0000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1dU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000000ULL 
                                                         == 
                                                         (0x180000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000000ULL 
                                                           == 
                                                           (0x180000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000000ULL 
                                                               == 
                                                               (0x380000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1fU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000000ULL 
                                                         == 
                                                         (0x600000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000000ULL 
                                                           == 
                                                           (0x600000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000000ULL 
                                                               == 
                                                               (0xe00000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x21U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x16U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                         << 0x14U))));
    vlSelf->__VdfgTmp_h037a5002__0 = ((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h32ec1818__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                          | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h5febfed3__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_he8298333__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_h160609f1__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h9e4e06c7__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h041e3646__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                         ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                            ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)));
    vlSelf->__VdfgTmp_h47de5b44__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                          & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                         | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                             & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12) 
                                            | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                               | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                   | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                                  & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h037a5002__0 ^ (vlSelf->__VdfgTmp_h32ec1818__0 
                                             ^ (vlSelf->__VdfgTmp_h5febfed3__0 
                                                ^ vlSelf->__VdfgTmp_he8298333__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h037a5002__0 & vlSelf->__VdfgTmp_h32ec1818__0) 
           | ((vlSelf->__VdfgTmp_h32ec1818__0 & vlSelf->__VdfgTmp_h5febfed3__0) 
              | ((vlSelf->__VdfgTmp_h5febfed3__0 & vlSelf->__VdfgTmp_he8298333__0) 
                 | ((vlSelf->__VdfgTmp_h037a5002__0 
                     & vlSelf->__VdfgTmp_h5febfed3__0) 
                    | ((vlSelf->__VdfgTmp_h037a5002__0 
                        | vlSelf->__VdfgTmp_h32ec1818__0) 
                       & vlSelf->__VdfgTmp_he8298333__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h160609f1__0 ^ (vlSelf->__VdfgTmp_h9e4e06c7__0 
                                             ^ (vlSelf->__VdfgTmp_h041e3646__0 
                                                ^ vlSelf->__VdfgTmp_h47de5b44__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h160609f1__0 & vlSelf->__VdfgTmp_h9e4e06c7__0) 
           | ((vlSelf->__VdfgTmp_h9e4e06c7__0 & vlSelf->__VdfgTmp_h041e3646__0) 
              | ((vlSelf->__VdfgTmp_h041e3646__0 & vlSelf->__VdfgTmp_h47de5b44__0) 
                 | ((vlSelf->__VdfgTmp_h160609f1__0 
                     & vlSelf->__VdfgTmp_h041e3646__0) 
                    | ((vlSelf->__VdfgTmp_h160609f1__0 
                        | vlSelf->__VdfgTmp_h9e4e06c7__0) 
                       & vlSelf->__VdfgTmp_h47de5b44__0)))));
}

VL_INLINE_OPT void VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_1__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_1__0\n"); );
    // Body
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
        = (0xfffffffffULL & ((QData)((IData)((0xffffffU 
                                              & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_1))))) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_1) 
                                                    * 
                                                    (0xffffffU 
                                                     & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_1))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_1) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_1) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x2000ULL == (0x3000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000ULL == (0xc000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000ULL == (0x30000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000ULL == (0x300000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000ULL == (0xc00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000ULL == (0x3000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000ULL == (0x30000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000000ULL == (0xc00000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000ULL == (0xc0000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000000ULL == (0x300000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                          >> 0xdU)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000ULL == (0xa000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000ULL == (0x28000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000ULL == (0xa0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000ULL == (0x280000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000ULL == (0xa00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000ULL == (0x2800000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000ULL == (0xa000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000ULL == (0x28000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000000ULL == (0xa00000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000ULL == (0xa0000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000000ULL == (0x280000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__0\n"); );
    // Body
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                << 0xcU) : ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
        = (QData)((IData)(((0x7fffffcU & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000ULL 
                                                         == 
                                                         (0x6000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000ULL 
                                                           == 
                                                           (0x6000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000ULL 
                                                               == 
                                                               (0xe000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0xdU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U))) 
                                          << 2U)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2 
        = (QData)((IData)(((0x1ffffff0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10000ULL 
                                                            == 
                                                            (0x18000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x8000ULL 
                                                              == 
                                                              (0x18000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18000ULL 
                                                                == 
                                                                (0x38000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xfU))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 4U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                              << 2U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
        = (QData)((IData)(((0x7fffffc0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40000ULL 
                                                            == 
                                                            (0x60000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x20000ULL 
                                                              == 
                                                              (0x60000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60000ULL 
                                                                == 
                                                                (0xe0000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x11U))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 6U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                              << 4U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000ULL 
                                                         == 
                                                         (0x180000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000ULL 
                                                           == 
                                                           (0x180000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000ULL 
                                                               == 
                                                               (0x380000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x13U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000ULL 
                                                         == 
                                                         (0x600000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000ULL 
                                                           == 
                                                           (0x600000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000ULL 
                                                               == 
                                                               (0xe00000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x15U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x1000000ULL 
                                                         == 
                                                         (0x1800000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x800000ULL 
                                                           == 
                                                           (0x1800000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x1800000ULL 
                                                               == 
                                                               (0x3800000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x17U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000000ULL 
                                                         == 
                                                         (0x6000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000000ULL 
                                                           == 
                                                           (0x6000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000000ULL 
                                                               == 
                                                               (0xe000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x19U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xeU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                        << 0xcU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x10000000ULL 
                                                         == 
                                                         (0x18000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x8000000ULL 
                                                           == 
                                                           (0x18000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x18000000ULL 
                                                               == 
                                                               (0x38000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1bU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12 
        = (((QData)((IData)(((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                            >> 0x23U)))
                              ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                 << 0xcU) : 0U))) << 0x18U) 
           | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                              << 0x16U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x40000000ULL 
                                                         == 
                                                         (0x60000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x20000000ULL 
                                                           == 
                                                           (0x60000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x60000000ULL 
                                                               == 
                                                               (0xe0000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1dU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000000ULL 
                                                         == 
                                                         (0x180000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000000ULL 
                                                           == 
                                                           (0x180000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000000ULL 
                                                               == 
                                                               (0x380000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1fU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000000ULL 
                                                         == 
                                                         (0x600000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000000ULL 
                                                           == 
                                                           (0x600000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000000ULL 
                                                               == 
                                                               (0xe00000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x21U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_1) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x16U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                         << 0x14U))));
    vlSelf->__VdfgTmp_h037a5002__0 = ((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h32ec1818__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                          | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h5febfed3__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_he8298333__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_h160609f1__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h9e4e06c7__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h041e3646__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                         ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                            ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)));
    vlSelf->__VdfgTmp_h47de5b44__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                          & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                         | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                             & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12) 
                                            | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                               | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                   | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                                  & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h037a5002__0 ^ (vlSelf->__VdfgTmp_h32ec1818__0 
                                             ^ (vlSelf->__VdfgTmp_h5febfed3__0 
                                                ^ vlSelf->__VdfgTmp_he8298333__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h037a5002__0 & vlSelf->__VdfgTmp_h32ec1818__0) 
           | ((vlSelf->__VdfgTmp_h32ec1818__0 & vlSelf->__VdfgTmp_h5febfed3__0) 
              | ((vlSelf->__VdfgTmp_h5febfed3__0 & vlSelf->__VdfgTmp_he8298333__0) 
                 | ((vlSelf->__VdfgTmp_h037a5002__0 
                     & vlSelf->__VdfgTmp_h5febfed3__0) 
                    | ((vlSelf->__VdfgTmp_h037a5002__0 
                        | vlSelf->__VdfgTmp_h32ec1818__0) 
                       & vlSelf->__VdfgTmp_he8298333__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h160609f1__0 ^ (vlSelf->__VdfgTmp_h9e4e06c7__0 
                                             ^ (vlSelf->__VdfgTmp_h041e3646__0 
                                                ^ vlSelf->__VdfgTmp_h47de5b44__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h160609f1__0 & vlSelf->__VdfgTmp_h9e4e06c7__0) 
           | ((vlSelf->__VdfgTmp_h9e4e06c7__0 & vlSelf->__VdfgTmp_h041e3646__0) 
              | ((vlSelf->__VdfgTmp_h041e3646__0 & vlSelf->__VdfgTmp_h47de5b44__0) 
                 | ((vlSelf->__VdfgTmp_h160609f1__0 
                     & vlSelf->__VdfgTmp_h041e3646__0) 
                    | ((vlSelf->__VdfgTmp_h160609f1__0 
                        | vlSelf->__VdfgTmp_h9e4e06c7__0) 
                       & vlSelf->__VdfgTmp_h47de5b44__0)))));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_2__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_2__0\n"); );
    // Body
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
        = (0xfffffffffULL & ((QData)((IData)((0xffffffU 
                                              & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_2))))) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_2) 
                                                    * 
                                                    (0xffffffU 
                                                     & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_2))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_2) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_2) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x2000ULL == (0x3000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000ULL == (0xc000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000ULL == (0x30000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000ULL == (0x300000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000ULL == (0xc00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000ULL == (0x3000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000ULL == (0x30000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000000ULL == (0xc00000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000ULL == (0xc0000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000000ULL == (0x300000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                          >> 0xdU)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000ULL == (0xa000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000ULL == (0x28000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000ULL == (0xa0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000ULL == (0x280000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000ULL == (0xa00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000ULL == (0x2800000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000ULL == (0xa000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000ULL == (0x28000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000000ULL == (0xa00000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000ULL == (0xa0000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000000ULL == (0x280000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                << 0xcU) : ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
        = (QData)((IData)(((0x7fffffcU & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000ULL 
                                                         == 
                                                         (0x6000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000ULL 
                                                           == 
                                                           (0x6000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000ULL 
                                                               == 
                                                               (0xe000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0xdU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U))) 
                                          << 2U)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2 
        = (QData)((IData)(((0x1ffffff0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10000ULL 
                                                            == 
                                                            (0x18000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x8000ULL 
                                                              == 
                                                              (0x18000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18000ULL 
                                                                == 
                                                                (0x38000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xfU))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 4U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                              << 2U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
        = (QData)((IData)(((0x7fffffc0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40000ULL 
                                                            == 
                                                            (0x60000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x20000ULL 
                                                              == 
                                                              (0x60000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60000ULL 
                                                                == 
                                                                (0xe0000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x11U))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 6U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                              << 4U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000ULL 
                                                         == 
                                                         (0x180000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000ULL 
                                                           == 
                                                           (0x180000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000ULL 
                                                               == 
                                                               (0x380000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x13U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000ULL 
                                                         == 
                                                         (0x600000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000ULL 
                                                           == 
                                                           (0x600000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000ULL 
                                                               == 
                                                               (0xe00000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x15U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x1000000ULL 
                                                         == 
                                                         (0x1800000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x800000ULL 
                                                           == 
                                                           (0x1800000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x1800000ULL 
                                                               == 
                                                               (0x3800000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x17U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000000ULL 
                                                         == 
                                                         (0x6000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000000ULL 
                                                           == 
                                                           (0x6000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000000ULL 
                                                               == 
                                                               (0xe000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x19U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xeU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                        << 0xcU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x10000000ULL 
                                                         == 
                                                         (0x18000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x8000000ULL 
                                                           == 
                                                           (0x18000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x18000000ULL 
                                                               == 
                                                               (0x38000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1bU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12 
        = (((QData)((IData)(((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                            >> 0x23U)))
                              ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                 << 0xcU) : 0U))) << 0x18U) 
           | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                              << 0x16U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x40000000ULL 
                                                         == 
                                                         (0x60000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x20000000ULL 
                                                           == 
                                                           (0x60000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x60000000ULL 
                                                               == 
                                                               (0xe0000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1dU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000000ULL 
                                                         == 
                                                         (0x180000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000000ULL 
                                                           == 
                                                           (0x180000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000000ULL 
                                                               == 
                                                               (0x380000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1fU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000000ULL 
                                                         == 
                                                         (0x600000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000000ULL 
                                                           == 
                                                           (0x600000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000000ULL 
                                                               == 
                                                               (0xe00000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x21U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x16U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                         << 0x14U))));
    vlSelf->__VdfgTmp_h037a5002__0 = ((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h32ec1818__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                          | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h5febfed3__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_he8298333__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_h160609f1__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h9e4e06c7__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h041e3646__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                         ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                            ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)));
    vlSelf->__VdfgTmp_h47de5b44__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                          & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                         | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                             & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12) 
                                            | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                               | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                   | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                                  & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h037a5002__0 ^ (vlSelf->__VdfgTmp_h32ec1818__0 
                                             ^ (vlSelf->__VdfgTmp_h5febfed3__0 
                                                ^ vlSelf->__VdfgTmp_he8298333__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h037a5002__0 & vlSelf->__VdfgTmp_h32ec1818__0) 
           | ((vlSelf->__VdfgTmp_h32ec1818__0 & vlSelf->__VdfgTmp_h5febfed3__0) 
              | ((vlSelf->__VdfgTmp_h5febfed3__0 & vlSelf->__VdfgTmp_he8298333__0) 
                 | ((vlSelf->__VdfgTmp_h037a5002__0 
                     & vlSelf->__VdfgTmp_h5febfed3__0) 
                    | ((vlSelf->__VdfgTmp_h037a5002__0 
                        | vlSelf->__VdfgTmp_h32ec1818__0) 
                       & vlSelf->__VdfgTmp_he8298333__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h160609f1__0 ^ (vlSelf->__VdfgTmp_h9e4e06c7__0 
                                             ^ (vlSelf->__VdfgTmp_h041e3646__0 
                                                ^ vlSelf->__VdfgTmp_h47de5b44__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h160609f1__0 & vlSelf->__VdfgTmp_h9e4e06c7__0) 
           | ((vlSelf->__VdfgTmp_h9e4e06c7__0 & vlSelf->__VdfgTmp_h041e3646__0) 
              | ((vlSelf->__VdfgTmp_h041e3646__0 & vlSelf->__VdfgTmp_h47de5b44__0) 
                 | ((vlSelf->__VdfgTmp_h160609f1__0 
                     & vlSelf->__VdfgTmp_h041e3646__0) 
                    | ((vlSelf->__VdfgTmp_h160609f1__0 
                        | vlSelf->__VdfgTmp_h9e4e06c7__0) 
                       & vlSelf->__VdfgTmp_h47de5b44__0)))));
}

VL_INLINE_OPT void VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_2__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_2__0\n"); );
    // Body
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
        = (0xfffffffffULL & ((QData)((IData)((0xffffffU 
                                              & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_2))))) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_2) 
                                                    * 
                                                    (0xffffffU 
                                                     & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_2))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_2) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_2) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x2000ULL == (0x3000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000ULL == (0xc000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000ULL == (0x30000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000ULL == (0x300000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000ULL == (0xc00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000ULL == (0x3000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000ULL == (0x30000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000000ULL == (0xc00000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000ULL == (0xc0000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000000ULL == (0x300000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                          >> 0xdU)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000ULL == (0xa000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000ULL == (0x28000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000ULL == (0xa0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000ULL == (0x280000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000ULL == (0xa00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000ULL == (0x2800000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000ULL == (0xa000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000ULL == (0x28000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000000ULL == (0xa00000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000ULL == (0xa0000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000000ULL == (0x280000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_2__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_2__0\n"); );
    // Body
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                << 0xcU) : ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
        = (QData)((IData)(((0x7fffffcU & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000ULL 
                                                         == 
                                                         (0x6000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000ULL 
                                                           == 
                                                           (0x6000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000ULL 
                                                               == 
                                                               (0xe000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0xdU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U))) 
                                          << 2U)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2 
        = (QData)((IData)(((0x1ffffff0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10000ULL 
                                                            == 
                                                            (0x18000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x8000ULL 
                                                              == 
                                                              (0x18000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18000ULL 
                                                                == 
                                                                (0x38000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xfU))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 4U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                              << 2U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
        = (QData)((IData)(((0x7fffffc0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40000ULL 
                                                            == 
                                                            (0x60000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x20000ULL 
                                                              == 
                                                              (0x60000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60000ULL 
                                                                == 
                                                                (0xe0000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x11U))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 6U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                              << 4U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000ULL 
                                                         == 
                                                         (0x180000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000ULL 
                                                           == 
                                                           (0x180000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000ULL 
                                                               == 
                                                               (0x380000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x13U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000ULL 
                                                         == 
                                                         (0x600000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000ULL 
                                                           == 
                                                           (0x600000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000ULL 
                                                               == 
                                                               (0xe00000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x15U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x1000000ULL 
                                                         == 
                                                         (0x1800000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x800000ULL 
                                                           == 
                                                           (0x1800000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x1800000ULL 
                                                               == 
                                                               (0x3800000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x17U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000000ULL 
                                                         == 
                                                         (0x6000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000000ULL 
                                                           == 
                                                           (0x6000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000000ULL 
                                                               == 
                                                               (0xe000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x19U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xeU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                        << 0xcU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x10000000ULL 
                                                         == 
                                                         (0x18000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x8000000ULL 
                                                           == 
                                                           (0x18000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x18000000ULL 
                                                               == 
                                                               (0x38000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1bU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12 
        = (((QData)((IData)(((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                            >> 0x23U)))
                              ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                 << 0xcU) : 0U))) << 0x18U) 
           | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                              << 0x16U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x40000000ULL 
                                                         == 
                                                         (0x60000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x20000000ULL 
                                                           == 
                                                           (0x60000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x60000000ULL 
                                                               == 
                                                               (0xe0000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1dU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000000ULL 
                                                         == 
                                                         (0x180000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000000ULL 
                                                           == 
                                                           (0x180000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000000ULL 
                                                               == 
                                                               (0x380000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1fU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000000ULL 
                                                         == 
                                                         (0x600000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000000ULL 
                                                           == 
                                                           (0x600000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000000ULL 
                                                               == 
                                                               (0xe00000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x21U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_2) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x16U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                         << 0x14U))));
    vlSelf->__VdfgTmp_h037a5002__0 = ((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h32ec1818__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                          | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h5febfed3__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_he8298333__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_h160609f1__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h9e4e06c7__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h041e3646__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                         ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                            ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)));
    vlSelf->__VdfgTmp_h47de5b44__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                          & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                         | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                             & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12) 
                                            | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                               | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                   | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                                  & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h037a5002__0 ^ (vlSelf->__VdfgTmp_h32ec1818__0 
                                             ^ (vlSelf->__VdfgTmp_h5febfed3__0 
                                                ^ vlSelf->__VdfgTmp_he8298333__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h037a5002__0 & vlSelf->__VdfgTmp_h32ec1818__0) 
           | ((vlSelf->__VdfgTmp_h32ec1818__0 & vlSelf->__VdfgTmp_h5febfed3__0) 
              | ((vlSelf->__VdfgTmp_h5febfed3__0 & vlSelf->__VdfgTmp_he8298333__0) 
                 | ((vlSelf->__VdfgTmp_h037a5002__0 
                     & vlSelf->__VdfgTmp_h5febfed3__0) 
                    | ((vlSelf->__VdfgTmp_h037a5002__0 
                        | vlSelf->__VdfgTmp_h32ec1818__0) 
                       & vlSelf->__VdfgTmp_he8298333__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h160609f1__0 ^ (vlSelf->__VdfgTmp_h9e4e06c7__0 
                                             ^ (vlSelf->__VdfgTmp_h041e3646__0 
                                                ^ vlSelf->__VdfgTmp_h47de5b44__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h160609f1__0 & vlSelf->__VdfgTmp_h9e4e06c7__0) 
           | ((vlSelf->__VdfgTmp_h9e4e06c7__0 & vlSelf->__VdfgTmp_h041e3646__0) 
              | ((vlSelf->__VdfgTmp_h041e3646__0 & vlSelf->__VdfgTmp_h47de5b44__0) 
                 | ((vlSelf->__VdfgTmp_h160609f1__0 
                     & vlSelf->__VdfgTmp_h041e3646__0) 
                    | ((vlSelf->__VdfgTmp_h160609f1__0 
                        | vlSelf->__VdfgTmp_h9e4e06c7__0) 
                       & vlSelf->__VdfgTmp_h47de5b44__0)))));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_3__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_3__0\n"); );
    // Body
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
        = (0xfffffffffULL & ((QData)((IData)((0xffffffU 
                                              & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_3))))) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_3) 
                                                    * 
                                                    (0xffffffU 
                                                     & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_3))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_3) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_3) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x2000ULL == (0x3000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000ULL == (0xc000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000ULL == (0x30000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000ULL == (0x300000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000ULL == (0xc00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000ULL == (0x3000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000ULL == (0x30000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000000ULL == (0xc00000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000ULL == (0xc0000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000000ULL == (0x300000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                          >> 0xdU)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000ULL == (0xa000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000ULL == (0x28000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000ULL == (0xa0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000ULL == (0x280000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000ULL == (0xa00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000ULL == (0x2800000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000ULL == (0xa000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000ULL == (0x28000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000000ULL == (0xa00000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000ULL == (0xa0000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000000ULL == (0x280000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                << 0xcU) : ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
        = (QData)((IData)(((0x7fffffcU & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000ULL 
                                                         == 
                                                         (0x6000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000ULL 
                                                           == 
                                                           (0x6000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000ULL 
                                                               == 
                                                               (0xe000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0xdU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U))) 
                                          << 2U)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2 
        = (QData)((IData)(((0x1ffffff0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10000ULL 
                                                            == 
                                                            (0x18000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x8000ULL 
                                                              == 
                                                              (0x18000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18000ULL 
                                                                == 
                                                                (0x38000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xfU))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 4U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                              << 2U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
        = (QData)((IData)(((0x7fffffc0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40000ULL 
                                                            == 
                                                            (0x60000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x20000ULL 
                                                              == 
                                                              (0x60000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60000ULL 
                                                                == 
                                                                (0xe0000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x11U))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 6U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                              << 4U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000ULL 
                                                         == 
                                                         (0x180000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000ULL 
                                                           == 
                                                           (0x180000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000ULL 
                                                               == 
                                                               (0x380000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x13U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000ULL 
                                                         == 
                                                         (0x600000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000ULL 
                                                           == 
                                                           (0x600000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000ULL 
                                                               == 
                                                               (0xe00000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x15U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x1000000ULL 
                                                         == 
                                                         (0x1800000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x800000ULL 
                                                           == 
                                                           (0x1800000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x1800000ULL 
                                                               == 
                                                               (0x3800000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x17U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000000ULL 
                                                         == 
                                                         (0x6000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000000ULL 
                                                           == 
                                                           (0x6000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000000ULL 
                                                               == 
                                                               (0xe000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x19U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xeU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                        << 0xcU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x10000000ULL 
                                                         == 
                                                         (0x18000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x8000000ULL 
                                                           == 
                                                           (0x18000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x18000000ULL 
                                                               == 
                                                               (0x38000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1bU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12 
        = (((QData)((IData)(((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                            >> 0x23U)))
                              ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                 << 0xcU) : 0U))) << 0x18U) 
           | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                              << 0x16U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x40000000ULL 
                                                         == 
                                                         (0x60000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x20000000ULL 
                                                           == 
                                                           (0x60000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x60000000ULL 
                                                               == 
                                                               (0xe0000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1dU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000000ULL 
                                                         == 
                                                         (0x180000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000000ULL 
                                                           == 
                                                           (0x180000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000000ULL 
                                                               == 
                                                               (0x380000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1fU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000000ULL 
                                                         == 
                                                         (0x600000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000000ULL 
                                                           == 
                                                           (0x600000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000000ULL 
                                                               == 
                                                               (0xe00000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x21U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x16U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                         << 0x14U))));
    vlSelf->__VdfgTmp_h037a5002__0 = ((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h32ec1818__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                          | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h5febfed3__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_he8298333__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_h160609f1__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h9e4e06c7__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h041e3646__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                         ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                            ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)));
    vlSelf->__VdfgTmp_h47de5b44__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                          & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                         | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                             & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12) 
                                            | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                               | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                   | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                                  & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h037a5002__0 ^ (vlSelf->__VdfgTmp_h32ec1818__0 
                                             ^ (vlSelf->__VdfgTmp_h5febfed3__0 
                                                ^ vlSelf->__VdfgTmp_he8298333__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h037a5002__0 & vlSelf->__VdfgTmp_h32ec1818__0) 
           | ((vlSelf->__VdfgTmp_h32ec1818__0 & vlSelf->__VdfgTmp_h5febfed3__0) 
              | ((vlSelf->__VdfgTmp_h5febfed3__0 & vlSelf->__VdfgTmp_he8298333__0) 
                 | ((vlSelf->__VdfgTmp_h037a5002__0 
                     & vlSelf->__VdfgTmp_h5febfed3__0) 
                    | ((vlSelf->__VdfgTmp_h037a5002__0 
                        | vlSelf->__VdfgTmp_h32ec1818__0) 
                       & vlSelf->__VdfgTmp_he8298333__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h160609f1__0 ^ (vlSelf->__VdfgTmp_h9e4e06c7__0 
                                             ^ (vlSelf->__VdfgTmp_h041e3646__0 
                                                ^ vlSelf->__VdfgTmp_h47de5b44__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h160609f1__0 & vlSelf->__VdfgTmp_h9e4e06c7__0) 
           | ((vlSelf->__VdfgTmp_h9e4e06c7__0 & vlSelf->__VdfgTmp_h041e3646__0) 
              | ((vlSelf->__VdfgTmp_h041e3646__0 & vlSelf->__VdfgTmp_h47de5b44__0) 
                 | ((vlSelf->__VdfgTmp_h160609f1__0 
                     & vlSelf->__VdfgTmp_h041e3646__0) 
                    | ((vlSelf->__VdfgTmp_h160609f1__0 
                        | vlSelf->__VdfgTmp_h9e4e06c7__0) 
                       & vlSelf->__VdfgTmp_h47de5b44__0)))));
}

VL_INLINE_OPT void VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_3__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_3__0\n"); );
    // Body
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
        = (0xfffffffffULL & ((QData)((IData)((0xffffffU 
                                              & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_3))))) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_3) 
                                                    * 
                                                    (0xffffffU 
                                                     & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_3))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_3) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode2_io_Frac_3) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x2000ULL == (0x3000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000ULL == (0xc000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000ULL == (0x30000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000ULL == (0x300000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000ULL == (0xc00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000ULL == (0x3000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000ULL == (0x30000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000000ULL == (0xc00000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000ULL == (0xc0000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000000ULL == (0x300000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                          >> 0xdU)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000ULL == (0xa000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000ULL == (0x28000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000ULL == (0xa0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000ULL == (0x280000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000ULL == (0xa00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000ULL == (0x2800000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000ULL == (0xa000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000ULL == (0x28000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000000ULL == (0xa00000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000ULL == (0xa0000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000000ULL == (0x280000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_3__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_3__0\n"); );
    // Body
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                << 0xcU) : ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
        = (QData)((IData)(((0x7fffffcU & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000ULL 
                                                         == 
                                                         (0x6000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000ULL 
                                                           == 
                                                           (0x6000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000ULL 
                                                               == 
                                                               (0xe000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0xdU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U))) 
                                          << 2U)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2 
        = (QData)((IData)(((0x1ffffff0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x10000ULL 
                                                            == 
                                                            (0x18000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x8000ULL 
                                                              == 
                                                              (0x18000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x18000ULL 
                                                                == 
                                                                (0x38000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0xfU))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 4U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                              << 2U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
        = (QData)((IData)(((0x7fffffc0U & (((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                            ^ ((1U 
                                                & ((IData)(
                                                           (0x40000ULL 
                                                            == 
                                                            (0x60000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | (IData)(
                                                             (0x20000ULL 
                                                              == 
                                                              (0x60000ULL 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xcU)
                                                : (
                                                   (1U 
                                                    & ((IData)(
                                                               (0x60000ULL 
                                                                == 
                                                                (0xe0000ULL 
                                                                 & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                       | ((~ (IData)(
                                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                      >> 0x11U))) 
                                                          & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                    << 0xdU)
                                                    : 0U))) 
                                           << 6U)) 
                           | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                              << 4U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000ULL 
                                                         == 
                                                         (0x180000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000ULL 
                                                           == 
                                                           (0x180000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000ULL 
                                                               == 
                                                               (0x380000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x13U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000ULL 
                                                         == 
                                                         (0x600000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000ULL 
                                                           == 
                                                           (0x600000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000ULL 
                                                               == 
                                                               (0xe00000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x15U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x1000000ULL 
                                                         == 
                                                         (0x1800000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x800000ULL 
                                                           == 
                                                           (0x1800000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x1800000ULL 
                                                               == 
                                                               (0x3800000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x17U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x4000000ULL 
                                                         == 
                                                         (0x6000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x2000000ULL 
                                                           == 
                                                           (0x6000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x6000000ULL 
                                                               == 
                                                               (0xe000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x19U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0xeU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                        << 0xcU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x10000000ULL 
                                                         == 
                                                         (0x18000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x8000000ULL 
                                                           == 
                                                           (0x18000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x18000000ULL 
                                                               == 
                                                               (0x38000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1bU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12 
        = (((QData)((IData)(((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                            >> 0x23U)))
                              ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                 << 0xcU) : 0U))) << 0x18U) 
           | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                              << 0x16U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x40000000ULL 
                                                         == 
                                                         (0x60000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x20000000ULL 
                                                           == 
                                                           (0x60000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x60000000ULL 
                                                               == 
                                                               (0xe0000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1dU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x100000000ULL 
                                                         == 
                                                         (0x180000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x80000000ULL 
                                                           == 
                                                           (0x180000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x180000000ULL 
                                                               == 
                                                               (0x380000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x1fU))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
        = (((QData)((IData)((0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                           ^ ((1U & 
                                               ((IData)(
                                                        (0x400000000ULL 
                                                         == 
                                                         (0x600000000ULL 
                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                | (IData)(
                                                          (0x200000000ULL 
                                                           == 
                                                           (0x600000000ULL 
                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                               ? ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                  << 0xcU)
                                               : ((1U 
                                                   & ((IData)(
                                                              (0x600000000ULL 
                                                               == 
                                                               (0xe00000000ULL 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                      | ((~ (IData)(
                                                                    (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                     >> 0x21U))) 
                                                         & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.PvuTop__DOT___decode1_io_Frac_3) 
                                                   << 0xdU)
                                                   : 0U)))))) 
            << 0x16U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                         << 0x14U))));
    vlSelf->__VdfgTmp_h037a5002__0 = ((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h32ec1818__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_1 
                                          | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_2));
    vlSelf->__VdfgTmp_h5febfed3__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_he8298333__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_4 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_3) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_5));
    vlSelf->__VdfgTmp_h160609f1__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                         ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h9e4e06c7__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_7 
                                          | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_6) 
                                         & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_8));
    vlSelf->__VdfgTmp_h041e3646__0 = (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                      ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                         ^ (vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                            ^ vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)));
    vlSelf->__VdfgTmp_h47de5b44__0 = ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                       & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                      | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10 
                                          & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                         | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11 
                                             & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12) 
                                            | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_11) 
                                               | ((vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_9 
                                                   | vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_10) 
                                                  & vlSelf->__PVT__boothMult__DOT___genProds_io_partial_prods_12)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h037a5002__0 ^ (vlSelf->__VdfgTmp_h32ec1818__0 
                                             ^ (vlSelf->__VdfgTmp_h5febfed3__0 
                                                ^ vlSelf->__VdfgTmp_he8298333__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h037a5002__0 & vlSelf->__VdfgTmp_h32ec1818__0) 
           | ((vlSelf->__VdfgTmp_h32ec1818__0 & vlSelf->__VdfgTmp_h5febfed3__0) 
              | ((vlSelf->__VdfgTmp_h5febfed3__0 & vlSelf->__VdfgTmp_he8298333__0) 
                 | ((vlSelf->__VdfgTmp_h037a5002__0 
                     & vlSelf->__VdfgTmp_h5febfed3__0) 
                    | ((vlSelf->__VdfgTmp_h037a5002__0 
                        | vlSelf->__VdfgTmp_h32ec1818__0) 
                       & vlSelf->__VdfgTmp_he8298333__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h160609f1__0 ^ (vlSelf->__VdfgTmp_h9e4e06c7__0 
                                             ^ (vlSelf->__VdfgTmp_h041e3646__0 
                                                ^ vlSelf->__VdfgTmp_h47de5b44__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h160609f1__0 & vlSelf->__VdfgTmp_h9e4e06c7__0) 
           | ((vlSelf->__VdfgTmp_h9e4e06c7__0 & vlSelf->__VdfgTmp_h041e3646__0) 
              | ((vlSelf->__VdfgTmp_h041e3646__0 & vlSelf->__VdfgTmp_h47de5b44__0) 
                 | ((vlSelf->__VdfgTmp_h160609f1__0 
                     & vlSelf->__VdfgTmp_h041e3646__0) 
                    | ((vlSelf->__VdfgTmp_h160609f1__0 
                        | vlSelf->__VdfgTmp_h9e4e06c7__0) 
                       & vlSelf->__VdfgTmp_h47de5b44__0)))));
}
