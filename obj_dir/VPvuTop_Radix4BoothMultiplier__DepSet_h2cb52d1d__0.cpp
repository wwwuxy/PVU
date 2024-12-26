// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Radix4BoothMultiplier.h"
#include "VPvuTop__Syms.h"

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___ico_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___ico_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__0\n"); );
    // Init
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    // Body
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((2U == (3U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((8U == (0xcU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000U == (0xc000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20U == (0x30U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80U == (0xc0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200U == (0x300U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800U == (0xc00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000U == (0x30000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000U == (0xc0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000U == (0x300000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000U == (0xc00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000U == (0x3000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000U == (0xc000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000U == (0x3000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                  >> 1U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (8U == (0xaU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000U == (0xa000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20U == (0x28U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80U == (0xa0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200U == (0x280U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800U == (0xa00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000U == (0x28000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000U == (0xa0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000U == (0x280000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000U == (0xa00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000U == (0x2800000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000U == (0xa000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000U == (0x2800U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((4U == 
                                             (6U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((2U == 
                                               (6U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((6U 
                                                 == 
                                                 (0xeU 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 1U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((8U == 
                                               (0x18U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x18U 
                                                 == 
                                                 (0x38U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 3U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40U 
                                             == (0x60U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x20U 
                                               == (0x60U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x60U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 5U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100U 
                                             == (0x180U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x80U 
                                               == (0x180U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x180U 
                                                 == 
                                                 (0x380U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 7U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x200U 
                                               == (0x600U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x600U 
                                                 == 
                                                 (0xe00U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 9U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10000U 
                                             == (0x18000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x8000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x18000U 
                                                 == 
                                                 (0x38000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 0xfU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40000U 
                                             == (0x60000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x20000U 
                                               == (0x60000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x60000U 
                                                 == 
                                                 (0xe0000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 0x11U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x80000U 
                                               == (0x180000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x180000U 
                                                 == 
                                                 (0x380000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 0x13U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400000U 
                                             == (0x600000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x200000U 
                                               == (0x600000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x600000U 
                                                 == 
                                                 (0xe00000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 0x15U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000000U 
                                             == (0x1800000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x800000U 
                                               == (0x1800000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x1800000U 
                                                 == 
                                                 (0x3800000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 0x17U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(((0x8000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : 0U))) << 0x1cU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                                   << 0x1aU))));
    vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x4000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x2000000U 
                                               == (0x6000000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x6000000U 
                                                 == 
                                                 (0xe000000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 0x19U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__VdfgTmp_h7b320ed4__0 = (((QData)((IData)(
                                                       (0x1fffffffU 
                                                        & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           ((1U 
                                                             & ((IData)(
                                                                        (0x4000U 
                                                                         == 
                                                                         (0x6000U 
                                                                          & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                                                | (IData)(
                                                                          (0x2000U 
                                                                           == 
                                                                           (0x6000U 
                                                                            & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                                                             ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                                                             : 
                                                            ((1U 
                                                              & ((IData)(
                                                                         (0x6000U 
                                                                          == 
                                                                          (0xe000U 
                                                                           & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                                                 | ((~ 
                                                                     (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                                                      >> 0xdU)) 
                                                                    & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                              ? 
                                                             (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                                              << 1U)
                                                              : 0U)))))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU))));
    vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000U 
                                             == (0x1800U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x800U 
                                               == (0x1800U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x1800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 0xbU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (QData)((IData)(((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                            << 2U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod)) 
            << 4U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                      << 2U))));
    vlSelf->__VdfgTmp_hd7a1965f__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod)) 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod)) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod)) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod)) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod)) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod)) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__VdfgTmp_h81291c99__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod)) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod)) 
            << 0x18U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                         << 0x16U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod)) 
            << 0x1aU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                         << 0x18U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod)) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__VdfgTmp_h62cd212c__0 = ((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h69e4af33__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          | (QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h32c20af4__0 = (vlSelf->__VdfgTmp_h7b320ed4__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_he734e97d__0 = ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_h9ceee2f4__0 = (vlSelf->__VdfgTmp_h81291c99__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_h14e57f54__0 = ((vlSelf->__VdfgTmp_h81291c99__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_hed199804__0 = (vlSelf->__VdfgTmp_hd7a1965f__0 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_hc515ff61__0 = ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                   | csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h32c20af4__0 & vlSelf->__VdfgTmp_he734e97d__0) 
           | ((vlSelf->__VdfgTmp_he734e97d__0 & vlSelf->__VdfgTmp_h9ceee2f4__0) 
              | ((vlSelf->__VdfgTmp_h9ceee2f4__0 & vlSelf->__VdfgTmp_h14e57f54__0) 
                 | ((vlSelf->__VdfgTmp_h32c20af4__0 
                     & vlSelf->__VdfgTmp_h9ceee2f4__0) 
                    | ((vlSelf->__VdfgTmp_h32c20af4__0 
                        | vlSelf->__VdfgTmp_he734e97d__0) 
                       & vlSelf->__VdfgTmp_h14e57f54__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h32c20af4__0 ^ (vlSelf->__VdfgTmp_he734e97d__0 
                                             ^ (vlSelf->__VdfgTmp_h9ceee2f4__0 
                                                ^ vlSelf->__VdfgTmp_h14e57f54__0)));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h62cd212c__0 & vlSelf->__VdfgTmp_h69e4af33__0) 
           | ((vlSelf->__VdfgTmp_h69e4af33__0 & vlSelf->__VdfgTmp_hed199804__0) 
              | ((vlSelf->__VdfgTmp_hed199804__0 & vlSelf->__VdfgTmp_hc515ff61__0) 
                 | ((vlSelf->__VdfgTmp_h62cd212c__0 
                     & vlSelf->__VdfgTmp_hed199804__0) 
                    | ((vlSelf->__VdfgTmp_h62cd212c__0 
                        | vlSelf->__VdfgTmp_h69e4af33__0) 
                       & vlSelf->__VdfgTmp_hc515ff61__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h62cd212c__0 ^ (vlSelf->__VdfgTmp_h69e4af33__0 
                                             ^ (vlSelf->__VdfgTmp_hed199804__0 
                                                ^ vlSelf->__VdfgTmp_hc515ff61__0)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___act_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___act_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__0\n"); );
    // Body
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((2U == (3U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((8U == (0xcU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000U == (0xc000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20U == (0x30U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80U == (0xc0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200U == (0x300U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800U == (0xc00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000U == (0x30000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000U == (0xc0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000U == (0x300000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000U == (0xc00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000U == (0x3000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000U == (0xc000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000U == (0x3000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                  >> 1U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (8U == (0xaU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000U == (0xa000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20U == (0x28U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80U == (0xa0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200U == (0x280U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800U == (0xa00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000U == (0x28000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000U == (0xa0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000U == (0x280000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000U == (0xa00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000U == (0x2800000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000U == (0xa000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000U == (0x2800U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___act_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___act_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__0\n"); );
    // Init
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    // Body
    vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((4U == 
                                             (6U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((2U == 
                                               (6U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((6U 
                                                 == 
                                                 (0xeU 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 1U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((8U == 
                                               (0x18U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x18U 
                                                 == 
                                                 (0x38U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 3U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40U 
                                             == (0x60U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x20U 
                                               == (0x60U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x60U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 5U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100U 
                                             == (0x180U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x80U 
                                               == (0x180U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x180U 
                                                 == 
                                                 (0x380U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 7U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x200U 
                                               == (0x600U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x600U 
                                                 == 
                                                 (0xe00U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 9U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10000U 
                                             == (0x18000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x8000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x18000U 
                                                 == 
                                                 (0x38000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 0xfU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40000U 
                                             == (0x60000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x20000U 
                                               == (0x60000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x60000U 
                                                 == 
                                                 (0xe0000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 0x11U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x80000U 
                                               == (0x180000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x180000U 
                                                 == 
                                                 (0x380000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 0x13U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400000U 
                                             == (0x600000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x200000U 
                                               == (0x600000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x600000U 
                                                 == 
                                                 (0xe00000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 0x15U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000000U 
                                             == (0x1800000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x800000U 
                                               == (0x1800000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x1800000U 
                                                 == 
                                                 (0x3800000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 0x17U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(((0x8000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : 0U))) << 0x1cU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                                   << 0x1aU))));
    vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x4000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x2000000U 
                                               == (0x6000000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x6000000U 
                                                 == 
                                                 (0xe000000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 0x19U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__VdfgTmp_h7b320ed4__0 = (((QData)((IData)(
                                                       (0x1fffffffU 
                                                        & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           ((1U 
                                                             & ((IData)(
                                                                        (0x4000U 
                                                                         == 
                                                                         (0x6000U 
                                                                          & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                                                | (IData)(
                                                                          (0x2000U 
                                                                           == 
                                                                           (0x6000U 
                                                                            & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                                                             ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                                                             : 
                                                            ((1U 
                                                              & ((IData)(
                                                                         (0x6000U 
                                                                          == 
                                                                          (0xe000U 
                                                                           & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                                                 | ((~ 
                                                                     (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                                                      >> 0xdU)) 
                                                                    & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                              ? 
                                                             (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                                              << 1U)
                                                              : 0U)))))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU))));
    vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000U 
                                             == (0x1800U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                    | (IData)((0x800U 
                                               == (0x1800U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a
                              : ((1U & ((IData)((0x1800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
                                               >> 0xbU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (QData)((IData)(((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                            << 2U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod)) 
            << 4U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                      << 2U))));
    vlSelf->__VdfgTmp_hd7a1965f__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod)) 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod)) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod)) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod)) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod)) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod)) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__VdfgTmp_h81291c99__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod)) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod)) 
            << 0x18U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                         << 0x16U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod)) 
            << 0x1aU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                         << 0x18U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod)) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__VdfgTmp_h62cd212c__0 = ((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h69e4af33__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          | (QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h32c20af4__0 = (vlSelf->__VdfgTmp_h7b320ed4__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_he734e97d__0 = ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_h9ceee2f4__0 = (vlSelf->__VdfgTmp_h81291c99__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_h14e57f54__0 = ((vlSelf->__VdfgTmp_h81291c99__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_hed199804__0 = (vlSelf->__VdfgTmp_hd7a1965f__0 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_hc515ff61__0 = ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                   | csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h32c20af4__0 & vlSelf->__VdfgTmp_he734e97d__0) 
           | ((vlSelf->__VdfgTmp_he734e97d__0 & vlSelf->__VdfgTmp_h9ceee2f4__0) 
              | ((vlSelf->__VdfgTmp_h9ceee2f4__0 & vlSelf->__VdfgTmp_h14e57f54__0) 
                 | ((vlSelf->__VdfgTmp_h32c20af4__0 
                     & vlSelf->__VdfgTmp_h9ceee2f4__0) 
                    | ((vlSelf->__VdfgTmp_h32c20af4__0 
                        | vlSelf->__VdfgTmp_he734e97d__0) 
                       & vlSelf->__VdfgTmp_h14e57f54__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h32c20af4__0 ^ (vlSelf->__VdfgTmp_he734e97d__0 
                                             ^ (vlSelf->__VdfgTmp_h9ceee2f4__0 
                                                ^ vlSelf->__VdfgTmp_h14e57f54__0)));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h62cd212c__0 & vlSelf->__VdfgTmp_h69e4af33__0) 
           | ((vlSelf->__VdfgTmp_h69e4af33__0 & vlSelf->__VdfgTmp_hed199804__0) 
              | ((vlSelf->__VdfgTmp_hed199804__0 & vlSelf->__VdfgTmp_hc515ff61__0) 
                 | ((vlSelf->__VdfgTmp_h62cd212c__0 
                     & vlSelf->__VdfgTmp_hed199804__0) 
                    | ((vlSelf->__VdfgTmp_h62cd212c__0 
                        | vlSelf->__VdfgTmp_h69e4af33__0) 
                       & vlSelf->__VdfgTmp_hc515ff61__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h62cd212c__0 ^ (vlSelf->__VdfgTmp_h69e4af33__0 
                                             ^ (vlSelf->__VdfgTmp_hed199804__0 
                                                ^ vlSelf->__VdfgTmp_hc515ff61__0)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___ico_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___ico_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__0\n"); );
    // Init
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    // Body
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((2U == (3U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((8U == (0xcU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000U == (0xc000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20U == (0x30U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80U == (0xc0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200U == (0x300U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800U == (0xc00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000U == (0x30000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000U == (0xc0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000U == (0x300000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000U == (0xc00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000U == (0x3000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000U == (0xc000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000U == (0x3000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                  >> 1U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (8U == (0xaU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000U == (0xa000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20U == (0x28U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80U == (0xa0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200U == (0x280U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800U == (0xa00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000U == (0x28000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000U == (0xa0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000U == (0x280000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000U == (0xa00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000U == (0x2800000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000U == (0xa000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000U == (0x2800U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((4U == 
                                             (6U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((2U == 
                                               (6U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((6U 
                                                 == 
                                                 (0xeU 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 1U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((8U == 
                                               (0x18U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x18U 
                                                 == 
                                                 (0x38U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 3U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40U 
                                             == (0x60U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x20U 
                                               == (0x60U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x60U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 5U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100U 
                                             == (0x180U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x80U 
                                               == (0x180U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x180U 
                                                 == 
                                                 (0x380U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 7U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x200U 
                                               == (0x600U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x600U 
                                                 == 
                                                 (0xe00U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 9U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10000U 
                                             == (0x18000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x8000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x18000U 
                                                 == 
                                                 (0x38000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 0xfU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40000U 
                                             == (0x60000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x20000U 
                                               == (0x60000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x60000U 
                                                 == 
                                                 (0xe0000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 0x11U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x80000U 
                                               == (0x180000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x180000U 
                                                 == 
                                                 (0x380000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 0x13U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400000U 
                                             == (0x600000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x200000U 
                                               == (0x600000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x600000U 
                                                 == 
                                                 (0xe00000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 0x15U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000000U 
                                             == (0x1800000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x800000U 
                                               == (0x1800000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x1800000U 
                                                 == 
                                                 (0x3800000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 0x17U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(((0x8000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : 0U))) << 0x1cU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                                   << 0x1aU))));
    vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x4000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x2000000U 
                                               == (0x6000000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x6000000U 
                                                 == 
                                                 (0xe000000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 0x19U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__VdfgTmp_h7b320ed4__0 = (((QData)((IData)(
                                                       (0x1fffffffU 
                                                        & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           ((1U 
                                                             & ((IData)(
                                                                        (0x4000U 
                                                                         == 
                                                                         (0x6000U 
                                                                          & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                                                | (IData)(
                                                                          (0x2000U 
                                                                           == 
                                                                           (0x6000U 
                                                                            & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                                                             ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                                                             : 
                                                            ((1U 
                                                              & ((IData)(
                                                                         (0x6000U 
                                                                          == 
                                                                          (0xe000U 
                                                                           & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                                                 | ((~ 
                                                                     (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                                                      >> 0xdU)) 
                                                                    & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                              ? 
                                                             (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                                              << 1U)
                                                              : 0U)))))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU))));
    vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000U 
                                             == (0x1800U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x800U 
                                               == (0x1800U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x1800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 0xbU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (QData)((IData)(((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                            << 2U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod)) 
            << 4U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                      << 2U))));
    vlSelf->__VdfgTmp_hd7a1965f__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod)) 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod)) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod)) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod)) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod)) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod)) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__VdfgTmp_h81291c99__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod)) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod)) 
            << 0x18U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                         << 0x16U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod)) 
            << 0x1aU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                         << 0x18U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod)) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__VdfgTmp_h62cd212c__0 = ((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h69e4af33__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          | (QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h32c20af4__0 = (vlSelf->__VdfgTmp_h7b320ed4__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_he734e97d__0 = ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_h9ceee2f4__0 = (vlSelf->__VdfgTmp_h81291c99__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_h14e57f54__0 = ((vlSelf->__VdfgTmp_h81291c99__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_hed199804__0 = (vlSelf->__VdfgTmp_hd7a1965f__0 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_hc515ff61__0 = ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                   | csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h32c20af4__0 & vlSelf->__VdfgTmp_he734e97d__0) 
           | ((vlSelf->__VdfgTmp_he734e97d__0 & vlSelf->__VdfgTmp_h9ceee2f4__0) 
              | ((vlSelf->__VdfgTmp_h9ceee2f4__0 & vlSelf->__VdfgTmp_h14e57f54__0) 
                 | ((vlSelf->__VdfgTmp_h32c20af4__0 
                     & vlSelf->__VdfgTmp_h9ceee2f4__0) 
                    | ((vlSelf->__VdfgTmp_h32c20af4__0 
                        | vlSelf->__VdfgTmp_he734e97d__0) 
                       & vlSelf->__VdfgTmp_h14e57f54__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h32c20af4__0 ^ (vlSelf->__VdfgTmp_he734e97d__0 
                                             ^ (vlSelf->__VdfgTmp_h9ceee2f4__0 
                                                ^ vlSelf->__VdfgTmp_h14e57f54__0)));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h62cd212c__0 & vlSelf->__VdfgTmp_h69e4af33__0) 
           | ((vlSelf->__VdfgTmp_h69e4af33__0 & vlSelf->__VdfgTmp_hed199804__0) 
              | ((vlSelf->__VdfgTmp_hed199804__0 & vlSelf->__VdfgTmp_hc515ff61__0) 
                 | ((vlSelf->__VdfgTmp_h62cd212c__0 
                     & vlSelf->__VdfgTmp_hed199804__0) 
                    | ((vlSelf->__VdfgTmp_h62cd212c__0 
                        | vlSelf->__VdfgTmp_h69e4af33__0) 
                       & vlSelf->__VdfgTmp_hc515ff61__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h62cd212c__0 ^ (vlSelf->__VdfgTmp_h69e4af33__0 
                                             ^ (vlSelf->__VdfgTmp_hed199804__0 
                                                ^ vlSelf->__VdfgTmp_hc515ff61__0)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___act_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___act_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__0\n"); );
    // Body
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((2U == (3U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((8U == (0xcU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000U == (0xc000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20U == (0x30U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80U == (0xc0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200U == (0x300U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800U == (0xc00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000U == (0x30000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000U == (0xc0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000U == (0x300000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000U == (0xc00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000U == (0x3000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000U == (0xc000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000U == (0x3000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                  >> 1U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (8U == (0xaU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000U == (0xa000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20U == (0x28U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80U == (0xa0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200U == (0x280U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800U == (0xa00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000U == (0x28000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000U == (0xa0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000U == (0x280000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000U == (0xa00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000U == (0x2800000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000U == (0xa000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000U == (0x2800U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___act_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___act_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__0\n"); );
    // Init
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    // Body
    vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((4U == 
                                             (6U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((2U == 
                                               (6U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((6U 
                                                 == 
                                                 (0xeU 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 1U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((8U == 
                                               (0x18U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x18U 
                                                 == 
                                                 (0x38U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 3U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40U 
                                             == (0x60U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x20U 
                                               == (0x60U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x60U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 5U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100U 
                                             == (0x180U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x80U 
                                               == (0x180U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x180U 
                                                 == 
                                                 (0x380U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 7U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x200U 
                                               == (0x600U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x600U 
                                                 == 
                                                 (0xe00U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 9U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10000U 
                                             == (0x18000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x8000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x18000U 
                                                 == 
                                                 (0x38000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 0xfU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40000U 
                                             == (0x60000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x20000U 
                                               == (0x60000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x60000U 
                                                 == 
                                                 (0xe0000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 0x11U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x80000U 
                                               == (0x180000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x180000U 
                                                 == 
                                                 (0x380000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 0x13U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400000U 
                                             == (0x600000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x200000U 
                                               == (0x600000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x600000U 
                                                 == 
                                                 (0xe00000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 0x15U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000000U 
                                             == (0x1800000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x800000U 
                                               == (0x1800000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x1800000U 
                                                 == 
                                                 (0x3800000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 0x17U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(((0x8000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : 0U))) << 0x1cU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                                   << 0x1aU))));
    vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x4000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x2000000U 
                                               == (0x6000000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x6000000U 
                                                 == 
                                                 (0xe000000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 0x19U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__VdfgTmp_h7b320ed4__0 = (((QData)((IData)(
                                                       (0x1fffffffU 
                                                        & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           ((1U 
                                                             & ((IData)(
                                                                        (0x4000U 
                                                                         == 
                                                                         (0x6000U 
                                                                          & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                                                | (IData)(
                                                                          (0x2000U 
                                                                           == 
                                                                           (0x6000U 
                                                                            & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                                                             ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                                                             : 
                                                            ((1U 
                                                              & ((IData)(
                                                                         (0x6000U 
                                                                          == 
                                                                          (0xe000U 
                                                                           & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                                                 | ((~ 
                                                                     (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                                                      >> 0xdU)) 
                                                                    & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                              ? 
                                                             (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                                              << 1U)
                                                              : 0U)))))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU))));
    vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000U 
                                             == (0x1800U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                    | (IData)((0x800U 
                                               == (0x1800U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a
                              : ((1U & ((IData)((0x1800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
                                               >> 0xbU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (QData)((IData)(((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                            << 2U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod)) 
            << 4U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                      << 2U))));
    vlSelf->__VdfgTmp_hd7a1965f__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod)) 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod)) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod)) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod)) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod)) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod)) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__VdfgTmp_h81291c99__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod)) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod)) 
            << 0x18U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                         << 0x16U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod)) 
            << 0x1aU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                         << 0x18U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod)) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__VdfgTmp_h62cd212c__0 = ((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h69e4af33__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          | (QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h32c20af4__0 = (vlSelf->__VdfgTmp_h7b320ed4__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_he734e97d__0 = ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_h9ceee2f4__0 = (vlSelf->__VdfgTmp_h81291c99__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_h14e57f54__0 = ((vlSelf->__VdfgTmp_h81291c99__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_hed199804__0 = (vlSelf->__VdfgTmp_hd7a1965f__0 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_hc515ff61__0 = ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                   | csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h32c20af4__0 & vlSelf->__VdfgTmp_he734e97d__0) 
           | ((vlSelf->__VdfgTmp_he734e97d__0 & vlSelf->__VdfgTmp_h9ceee2f4__0) 
              | ((vlSelf->__VdfgTmp_h9ceee2f4__0 & vlSelf->__VdfgTmp_h14e57f54__0) 
                 | ((vlSelf->__VdfgTmp_h32c20af4__0 
                     & vlSelf->__VdfgTmp_h9ceee2f4__0) 
                    | ((vlSelf->__VdfgTmp_h32c20af4__0 
                        | vlSelf->__VdfgTmp_he734e97d__0) 
                       & vlSelf->__VdfgTmp_h14e57f54__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h32c20af4__0 ^ (vlSelf->__VdfgTmp_he734e97d__0 
                                             ^ (vlSelf->__VdfgTmp_h9ceee2f4__0 
                                                ^ vlSelf->__VdfgTmp_h14e57f54__0)));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h62cd212c__0 & vlSelf->__VdfgTmp_h69e4af33__0) 
           | ((vlSelf->__VdfgTmp_h69e4af33__0 & vlSelf->__VdfgTmp_hed199804__0) 
              | ((vlSelf->__VdfgTmp_hed199804__0 & vlSelf->__VdfgTmp_hc515ff61__0) 
                 | ((vlSelf->__VdfgTmp_h62cd212c__0 
                     & vlSelf->__VdfgTmp_hed199804__0) 
                    | ((vlSelf->__VdfgTmp_h62cd212c__0 
                        | vlSelf->__VdfgTmp_h69e4af33__0) 
                       & vlSelf->__VdfgTmp_hc515ff61__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h62cd212c__0 ^ (vlSelf->__VdfgTmp_h69e4af33__0 
                                             ^ (vlSelf->__VdfgTmp_hed199804__0 
                                                ^ vlSelf->__VdfgTmp_hc515ff61__0)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___ico_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___ico_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__0\n"); );
    // Init
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    // Body
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((2U == (3U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((8U == (0xcU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000U == (0xc000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20U == (0x30U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80U == (0xc0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200U == (0x300U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800U == (0xc00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000U == (0x30000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000U == (0xc0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000U == (0x300000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000U == (0xc00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000U == (0x3000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000U == (0xc000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000U == (0x3000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                  >> 1U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (8U == (0xaU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000U == (0xa000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20U == (0x28U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80U == (0xa0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200U == (0x280U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800U == (0xa00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000U == (0x28000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000U == (0xa0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000U == (0x280000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000U == (0xa00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000U == (0x2800000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000U == (0xa000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000U == (0x2800U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((4U == 
                                             (6U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((2U == 
                                               (6U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((6U 
                                                 == 
                                                 (0xeU 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 1U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((8U == 
                                               (0x18U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x18U 
                                                 == 
                                                 (0x38U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 3U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40U 
                                             == (0x60U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x20U 
                                               == (0x60U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x60U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 5U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100U 
                                             == (0x180U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x80U 
                                               == (0x180U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x180U 
                                                 == 
                                                 (0x380U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 7U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x200U 
                                               == (0x600U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x600U 
                                                 == 
                                                 (0xe00U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 9U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10000U 
                                             == (0x18000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x8000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x18000U 
                                                 == 
                                                 (0x38000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 0xfU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40000U 
                                             == (0x60000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x20000U 
                                               == (0x60000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x60000U 
                                                 == 
                                                 (0xe0000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 0x11U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x80000U 
                                               == (0x180000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x180000U 
                                                 == 
                                                 (0x380000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 0x13U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400000U 
                                             == (0x600000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x200000U 
                                               == (0x600000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x600000U 
                                                 == 
                                                 (0xe00000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 0x15U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000000U 
                                             == (0x1800000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x800000U 
                                               == (0x1800000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x1800000U 
                                                 == 
                                                 (0x3800000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 0x17U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(((0x8000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : 0U))) << 0x1cU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                                   << 0x1aU))));
    vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x4000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x2000000U 
                                               == (0x6000000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x6000000U 
                                                 == 
                                                 (0xe000000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 0x19U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__VdfgTmp_h7b320ed4__0 = (((QData)((IData)(
                                                       (0x1fffffffU 
                                                        & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           ((1U 
                                                             & ((IData)(
                                                                        (0x4000U 
                                                                         == 
                                                                         (0x6000U 
                                                                          & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                                                | (IData)(
                                                                          (0x2000U 
                                                                           == 
                                                                           (0x6000U 
                                                                            & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                                                             ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                                                             : 
                                                            ((1U 
                                                              & ((IData)(
                                                                         (0x6000U 
                                                                          == 
                                                                          (0xe000U 
                                                                           & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                                                 | ((~ 
                                                                     (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                                                      >> 0xdU)) 
                                                                    & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                              ? 
                                                             (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                                              << 1U)
                                                              : 0U)))))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU))));
    vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000U 
                                             == (0x1800U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x800U 
                                               == (0x1800U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x1800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 0xbU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (QData)((IData)(((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                            << 2U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod)) 
            << 4U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                      << 2U))));
    vlSelf->__VdfgTmp_hd7a1965f__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod)) 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod)) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod)) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod)) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod)) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod)) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__VdfgTmp_h81291c99__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod)) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod)) 
            << 0x18U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                         << 0x16U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod)) 
            << 0x1aU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                         << 0x18U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod)) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__VdfgTmp_h62cd212c__0 = ((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h69e4af33__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          | (QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h32c20af4__0 = (vlSelf->__VdfgTmp_h7b320ed4__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_he734e97d__0 = ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_h9ceee2f4__0 = (vlSelf->__VdfgTmp_h81291c99__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_h14e57f54__0 = ((vlSelf->__VdfgTmp_h81291c99__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_hed199804__0 = (vlSelf->__VdfgTmp_hd7a1965f__0 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_hc515ff61__0 = ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                   | csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h32c20af4__0 & vlSelf->__VdfgTmp_he734e97d__0) 
           | ((vlSelf->__VdfgTmp_he734e97d__0 & vlSelf->__VdfgTmp_h9ceee2f4__0) 
              | ((vlSelf->__VdfgTmp_h9ceee2f4__0 & vlSelf->__VdfgTmp_h14e57f54__0) 
                 | ((vlSelf->__VdfgTmp_h32c20af4__0 
                     & vlSelf->__VdfgTmp_h9ceee2f4__0) 
                    | ((vlSelf->__VdfgTmp_h32c20af4__0 
                        | vlSelf->__VdfgTmp_he734e97d__0) 
                       & vlSelf->__VdfgTmp_h14e57f54__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h32c20af4__0 ^ (vlSelf->__VdfgTmp_he734e97d__0 
                                             ^ (vlSelf->__VdfgTmp_h9ceee2f4__0 
                                                ^ vlSelf->__VdfgTmp_h14e57f54__0)));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h62cd212c__0 & vlSelf->__VdfgTmp_h69e4af33__0) 
           | ((vlSelf->__VdfgTmp_h69e4af33__0 & vlSelf->__VdfgTmp_hed199804__0) 
              | ((vlSelf->__VdfgTmp_hed199804__0 & vlSelf->__VdfgTmp_hc515ff61__0) 
                 | ((vlSelf->__VdfgTmp_h62cd212c__0 
                     & vlSelf->__VdfgTmp_hed199804__0) 
                    | ((vlSelf->__VdfgTmp_h62cd212c__0 
                        | vlSelf->__VdfgTmp_h69e4af33__0) 
                       & vlSelf->__VdfgTmp_hc515ff61__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h62cd212c__0 ^ (vlSelf->__VdfgTmp_h69e4af33__0 
                                             ^ (vlSelf->__VdfgTmp_hed199804__0 
                                                ^ vlSelf->__VdfgTmp_hc515ff61__0)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___act_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___act_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__0\n"); );
    // Body
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((2U == (3U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((8U == (0xcU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000U == (0xc000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20U == (0x30U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80U == (0xc0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200U == (0x300U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800U == (0xc00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000U == (0x30000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000U == (0xc0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000U == (0x300000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000U == (0xc00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000U == (0x3000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000U == (0xc000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000U == (0x3000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                  >> 1U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (8U == (0xaU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000U == (0xa000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20U == (0x28U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80U == (0xa0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200U == (0x280U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800U == (0xa00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000U == (0x28000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000U == (0xa0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000U == (0x280000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000U == (0xa00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000U == (0x2800000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000U == (0xa000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000U == (0x2800U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___act_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___act_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__0\n"); );
    // Init
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    // Body
    vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((4U == 
                                             (6U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((2U == 
                                               (6U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((6U 
                                                 == 
                                                 (0xeU 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 1U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((8U == 
                                               (0x18U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x18U 
                                                 == 
                                                 (0x38U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 3U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40U 
                                             == (0x60U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x20U 
                                               == (0x60U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x60U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 5U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100U 
                                             == (0x180U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x80U 
                                               == (0x180U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x180U 
                                                 == 
                                                 (0x380U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 7U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x200U 
                                               == (0x600U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x600U 
                                                 == 
                                                 (0xe00U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 9U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10000U 
                                             == (0x18000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x8000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x18000U 
                                                 == 
                                                 (0x38000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 0xfU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40000U 
                                             == (0x60000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x20000U 
                                               == (0x60000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x60000U 
                                                 == 
                                                 (0xe0000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 0x11U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x80000U 
                                               == (0x180000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x180000U 
                                                 == 
                                                 (0x380000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 0x13U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400000U 
                                             == (0x600000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x200000U 
                                               == (0x600000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x600000U 
                                                 == 
                                                 (0xe00000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 0x15U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000000U 
                                             == (0x1800000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x800000U 
                                               == (0x1800000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x1800000U 
                                                 == 
                                                 (0x3800000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 0x17U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(((0x8000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : 0U))) << 0x1cU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                                   << 0x1aU))));
    vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x4000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x2000000U 
                                               == (0x6000000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x6000000U 
                                                 == 
                                                 (0xe000000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 0x19U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__VdfgTmp_h7b320ed4__0 = (((QData)((IData)(
                                                       (0x1fffffffU 
                                                        & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           ((1U 
                                                             & ((IData)(
                                                                        (0x4000U 
                                                                         == 
                                                                         (0x6000U 
                                                                          & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                                                | (IData)(
                                                                          (0x2000U 
                                                                           == 
                                                                           (0x6000U 
                                                                            & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                                                             ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                                                             : 
                                                            ((1U 
                                                              & ((IData)(
                                                                         (0x6000U 
                                                                          == 
                                                                          (0xe000U 
                                                                           & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                                                 | ((~ 
                                                                     (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                                                      >> 0xdU)) 
                                                                    & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                              ? 
                                                             (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                                              << 1U)
                                                              : 0U)))))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU))));
    vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000U 
                                             == (0x1800U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                    | (IData)((0x800U 
                                               == (0x1800U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a
                              : ((1U & ((IData)((0x1800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
                                               >> 0xbU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (QData)((IData)(((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                            << 2U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod)) 
            << 4U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                      << 2U))));
    vlSelf->__VdfgTmp_hd7a1965f__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod)) 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod)) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod)) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod)) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod)) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod)) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__VdfgTmp_h81291c99__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod)) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod)) 
            << 0x18U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                         << 0x16U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod)) 
            << 0x1aU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                         << 0x18U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod)) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__VdfgTmp_h62cd212c__0 = ((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h69e4af33__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          | (QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h32c20af4__0 = (vlSelf->__VdfgTmp_h7b320ed4__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_he734e97d__0 = ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_h9ceee2f4__0 = (vlSelf->__VdfgTmp_h81291c99__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_h14e57f54__0 = ((vlSelf->__VdfgTmp_h81291c99__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_hed199804__0 = (vlSelf->__VdfgTmp_hd7a1965f__0 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_hc515ff61__0 = ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                   | csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h32c20af4__0 & vlSelf->__VdfgTmp_he734e97d__0) 
           | ((vlSelf->__VdfgTmp_he734e97d__0 & vlSelf->__VdfgTmp_h9ceee2f4__0) 
              | ((vlSelf->__VdfgTmp_h9ceee2f4__0 & vlSelf->__VdfgTmp_h14e57f54__0) 
                 | ((vlSelf->__VdfgTmp_h32c20af4__0 
                     & vlSelf->__VdfgTmp_h9ceee2f4__0) 
                    | ((vlSelf->__VdfgTmp_h32c20af4__0 
                        | vlSelf->__VdfgTmp_he734e97d__0) 
                       & vlSelf->__VdfgTmp_h14e57f54__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h32c20af4__0 ^ (vlSelf->__VdfgTmp_he734e97d__0 
                                             ^ (vlSelf->__VdfgTmp_h9ceee2f4__0 
                                                ^ vlSelf->__VdfgTmp_h14e57f54__0)));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h62cd212c__0 & vlSelf->__VdfgTmp_h69e4af33__0) 
           | ((vlSelf->__VdfgTmp_h69e4af33__0 & vlSelf->__VdfgTmp_hed199804__0) 
              | ((vlSelf->__VdfgTmp_hed199804__0 & vlSelf->__VdfgTmp_hc515ff61__0) 
                 | ((vlSelf->__VdfgTmp_h62cd212c__0 
                     & vlSelf->__VdfgTmp_hed199804__0) 
                    | ((vlSelf->__VdfgTmp_h62cd212c__0 
                        | vlSelf->__VdfgTmp_h69e4af33__0) 
                       & vlSelf->__VdfgTmp_hc515ff61__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h62cd212c__0 ^ (vlSelf->__VdfgTmp_h69e4af33__0 
                                             ^ (vlSelf->__VdfgTmp_hed199804__0 
                                                ^ vlSelf->__VdfgTmp_hc515ff61__0)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___ico_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___ico_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__0\n"); );
    // Init
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    // Body
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((2U == (3U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((8U == (0xcU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000U == (0xc000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20U == (0x30U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80U == (0xc0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200U == (0x300U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800U == (0xc00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000U == (0x30000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000U == (0xc0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000U == (0x300000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000U == (0xc00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000U == (0x3000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000U == (0xc000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000U == (0x3000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                  >> 1U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (8U == (0xaU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000U == (0xa000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20U == (0x28U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80U == (0xa0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200U == (0x280U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800U == (0xa00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000U == (0x28000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000U == (0xa0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000U == (0x280000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000U == (0xa00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000U == (0x2800000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000U == (0xa000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000U == (0x2800U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((4U == 
                                             (6U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((2U == 
                                               (6U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((6U 
                                                 == 
                                                 (0xeU 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 1U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((8U == 
                                               (0x18U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x18U 
                                                 == 
                                                 (0x38U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 3U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40U 
                                             == (0x60U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x20U 
                                               == (0x60U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x60U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 5U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100U 
                                             == (0x180U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x80U 
                                               == (0x180U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x180U 
                                                 == 
                                                 (0x380U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 7U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x200U 
                                               == (0x600U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x600U 
                                                 == 
                                                 (0xe00U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 9U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10000U 
                                             == (0x18000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x8000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x18000U 
                                                 == 
                                                 (0x38000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 0xfU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40000U 
                                             == (0x60000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x20000U 
                                               == (0x60000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x60000U 
                                                 == 
                                                 (0xe0000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 0x11U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x80000U 
                                               == (0x180000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x180000U 
                                                 == 
                                                 (0x380000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 0x13U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400000U 
                                             == (0x600000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x200000U 
                                               == (0x600000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x600000U 
                                                 == 
                                                 (0xe00000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 0x15U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000000U 
                                             == (0x1800000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x800000U 
                                               == (0x1800000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x1800000U 
                                                 == 
                                                 (0x3800000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 0x17U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(((0x8000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : 0U))) << 0x1cU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                                   << 0x1aU))));
    vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x4000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x2000000U 
                                               == (0x6000000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x6000000U 
                                                 == 
                                                 (0xe000000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 0x19U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__VdfgTmp_h7b320ed4__0 = (((QData)((IData)(
                                                       (0x1fffffffU 
                                                        & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           ((1U 
                                                             & ((IData)(
                                                                        (0x4000U 
                                                                         == 
                                                                         (0x6000U 
                                                                          & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                                                | (IData)(
                                                                          (0x2000U 
                                                                           == 
                                                                           (0x6000U 
                                                                            & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                                                             ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                                                             : 
                                                            ((1U 
                                                              & ((IData)(
                                                                         (0x6000U 
                                                                          == 
                                                                          (0xe000U 
                                                                           & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                                                 | ((~ 
                                                                     (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                                                      >> 0xdU)) 
                                                                    & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                              ? 
                                                             (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                                              << 1U)
                                                              : 0U)))))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU))));
    vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000U 
                                             == (0x1800U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x800U 
                                               == (0x1800U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x1800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 0xbU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (QData)((IData)(((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                            << 2U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod)) 
            << 4U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                      << 2U))));
    vlSelf->__VdfgTmp_hd7a1965f__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod)) 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod)) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod)) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod)) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod)) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod)) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__VdfgTmp_h81291c99__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod)) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod)) 
            << 0x18U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                         << 0x16U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod)) 
            << 0x1aU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                         << 0x18U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod)) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__VdfgTmp_h62cd212c__0 = ((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h69e4af33__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          | (QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h32c20af4__0 = (vlSelf->__VdfgTmp_h7b320ed4__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_he734e97d__0 = ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_h9ceee2f4__0 = (vlSelf->__VdfgTmp_h81291c99__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_h14e57f54__0 = ((vlSelf->__VdfgTmp_h81291c99__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_hed199804__0 = (vlSelf->__VdfgTmp_hd7a1965f__0 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_hc515ff61__0 = ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                   | csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h32c20af4__0 & vlSelf->__VdfgTmp_he734e97d__0) 
           | ((vlSelf->__VdfgTmp_he734e97d__0 & vlSelf->__VdfgTmp_h9ceee2f4__0) 
              | ((vlSelf->__VdfgTmp_h9ceee2f4__0 & vlSelf->__VdfgTmp_h14e57f54__0) 
                 | ((vlSelf->__VdfgTmp_h32c20af4__0 
                     & vlSelf->__VdfgTmp_h9ceee2f4__0) 
                    | ((vlSelf->__VdfgTmp_h32c20af4__0 
                        | vlSelf->__VdfgTmp_he734e97d__0) 
                       & vlSelf->__VdfgTmp_h14e57f54__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h32c20af4__0 ^ (vlSelf->__VdfgTmp_he734e97d__0 
                                             ^ (vlSelf->__VdfgTmp_h9ceee2f4__0 
                                                ^ vlSelf->__VdfgTmp_h14e57f54__0)));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h62cd212c__0 & vlSelf->__VdfgTmp_h69e4af33__0) 
           | ((vlSelf->__VdfgTmp_h69e4af33__0 & vlSelf->__VdfgTmp_hed199804__0) 
              | ((vlSelf->__VdfgTmp_hed199804__0 & vlSelf->__VdfgTmp_hc515ff61__0) 
                 | ((vlSelf->__VdfgTmp_h62cd212c__0 
                     & vlSelf->__VdfgTmp_hed199804__0) 
                    | ((vlSelf->__VdfgTmp_h62cd212c__0 
                        | vlSelf->__VdfgTmp_h69e4af33__0) 
                       & vlSelf->__VdfgTmp_hc515ff61__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h62cd212c__0 ^ (vlSelf->__VdfgTmp_h69e4af33__0 
                                             ^ (vlSelf->__VdfgTmp_hed199804__0 
                                                ^ vlSelf->__VdfgTmp_hc515ff61__0)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___act_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___act_sequent__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__0\n"); );
    // Body
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((2U == (3U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((8U == (0xcU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000U == (0xc000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20U == (0x30U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80U == (0xc0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200U == (0x300U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800U == (0xc00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000U == (0x30000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000U == (0xc0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000U == (0x300000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000U == (0xc00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000U == (0x3000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000U == (0xc000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000U == (0x3000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                  >> 1U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (8U == (0xaU & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000U == (0xa000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20U == (0x28U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80U == (0xa0U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200U == (0x280U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800U == (0xa00U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000U == (0x28000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000U == (0xa0000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000U == (0x280000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000U == (0xa00000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000U == (0x2800000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000U == (0xa000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000U == (0x2800U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
}

VL_INLINE_OPT void VPvuTop_Radix4BoothMultiplier___act_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__0(VPvuTop_Radix4BoothMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_Radix4BoothMultiplier___act_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__0\n"); );
    // Init
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 = 0;
    QData/*55:0*/ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0;
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 = 0;
    // Body
    vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((4U == 
                                             (6U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((2U == 
                                               (6U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((6U 
                                                 == 
                                                 (0xeU 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 1U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((8U == 
                                               (0x18U 
                                                & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x18U 
                                                 == 
                                                 (0x38U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 3U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40U 
                                             == (0x60U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x20U 
                                               == (0x60U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x60U 
                                                 == 
                                                 (0xe0U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 5U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100U 
                                             == (0x180U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x80U 
                                               == (0x180U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x180U 
                                                 == 
                                                 (0x380U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 7U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x200U 
                                               == (0x600U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x600U 
                                                 == 
                                                 (0xe00U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 9U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x10000U 
                                             == (0x18000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x8000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x18000U 
                                                 == 
                                                 (0x38000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 0xfU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x40000U 
                                             == (0x60000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x20000U 
                                               == (0x60000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x60000U 
                                                 == 
                                                 (0xe0000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 0x11U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x100000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x80000U 
                                               == (0x180000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x180000U 
                                                 == 
                                                 (0x380000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 0x13U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x400000U 
                                             == (0x600000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x200000U 
                                               == (0x600000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x600000U 
                                                 == 
                                                 (0xe00000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 0x15U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000000U 
                                             == (0x1800000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x800000U 
                                               == (0x1800000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x1800000U 
                                                 == 
                                                 (0x3800000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 0x17U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(((0x8000000U & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : 0U))) << 0x1cU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                                                   << 0x1aU))));
    vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x4000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x2000000U 
                                               == (0x6000000U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x6000000U 
                                                 == 
                                                 (0xe000000U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 0x19U)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    vlSelf->__VdfgTmp_h7b320ed4__0 = (((QData)((IData)(
                                                       (0x1fffffffU 
                                                        & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                                           ^ 
                                                           ((1U 
                                                             & ((IData)(
                                                                        (0x4000U 
                                                                         == 
                                                                         (0x6000U 
                                                                          & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                                                | (IData)(
                                                                          (0x2000U 
                                                                           == 
                                                                           (0x6000U 
                                                                            & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                                                             ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                                                             : 
                                                            ((1U 
                                                              & ((IData)(
                                                                         (0x6000U 
                                                                          == 
                                                                          (0xe000U 
                                                                           & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                                                 | ((~ 
                                                                     (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                                                      >> 0xdU)) 
                                                                    & (IData)(vlSelf->genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                              ? 
                                                             (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                                              << 1U)
                                                              : 0U)))))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                                                   << 0xcU))));
    vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1fffffffU & ((- (IData)((IData)(vlSelf->__PVT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                          ^ ((1U & ((IData)((0x1000U 
                                             == (0x1800U 
                                                 & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                    | (IData)((0x800U 
                                               == (0x1800U 
                                                   & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)))))
                              ? vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a
                              : ((1U & ((IData)((0x1800U 
                                                 == 
                                                 (0x3800U 
                                                  & vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))) 
                                        | ((~ (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
                                               >> 0xbU)) 
                                           & (IData)(vlSelf->genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                  ? (vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                     << 1U) : 0U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (QData)((IData)(((vlSelf->__PVT__genProds__DOT___genProd_io_partial_prod 
                            << 2U) | (IData)(vlSelf->__PVT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_1_io_partial_prod)) 
            << 4U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                      << 2U))));
    vlSelf->__VdfgTmp_hd7a1965f__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_2_io_partial_prod)) 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_3_io_partial_prod)) 
            << 8U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                                      << 6U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_4_io_partial_prod)) 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                                        << 8U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_7_io_partial_prod)) 
            << 0x10U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                                         << 0xeU))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_8_io_partial_prod)) 
            << 0x12U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                                         << 0x10U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_9_io_partial_prod)) 
            << 0x14U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                         << 0x12U))));
    vlSelf->__VdfgTmp_h81291c99__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_10_io_partial_prod)) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                                                                    << 0x14U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_11_io_partial_prod)) 
            << 0x18U) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                                         << 0x16U))));
    csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_12_io_partial_prod)) 
            << 0x1aU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                                         << 0x18U))));
    csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0 
        = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd_5_io_partial_prod)) 
            << 0xcU) | (QData)((IData)(((IData)(vlSelf->__PVT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                                        << 0xaU))));
    vlSelf->__VdfgTmp_h62cd212c__0 = ((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h69e4af33__0 = (((QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod)) 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          | (QData)((IData)(vlSelf->__PVT__genProds__DOT___genProd0_io_partial_prod))) 
                                         & csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0));
    vlSelf->__VdfgTmp_h32c20af4__0 = (vlSelf->__VdfgTmp_h7b320ed4__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_he734e97d__0 = ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h7b320ed4__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_h9ceee2f4__0 = (vlSelf->__VdfgTmp_h81291c99__0 
                                      ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_h14e57f54__0 = ((vlSelf->__VdfgTmp_h81291c99__0 
                                       & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_h81291c99__0 
                                                   | csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__VdfgTmp_hed199804__0 = (vlSelf->__VdfgTmp_hd7a1965f__0 
                                      ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                         ^ (csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                            ^ csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)));
    vlSelf->__VdfgTmp_hc515ff61__0 = ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                       & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                      | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0 
                                          & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                         | ((csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0 
                                             & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0) 
                                            | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ae619__0) 
                                               | ((vlSelf->__VdfgTmp_hd7a1965f__0 
                                                   | csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1544210c__0) 
                                                  & csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h177abc36__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_carry_o 
        = ((vlSelf->__VdfgTmp_h32c20af4__0 & vlSelf->__VdfgTmp_he734e97d__0) 
           | ((vlSelf->__VdfgTmp_he734e97d__0 & vlSelf->__VdfgTmp_h9ceee2f4__0) 
              | ((vlSelf->__VdfgTmp_h9ceee2f4__0 & vlSelf->__VdfgTmp_h14e57f54__0) 
                 | ((vlSelf->__VdfgTmp_h32c20af4__0 
                     & vlSelf->__VdfgTmp_h9ceee2f4__0) 
                    | ((vlSelf->__VdfgTmp_h32c20af4__0 
                        | vlSelf->__VdfgTmp_he734e97d__0) 
                       & vlSelf->__VdfgTmp_h14e57f54__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_B_io_sum_o 
        = (vlSelf->__VdfgTmp_h32c20af4__0 ^ (vlSelf->__VdfgTmp_he734e97d__0 
                                             ^ (vlSelf->__VdfgTmp_h9ceee2f4__0 
                                                ^ vlSelf->__VdfgTmp_h14e57f54__0)));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_carry_o 
        = ((vlSelf->__VdfgTmp_h62cd212c__0 & vlSelf->__VdfgTmp_h69e4af33__0) 
           | ((vlSelf->__VdfgTmp_h69e4af33__0 & vlSelf->__VdfgTmp_hed199804__0) 
              | ((vlSelf->__VdfgTmp_hed199804__0 & vlSelf->__VdfgTmp_hc515ff61__0) 
                 | ((vlSelf->__VdfgTmp_h62cd212c__0 
                     & vlSelf->__VdfgTmp_hed199804__0) 
                    | ((vlSelf->__VdfgTmp_h62cd212c__0 
                        | vlSelf->__VdfgTmp_h69e4af33__0) 
                       & vlSelf->__VdfgTmp_hc515ff61__0)))));
    vlSelf->__PVT__csaTree__DOT___csa_tree_A_io_sum_o 
        = (vlSelf->__VdfgTmp_h62cd212c__0 ^ (vlSelf->__VdfgTmp_h69e4af33__0 
                                             ^ (vlSelf->__VdfgTmp_hed199804__0 
                                                ^ vlSelf->__VdfgTmp_hc515ff61__0)));
}
