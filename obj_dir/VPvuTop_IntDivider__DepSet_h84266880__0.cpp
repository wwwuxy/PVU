// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_IntDivider.h"
#include "VPvuTop__Syms.h"

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__0\n"); );
    // Body
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
        = (0xfffffffffULL & ((QData)((IData)((0xffffffU 
                                              & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT__decode2__DOT___io_Frac_0_T_1))))) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT__decode2__DOT___io_Frac_0_T_1) 
                                                    * 
                                                    (0xffffffU 
                                                     & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT__decode2__DOT___io_Frac_0_T_1))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT__decode2__DOT___io_Frac_0_T_1) 
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
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT__decode2__DOT___io_Frac_0_T_1) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x2000ULL == (0x3000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000ULL == (0x3000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000ULL == (0xc000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000ULL == (0x30000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000ULL == (0x300000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000ULL == (0x30000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000ULL == (0xc00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000ULL == (0xc0000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000000ULL == (0x300000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000000ULL == (0xc00000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                          >> 0xdU)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000ULL == (0x2800000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
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
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000ULL == (0xa000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000ULL == (0x28000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000ULL == (0xa00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000ULL == (0xa0000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000000ULL == (0x280000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000000ULL == (0xa00000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__1(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__1\n"); );
    // Init
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0 = 0;
    // Body
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                << 0xcU) : ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x4000ULL 
                                            == (0x6000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000ULL 
                                              == (0x6000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x6000ULL 
                                                            == 
                                                            (0xe000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0xdU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x10000ULL 
                                            == (0x18000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000ULL 
                                              == (0x18000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x18000ULL 
                                                            == 
                                                            (0x38000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0xfU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x40000ULL 
                                            == (0x60000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000ULL 
                                              == (0x60000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x60000ULL 
                                                            == 
                                                            (0xe0000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x11U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x100000ULL 
                                            == (0x180000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000ULL 
                                              == (0x180000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x180000ULL 
                                                            == 
                                                            (0x380000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x13U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x4000000ULL 
                                            == (0x6000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000000ULL 
                                              == (0x6000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x6000000ULL 
                                                            == 
                                                            (0xe000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x19U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x10000000ULL 
                                            == (0x18000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000000ULL 
                                              == (0x18000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x18000000ULL 
                                                            == 
                                                            (0x38000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x1bU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__VdfgTmp_h18d87cd9__0 = (((QData)((IData)(
                                                       (0x1ffffffU 
                                                        & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           ((1U 
                                                             & ((IData)(
                                                                        (0x1000000ULL 
                                                                         == 
                                                                         (0x1800000ULL 
                                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                                | (IData)(
                                                                          (0x800000ULL 
                                                                           == 
                                                                           (0x1800000ULL 
                                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                             ? 
                                                            ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                                             << 0xcU)
                                                             : 
                                                            ((1U 
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
                                                             ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                                              << 0xdU)
                                                              : 0U)))))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                                   << 0xaU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x400000ULL 
                                            == (0x600000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000ULL 
                                              == (0x600000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x600000ULL 
                                                            == 
                                                            (0xe00000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x15U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x40000000ULL 
                                            == (0x60000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000000ULL 
                                              == (0x60000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x60000000ULL 
                                                            == 
                                                            (0xe0000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x1dU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x100000000ULL 
                                            == (0x180000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000000ULL 
                                              == (0x180000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x180000000ULL 
                                                            == 
                                                            (0x380000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x1fU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                                << 0xdU)
                                             : 0U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0 
        = (((QData)((IData)(((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                            >> 0x23U)))
                              ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                 << 0xcU) : 0U))) << 0x18U) 
           | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                              << 0x16U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x400000000ULL 
                                            == (0x600000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000000ULL 
                                              == (0x600000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x600000000ULL 
                                                            == 
                                                            (0xe00000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x21U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__decode1__DOT___io_Frac_0_T_1) 
                                                << 0xdU)
                                             : 0U))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (QData)((IData)(((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                            << 2U) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (QData)((IData)(((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                            << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                      << 2U))));
    vlSelf->__VdfgTmp_hf986c990__0 = ((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                       << 6U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                 << 4U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod)) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod)) 
            << 0xeU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                        << 0xcU))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod)) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod)) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    vlSelf->__VdfgTmp_hafe47ac3__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod)) 
                                       << 0x12U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                                    << 0x10U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod)) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod)) 
            << 0x16U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                         << 0x14U))));
    vlSelf->__VdfgTmp_h037a5002__0 = ((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h32ec1818__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h160609f1__0 = (vlSelf->__VdfgTmp_h18d87cd9__0 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h9e4e06c7__0 = ((vlSelf->__VdfgTmp_h18d87cd9__0 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          | vlSelf->__VdfgTmp_h18d87cd9__0) 
                                         & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h5febfed3__0 = ((QData)((IData)(vlSelf->__VdfgTmp_hf986c990__0)) 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_he8298333__0 = (((QData)((IData)(vlSelf->__VdfgTmp_hf986c990__0)) 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          | (QData)((IData)(vlSelf->__VdfgTmp_hf986c990__0))) 
                                         & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h041e3646__0 = (vlSelf->__VdfgTmp_hafe47ac3__0 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
                                            ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0)));
    vlSelf->__VdfgTmp_h47de5b44__0 = ((vlSelf->__VdfgTmp_hafe47ac3__0 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0) 
                                         | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0) 
                                            | ((vlSelf->__VdfgTmp_hafe47ac3__0 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0) 
                                               | ((vlSelf->__VdfgTmp_hafe47ac3__0 
                                                   | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                                  & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h037a5002__0 & vlSelf->__VdfgTmp_h32ec1818__0) 
           | ((vlSelf->__VdfgTmp_h32ec1818__0 & vlSelf->__VdfgTmp_h5febfed3__0) 
              | ((vlSelf->__VdfgTmp_h5febfed3__0 & vlSelf->__VdfgTmp_he8298333__0) 
                 | ((vlSelf->__VdfgTmp_h037a5002__0 
                     & vlSelf->__VdfgTmp_h5febfed3__0) 
                    | ((vlSelf->__VdfgTmp_h037a5002__0 
                        | vlSelf->__VdfgTmp_h32ec1818__0) 
                       & vlSelf->__VdfgTmp_he8298333__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h037a5002__0 ^ (vlSelf->__VdfgTmp_h32ec1818__0 
                                             ^ (vlSelf->__VdfgTmp_h5febfed3__0 
                                                ^ vlSelf->__VdfgTmp_he8298333__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h160609f1__0 & vlSelf->__VdfgTmp_h9e4e06c7__0) 
           | ((vlSelf->__VdfgTmp_h9e4e06c7__0 & vlSelf->__VdfgTmp_h041e3646__0) 
              | ((vlSelf->__VdfgTmp_h041e3646__0 & vlSelf->__VdfgTmp_h47de5b44__0) 
                 | ((vlSelf->__VdfgTmp_h160609f1__0 
                     & vlSelf->__VdfgTmp_h041e3646__0) 
                    | ((vlSelf->__VdfgTmp_h160609f1__0 
                        | vlSelf->__VdfgTmp_h9e4e06c7__0) 
                       & vlSelf->__VdfgTmp_h47de5b44__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h160609f1__0 ^ (vlSelf->__VdfgTmp_h9e4e06c7__0 
                                             ^ (vlSelf->__VdfgTmp_h041e3646__0 
                                                ^ vlSelf->__VdfgTmp_h47de5b44__0)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__0\n"); );
    // Body
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
        = (0xfffffffffULL & ((QData)((IData)((0xffffffU 
                                              & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_divisor))))) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_divisor) 
                                                    * 
                                                    (0xffffffU 
                                                     & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_divisor))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_divisor) 
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
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_divisor) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x2000ULL == (0x3000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000ULL == (0x3000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000ULL == (0xc000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000ULL == (0x30000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000ULL == (0x300000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000ULL == (0x30000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000ULL == (0xc00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000ULL == (0xc0000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000000ULL == (0x300000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000000ULL == (0xc00000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                          >> 0xdU)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000ULL == (0x2800000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
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
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000ULL == (0xa000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000ULL == (0x28000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000ULL == (0xa00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000ULL == (0xa0000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000000ULL == (0x280000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000000ULL == (0xa00000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__1(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__1\n"); );
    // Init
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0 = 0;
    // Body
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                << 0xcU) : ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x4000ULL 
                                            == (0x6000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000ULL 
                                              == (0x6000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x6000ULL 
                                                            == 
                                                            (0xe000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0xdU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x10000ULL 
                                            == (0x18000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000ULL 
                                              == (0x18000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x18000ULL 
                                                            == 
                                                            (0x38000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0xfU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x40000ULL 
                                            == (0x60000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000ULL 
                                              == (0x60000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x60000ULL 
                                                            == 
                                                            (0xe0000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x11U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x100000ULL 
                                            == (0x180000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000ULL 
                                              == (0x180000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x180000ULL 
                                                            == 
                                                            (0x380000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x13U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x4000000ULL 
                                            == (0x6000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000000ULL 
                                              == (0x6000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x6000000ULL 
                                                            == 
                                                            (0xe000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x19U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x10000000ULL 
                                            == (0x18000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000000ULL 
                                              == (0x18000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x18000000ULL 
                                                            == 
                                                            (0x38000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x1bU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__VdfgTmp_h18d87cd9__0 = (((QData)((IData)(
                                                       (0x1ffffffU 
                                                        & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           ((1U 
                                                             & ((IData)(
                                                                        (0x1000000ULL 
                                                                         == 
                                                                         (0x1800000ULL 
                                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                                | (IData)(
                                                                          (0x800000ULL 
                                                                           == 
                                                                           (0x1800000ULL 
                                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                             ? 
                                                            ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                                             << 0xcU)
                                                             : 
                                                            ((1U 
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
                                                             ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                                              << 0xdU)
                                                              : 0U)))))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                                   << 0xaU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x400000ULL 
                                            == (0x600000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000ULL 
                                              == (0x600000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x600000ULL 
                                                            == 
                                                            (0xe00000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x15U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x40000000ULL 
                                            == (0x60000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000000ULL 
                                              == (0x60000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x60000000ULL 
                                                            == 
                                                            (0xe0000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x1dU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x100000000ULL 
                                            == (0x180000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000000ULL 
                                              == (0x180000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x180000000ULL 
                                                            == 
                                                            (0x380000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x1fU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0 
        = (((QData)((IData)(((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                            >> 0x23U)))
                              ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                 << 0xcU) : 0U))) << 0x18U) 
           | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                              << 0x16U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x400000000ULL 
                                            == (0x600000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000000ULL 
                                              == (0x600000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x600000000ULL 
                                                            == 
                                                            (0xe00000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x21U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_1__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (QData)((IData)(((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                            << 2U) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (QData)((IData)(((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                            << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                      << 2U))));
    vlSelf->__VdfgTmp_hf986c990__0 = ((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                       << 6U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                 << 4U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod)) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod)) 
            << 0xeU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                        << 0xcU))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod)) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod)) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    vlSelf->__VdfgTmp_hafe47ac3__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod)) 
                                       << 0x12U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                                    << 0x10U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod)) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod)) 
            << 0x16U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                         << 0x14U))));
    vlSelf->__VdfgTmp_h037a5002__0 = ((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h32ec1818__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h160609f1__0 = (vlSelf->__VdfgTmp_h18d87cd9__0 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h9e4e06c7__0 = ((vlSelf->__VdfgTmp_h18d87cd9__0 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          | vlSelf->__VdfgTmp_h18d87cd9__0) 
                                         & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h5febfed3__0 = ((QData)((IData)(vlSelf->__VdfgTmp_hf986c990__0)) 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_he8298333__0 = (((QData)((IData)(vlSelf->__VdfgTmp_hf986c990__0)) 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          | (QData)((IData)(vlSelf->__VdfgTmp_hf986c990__0))) 
                                         & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h041e3646__0 = (vlSelf->__VdfgTmp_hafe47ac3__0 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
                                            ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0)));
    vlSelf->__VdfgTmp_h47de5b44__0 = ((vlSelf->__VdfgTmp_hafe47ac3__0 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0) 
                                         | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0) 
                                            | ((vlSelf->__VdfgTmp_hafe47ac3__0 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0) 
                                               | ((vlSelf->__VdfgTmp_hafe47ac3__0 
                                                   | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                                  & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h037a5002__0 & vlSelf->__VdfgTmp_h32ec1818__0) 
           | ((vlSelf->__VdfgTmp_h32ec1818__0 & vlSelf->__VdfgTmp_h5febfed3__0) 
              | ((vlSelf->__VdfgTmp_h5febfed3__0 & vlSelf->__VdfgTmp_he8298333__0) 
                 | ((vlSelf->__VdfgTmp_h037a5002__0 
                     & vlSelf->__VdfgTmp_h5febfed3__0) 
                    | ((vlSelf->__VdfgTmp_h037a5002__0 
                        | vlSelf->__VdfgTmp_h32ec1818__0) 
                       & vlSelf->__VdfgTmp_he8298333__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h037a5002__0 ^ (vlSelf->__VdfgTmp_h32ec1818__0 
                                             ^ (vlSelf->__VdfgTmp_h5febfed3__0 
                                                ^ vlSelf->__VdfgTmp_he8298333__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h160609f1__0 & vlSelf->__VdfgTmp_h9e4e06c7__0) 
           | ((vlSelf->__VdfgTmp_h9e4e06c7__0 & vlSelf->__VdfgTmp_h041e3646__0) 
              | ((vlSelf->__VdfgTmp_h041e3646__0 & vlSelf->__VdfgTmp_h47de5b44__0) 
                 | ((vlSelf->__VdfgTmp_h160609f1__0 
                     & vlSelf->__VdfgTmp_h041e3646__0) 
                    | ((vlSelf->__VdfgTmp_h160609f1__0 
                        | vlSelf->__VdfgTmp_h9e4e06c7__0) 
                       & vlSelf->__VdfgTmp_h47de5b44__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h160609f1__0 ^ (vlSelf->__VdfgTmp_h9e4e06c7__0 
                                             ^ (vlSelf->__VdfgTmp_h041e3646__0 
                                                ^ vlSelf->__VdfgTmp_h47de5b44__0)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_2__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_2__0\n"); );
    // Body
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
        = (0xfffffffffULL & ((QData)((IData)((0xffffffU 
                                              & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_divisor))))) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_divisor) 
                                                    * 
                                                    (0xffffffU 
                                                     & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_divisor))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_divisor) 
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
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_divisor) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x2000ULL == (0x3000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000ULL == (0x3000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000ULL == (0xc000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000ULL == (0x30000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000ULL == (0x300000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000ULL == (0x30000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000ULL == (0xc00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000ULL == (0xc0000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000000ULL == (0x300000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000000ULL == (0xc00000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                          >> 0xdU)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000ULL == (0x2800000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
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
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000ULL == (0xa000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000ULL == (0x28000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000ULL == (0xa00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000ULL == (0xa0000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000000ULL == (0x280000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000000ULL == (0xa00000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_2__1(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_2__1\n"); );
    // Init
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0 = 0;
    // Body
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                << 0xcU) : ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x4000ULL 
                                            == (0x6000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000ULL 
                                              == (0x6000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x6000ULL 
                                                            == 
                                                            (0xe000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0xdU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x10000ULL 
                                            == (0x18000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000ULL 
                                              == (0x18000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x18000ULL 
                                                            == 
                                                            (0x38000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0xfU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x40000ULL 
                                            == (0x60000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000ULL 
                                              == (0x60000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x60000ULL 
                                                            == 
                                                            (0xe0000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x11U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x100000ULL 
                                            == (0x180000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000ULL 
                                              == (0x180000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x180000ULL 
                                                            == 
                                                            (0x380000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x13U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x4000000ULL 
                                            == (0x6000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000000ULL 
                                              == (0x6000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x6000000ULL 
                                                            == 
                                                            (0xe000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x19U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x10000000ULL 
                                            == (0x18000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000000ULL 
                                              == (0x18000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x18000000ULL 
                                                            == 
                                                            (0x38000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x1bU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__VdfgTmp_h18d87cd9__0 = (((QData)((IData)(
                                                       (0x1ffffffU 
                                                        & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           ((1U 
                                                             & ((IData)(
                                                                        (0x1000000ULL 
                                                                         == 
                                                                         (0x1800000ULL 
                                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                                | (IData)(
                                                                          (0x800000ULL 
                                                                           == 
                                                                           (0x1800000ULL 
                                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                             ? 
                                                            ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                                             << 0xcU)
                                                             : 
                                                            ((1U 
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
                                                             ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                                              << 0xdU)
                                                              : 0U)))))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                                   << 0xaU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x400000ULL 
                                            == (0x600000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000ULL 
                                              == (0x600000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x600000ULL 
                                                            == 
                                                            (0xe00000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x15U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x40000000ULL 
                                            == (0x60000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000000ULL 
                                              == (0x60000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x60000000ULL 
                                                            == 
                                                            (0xe0000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x1dU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x100000000ULL 
                                            == (0x180000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000000ULL 
                                              == (0x180000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x180000000ULL 
                                                            == 
                                                            (0x380000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x1fU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0 
        = (((QData)((IData)(((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                            >> 0x23U)))
                              ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                 << 0xcU) : 0U))) << 0x18U) 
           | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                              << 0x16U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x400000000ULL 
                                            == (0x600000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000000ULL 
                                              == (0x600000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x600000000ULL 
                                                            == 
                                                            (0xe00000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x21U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_2__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (QData)((IData)(((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                            << 2U) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (QData)((IData)(((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                            << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                      << 2U))));
    vlSelf->__VdfgTmp_hf986c990__0 = ((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                       << 6U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                 << 4U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod)) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod)) 
            << 0xeU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                        << 0xcU))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod)) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod)) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    vlSelf->__VdfgTmp_hafe47ac3__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod)) 
                                       << 0x12U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                                    << 0x10U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod)) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod)) 
            << 0x16U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                         << 0x14U))));
    vlSelf->__VdfgTmp_h037a5002__0 = ((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h32ec1818__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h160609f1__0 = (vlSelf->__VdfgTmp_h18d87cd9__0 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h9e4e06c7__0 = ((vlSelf->__VdfgTmp_h18d87cd9__0 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          | vlSelf->__VdfgTmp_h18d87cd9__0) 
                                         & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h5febfed3__0 = ((QData)((IData)(vlSelf->__VdfgTmp_hf986c990__0)) 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_he8298333__0 = (((QData)((IData)(vlSelf->__VdfgTmp_hf986c990__0)) 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          | (QData)((IData)(vlSelf->__VdfgTmp_hf986c990__0))) 
                                         & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h041e3646__0 = (vlSelf->__VdfgTmp_hafe47ac3__0 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
                                            ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0)));
    vlSelf->__VdfgTmp_h47de5b44__0 = ((vlSelf->__VdfgTmp_hafe47ac3__0 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0) 
                                         | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0) 
                                            | ((vlSelf->__VdfgTmp_hafe47ac3__0 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0) 
                                               | ((vlSelf->__VdfgTmp_hafe47ac3__0 
                                                   | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                                  & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h037a5002__0 & vlSelf->__VdfgTmp_h32ec1818__0) 
           | ((vlSelf->__VdfgTmp_h32ec1818__0 & vlSelf->__VdfgTmp_h5febfed3__0) 
              | ((vlSelf->__VdfgTmp_h5febfed3__0 & vlSelf->__VdfgTmp_he8298333__0) 
                 | ((vlSelf->__VdfgTmp_h037a5002__0 
                     & vlSelf->__VdfgTmp_h5febfed3__0) 
                    | ((vlSelf->__VdfgTmp_h037a5002__0 
                        | vlSelf->__VdfgTmp_h32ec1818__0) 
                       & vlSelf->__VdfgTmp_he8298333__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h037a5002__0 ^ (vlSelf->__VdfgTmp_h32ec1818__0 
                                             ^ (vlSelf->__VdfgTmp_h5febfed3__0 
                                                ^ vlSelf->__VdfgTmp_he8298333__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h160609f1__0 & vlSelf->__VdfgTmp_h9e4e06c7__0) 
           | ((vlSelf->__VdfgTmp_h9e4e06c7__0 & vlSelf->__VdfgTmp_h041e3646__0) 
              | ((vlSelf->__VdfgTmp_h041e3646__0 & vlSelf->__VdfgTmp_h47de5b44__0) 
                 | ((vlSelf->__VdfgTmp_h160609f1__0 
                     & vlSelf->__VdfgTmp_h041e3646__0) 
                    | ((vlSelf->__VdfgTmp_h160609f1__0 
                        | vlSelf->__VdfgTmp_h9e4e06c7__0) 
                       & vlSelf->__VdfgTmp_h47de5b44__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h160609f1__0 ^ (vlSelf->__VdfgTmp_h9e4e06c7__0 
                                             ^ (vlSelf->__VdfgTmp_h041e3646__0 
                                                ^ vlSelf->__VdfgTmp_h47de5b44__0)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_3__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_3__0\n"); );
    // Body
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
        = (0xfffffffffULL & ((QData)((IData)((0xffffffU 
                                              & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_divisor))))) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_divisor) 
                                                    * 
                                                    (0xffffffU 
                                                     & VL_DIV_III(24, (IData)(0x1000U), (IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_divisor))))))))));
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
        = (0xfffffffffULL & ((0xfffffffffULL & (vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full 
                                                >> 0xcU)) 
                             * (QData)((IData)((0xffffffU 
                                                & ((IData)(0x2000U) 
                                                   - 
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_divisor) 
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
                                                   ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_divisor) 
                                                    * 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full 
                                                                >> 0xcU))))))))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x2000ULL == (0x3000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000ULL == (0x3000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000ULL == (0xc000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000ULL == (0x30000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000ULL == (0x300000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000ULL == (0x30000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000ULL == (0xc00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000ULL == (0xc0000000ULL 
                                     & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000000ULL == (0x300000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000000ULL == (0xc00000000ULL 
                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                          >> 0xdU)) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000ULL == (0x2800000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
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
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000ULL == (0xa000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000ULL == (0x28000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000ULL == (0xa00000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000ULL == (0xa0000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000000ULL == (0x280000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000000ULL == (0xa00000000ULL & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_3__1(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_3__1\n"); );
    // Init
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 = 0;
    QData/*47:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0 = 0;
    // Body
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                           >> 0xcU)))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                << 0xcU) : ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x4000ULL 
                                            == (0x6000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000ULL 
                                              == (0x6000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x6000ULL 
                                                            == 
                                                            (0xe000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0xdU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x10000ULL 
                                            == (0x18000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000ULL 
                                              == (0x18000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x18000ULL 
                                                            == 
                                                            (0x38000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0xfU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x40000ULL 
                                            == (0x60000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000ULL 
                                              == (0x60000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x60000ULL 
                                                            == 
                                                            (0xe0000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x11U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x100000ULL 
                                            == (0x180000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000ULL 
                                              == (0x180000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x180000ULL 
                                                            == 
                                                            (0x380000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x13U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x4000000ULL 
                                            == (0x6000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x2000000ULL 
                                              == (0x6000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x6000000ULL 
                                                            == 
                                                            (0xe000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x19U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x10000000ULL 
                                            == (0x18000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x8000000ULL 
                                              == (0x18000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x18000000ULL 
                                                            == 
                                                            (0x38000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x1bU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__VdfgTmp_h18d87cd9__0 = (((QData)((IData)(
                                                       (0x1ffffffU 
                                                        & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           ((1U 
                                                             & ((IData)(
                                                                        (0x1000000ULL 
                                                                         == 
                                                                         (0x1800000ULL 
                                                                          & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                                | (IData)(
                                                                          (0x800000ULL 
                                                                           == 
                                                                           (0x1800000ULL 
                                                                            & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                                                             ? 
                                                            ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                                             << 0xcU)
                                                             : 
                                                            ((1U 
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
                                                             ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                                              << 0xdU)
                                                              : 0U)))))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                                                   << 0xaU))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x400000ULL 
                                            == (0x600000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000ULL 
                                              == (0x600000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x600000ULL 
                                                            == 
                                                            (0xe00000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x15U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x40000000ULL 
                                            == (0x60000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x20000000ULL 
                                              == (0x60000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x60000000ULL 
                                                            == 
                                                            (0xe0000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x1dU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x100000000ULL 
                                            == (0x180000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x80000000ULL 
                                              == (0x180000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x180000000ULL 
                                                            == 
                                                            (0x380000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x1fU))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0 
        = (((QData)((IData)(((1U & (IData)((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                            >> 0x23U)))
                              ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                 << 0xcU) : 0U))) << 0x18U) 
           | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                              << 0x16U))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1ffffffU & ((- (IData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                         ^ ((1U & ((IData)((0x400000000ULL 
                                            == (0x600000000ULL 
                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                   | (IData)((0x200000000ULL 
                                              == (0x600000000ULL 
                                                  & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full)))))
                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                << 0xcU) : ((1U & ((IData)(
                                                           (0x600000000ULL 
                                                            == 
                                                            (0xe00000000ULL 
                                                             & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full 
                                                                  >> 0x21U))) 
                                                      & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                             ? ((IData)(vlSymsp->TOP.PvuTop__DOT__div__DOT____Vcellinp__intdivider_3__io_dividend) 
                                                << 0xdU)
                                             : 0U))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (QData)((IData)(((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                            << 2U) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (QData)((IData)(((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                            << 4U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                      << 2U))));
    vlSelf->__VdfgTmp_hf986c990__0 = ((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                       << 6U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                 << 4U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod)) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod)) 
            << 0xeU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                        << 0xcU))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod)) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod)) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    vlSelf->__VdfgTmp_hafe47ac3__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod)) 
                                       << 0x12U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                                                    << 0x10U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod)) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
        = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod)) 
            << 0x16U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                         << 0x14U))));
    vlSelf->__VdfgTmp_h037a5002__0 = ((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h32ec1818__0 = (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h160609f1__0 = (vlSelf->__VdfgTmp_h18d87cd9__0 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h9e4e06c7__0 = ((vlSelf->__VdfgTmp_h18d87cd9__0 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          | vlSelf->__VdfgTmp_h18d87cd9__0) 
                                         & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h5febfed3__0 = ((QData)((IData)(vlSelf->__VdfgTmp_hf986c990__0)) 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_he8298333__0 = (((QData)((IData)(vlSelf->__VdfgTmp_hf986c990__0)) 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          | (QData)((IData)(vlSelf->__VdfgTmp_hf986c990__0))) 
                                         & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0));
    vlSelf->__VdfgTmp_h041e3646__0 = (vlSelf->__VdfgTmp_hafe47ac3__0 
                                      ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                         ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
                                            ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0)));
    vlSelf->__VdfgTmp_h47de5b44__0 = ((vlSelf->__VdfgTmp_hafe47ac3__0 
                                       & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                      | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0) 
                                         | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0) 
                                            | ((vlSelf->__VdfgTmp_hafe47ac3__0 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h11a624c7__0) 
                                               | ((vlSelf->__VdfgTmp_hafe47ac3__0 
                                                   | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1565be82__0) 
                                                  & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h16a29a5b__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h037a5002__0 & vlSelf->__VdfgTmp_h32ec1818__0) 
           | ((vlSelf->__VdfgTmp_h32ec1818__0 & vlSelf->__VdfgTmp_h5febfed3__0) 
              | ((vlSelf->__VdfgTmp_h5febfed3__0 & vlSelf->__VdfgTmp_he8298333__0) 
                 | ((vlSelf->__VdfgTmp_h037a5002__0 
                     & vlSelf->__VdfgTmp_h5febfed3__0) 
                    | ((vlSelf->__VdfgTmp_h037a5002__0 
                        | vlSelf->__VdfgTmp_h32ec1818__0) 
                       & vlSelf->__VdfgTmp_he8298333__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h037a5002__0 ^ (vlSelf->__VdfgTmp_h32ec1818__0 
                                             ^ (vlSelf->__VdfgTmp_h5febfed3__0 
                                                ^ vlSelf->__VdfgTmp_he8298333__0)));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h160609f1__0 & vlSelf->__VdfgTmp_h9e4e06c7__0) 
           | ((vlSelf->__VdfgTmp_h9e4e06c7__0 & vlSelf->__VdfgTmp_h041e3646__0) 
              | ((vlSelf->__VdfgTmp_h041e3646__0 & vlSelf->__VdfgTmp_h47de5b44__0) 
                 | ((vlSelf->__VdfgTmp_h160609f1__0 
                     & vlSelf->__VdfgTmp_h041e3646__0) 
                    | ((vlSelf->__VdfgTmp_h160609f1__0 
                        | vlSelf->__VdfgTmp_h9e4e06c7__0) 
                       & vlSelf->__VdfgTmp_h47de5b44__0)))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h160609f1__0 ^ (vlSelf->__VdfgTmp_h9e4e06c7__0 
                                             ^ (vlSelf->__VdfgTmp_h041e3646__0 
                                                ^ vlSelf->__VdfgTmp_h47de5b44__0)));
}
