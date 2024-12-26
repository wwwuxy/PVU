// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_IntDivider.h"
#include "VPvuTop__Syms.h"

VL_INLINE_OPT void VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_1__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_1__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6910bc2b__0;
    VlWide<3>/*95:0*/ __Vtemp_ha67f780c__0;
    VlWide<3>/*95:0*/ __Vtemp_h95857d05__0;
    VlWide<3>/*95:0*/ __Vtemp_hba4a56f5__0;
    VlWide<3>/*95:0*/ __Vtemp_h5ce10a39__0;
    VlWide<3>/*95:0*/ __Vtemp_h2f44e198__0;
    VlWide<3>/*95:0*/ __Vtemp_h15f3800c__0;
    VlWide<3>/*95:0*/ __Vtemp_h5baa320b__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f83c2a8__0;
    VlWide<3>/*95:0*/ __Vtemp_h874f292b__0;
    VlWide<3>/*95:0*/ __Vtemp_hdcfde32d__0;
    // Body
    __Vtemp_h6910bc2b__0[0U] = (IData)((0xffffffffffffffULL 
                                        & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))));
    __Vtemp_h6910bc2b__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)))) 
                                        >> 0x20U));
    __Vtemp_h6910bc2b__0[2U] = 0U;
    __Vtemp_ha67f780c__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)) 
                                              * (0xffffffffffffffULL 
                                                 & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))))))));
    __Vtemp_ha67f780c__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)) 
                                               * (0xffffffffffffffULL 
                                                  & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))))))) 
                                        >> 0x20U));
    __Vtemp_ha67f780c__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h95857d05__0, __Vtemp_h6910bc2b__0, __Vtemp_ha67f780c__0);
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U] 
        = __Vtemp_h95857d05__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U] 
        = __Vtemp_h95857d05__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U] 
        = (0xfffffU & __Vtemp_h95857d05__0[2U]);
    VL_SHIFTR_WWI(84,84,32, __Vtemp_hba4a56f5__0, vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full, 0x1cU);
    __Vtemp_h5ce10a39__0[0U] = __Vtemp_hba4a56f5__0[0U];
    __Vtemp_h5ce10a39__0[1U] = __Vtemp_hba4a56f5__0[1U];
    __Vtemp_h5ce10a39__0[2U] = (0xfffffU & __Vtemp_hba4a56f5__0[2U]);
    __Vtemp_h2f44e198__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)) 
                                              * (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                          >> 0x1cU))))))));
    __Vtemp_h2f44e198__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)) 
                                               * (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                           >> 0x1cU))))))) 
                                        >> 0x20U));
    __Vtemp_h2f44e198__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h15f3800c__0, __Vtemp_h5ce10a39__0, __Vtemp_h2f44e198__0);
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U] 
        = __Vtemp_h15f3800c__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U] 
        = __Vtemp_h15f3800c__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U] 
        = (0xfffffU & __Vtemp_h15f3800c__0[2U]);
    VL_SHIFTR_WWI(84,84,32, __Vtemp_h5baa320b__0, vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full, 0x1cU);
    __Vtemp_h5f83c2a8__0[0U] = __Vtemp_h5baa320b__0[0U];
    __Vtemp_h5f83c2a8__0[1U] = __Vtemp_h5baa320b__0[1U];
    __Vtemp_h5f83c2a8__0[2U] = (0xfffffU & __Vtemp_h5baa320b__0[2U]);
    __Vtemp_h874f292b__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)) 
                                              * (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                          >> 0x1cU))))))));
    __Vtemp_h874f292b__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)) 
                                               * (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                           >> 0x1cU))))))) 
                                        >> 0x20U));
    __Vtemp_h874f292b__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_hdcfde32d__0, __Vtemp_h5f83c2a8__0, __Vtemp_h874f292b__0);
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
        = __Vtemp_hdcfde32d__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
        = __Vtemp_hdcfde32d__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
        = (0xfffffU & __Vtemp_hdcfde32d__0[2U]);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x20000000U == (0x30000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000U == (0x3000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000U == (0xc0000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800U == (0xc00U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000U == (0x3000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000U == (0xc000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (1U & ((~ vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]) 
                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                    >> 1U)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000U == (0xc000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000U == (0x30000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200U == (0x300U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((8U == (0xcU & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20U == (0x30U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80U == (0xc0U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000U == (0x30000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000U == (0xc0000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000U == (0x300000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000U == (0xc0000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (1U & ((~ vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]) 
                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                    >> 1U)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((8U == (0xcU & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20U == (0x30U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80U == (0xc0U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200U == (0x300U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800U == (0xc00U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000U == (0x3000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000U == (0xc000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000U == (0x30000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000U == (0xc00000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000U == (0xc0000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                  >> 0x1dU) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000U == (0x2800000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000U == (0xa0000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800U == (0xa00U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000U == (0x2800U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000U == (0xa000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = (1U & (((~ (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                      >> 0x1fU)) & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 1U)) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000U == (0xa000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000U == (0x28000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200U == (0x280U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (8U == (0xaU & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20U == (0x28U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80U == (0xa0U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000U == (0x28000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000U == (0xa0000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000U == (0x280000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000U == (0xa0000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg 
        = (1U & (((~ (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                      >> 0x1fU)) & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                    >> 1U)) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (8U == (0xaU & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20U == (0x28U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80U == (0xa0U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200U == (0x280U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800U == (0xa00U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000U == (0x2800U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000U == (0xa000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000U == (0x28000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000U == (0xa00000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000U == (0xa0000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
}

VL_INLINE_OPT void VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__0\n"); );
    // Init
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0);
    VlWide<3>/*95:0*/ __Vtemp_hcf1e7c72__0;
    // Body
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                                   ^ ((0x10000000U 
                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40000000U 
                                                      == 
                                                      (0x60000000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U]))) 
                                             | (IData)(
                                                       (0x20000000U 
                                                        == 
                                                        (0x60000000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60000000U 
                                                          == 
                                                          (0xe0000000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                      >> 0x1dU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x400U 
                                                      == 
                                                      (0x600U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x600U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x600U 
                                                          == 
                                                          (0xe00U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 9U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x1000U 
                                                      == 
                                                      (0x1800U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x1800U 
                                                          == 
                                                          (0x3800U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xbU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x4000000U 
                                                      == 
                                                      (0x6000000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x2000000U 
                                                        == 
                                                        (0x6000000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x6000000U 
                                                          == 
                                                          (0xe000000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x19U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & (((~ (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                  >> 0x1fU)) 
                                              & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]) 
                                             | ((~ 
                                                 vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]) 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                   >> 0x1fU))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & (((
                                                   vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                   >> 0x1fU) 
                                                  & (1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                      >> 0x1fU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x4000U 
                                                      == 
                                                      (0x6000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x2000U 
                                                        == 
                                                        (0x6000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x6000U 
                                                          == 
                                                          (0xe000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xdU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10000000U 
                                                      == 
                                                      (0x18000000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x8000000U 
                                                        == 
                                                        (0x18000000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x18000000U 
                                                          == 
                                                          (0x38000000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1bU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x100U 
                                                      == 
                                                      (0x180U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x80U 
                                                        == 
                                                        (0x180U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x180U 
                                                          == 
                                                          (0x380U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 7U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (4U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (6U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (6U 
                                                          == 
                                                          (0xeU 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10U 
                                                      == 
                                                      (0x18U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (8U 
                                                        == 
                                                        (0x18U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x18U 
                                                          == 
                                                          (0x38U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 3U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40U 
                                                      == 
                                                      (0x60U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60U 
                                                          == 
                                                          (0xe0U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 5U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10000U 
                                                      == 
                                                      (0x18000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x18000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x18000U 
                                                          == 
                                                          (0x38000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xfU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40000U 
                                                      == 
                                                      (0x60000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x20000U 
                                                        == 
                                                        (0x60000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60000U 
                                                          == 
                                                          (0xe0000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x11U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x100000U 
                                                      == 
                                                      (0x180000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x80000U 
                                                        == 
                                                        (0x180000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x180000U 
                                                          == 
                                                          (0x380000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x13U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40000000U 
                                                      == 
                                                      (0x60000000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x20000000U 
                                                        == 
                                                        (0x60000000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60000000U 
                                                          == 
                                                          (0xe0000000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1dU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & (((~ (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 0x1fU)) 
                                              & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]) 
                                             | ((~ 
                                                 vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]) 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x1fU))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & (((
                                                   vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x1fU) 
                                                  & (1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1fU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (4U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (6U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (6U 
                                                          == 
                                                          (0xeU 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10U 
                                                      == 
                                                      (0x18U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (8U 
                                                        == 
                                                        (0x18U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x18U 
                                                          == 
                                                          (0x38U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 3U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40U 
                                                      == 
                                                      (0x60U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60U 
                                                          == 
                                                          (0xe0U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 5U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x100U 
                                                      == 
                                                      (0x180U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x80U 
                                                        == 
                                                        (0x180U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x180U 
                                                          == 
                                                          (0x380U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 7U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x400U 
                                                      == 
                                                      (0x600U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x600U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x600U 
                                                          == 
                                                          (0xe00U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 9U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x1000U 
                                                      == 
                                                      (0x1800U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x1800U 
                                                          == 
                                                          (0x3800U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xbU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x4000U 
                                                      == 
                                                      (0x6000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x2000U 
                                                        == 
                                                        (0x6000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x6000U 
                                                          == 
                                                          (0xe000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xdU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10000U 
                                                      == 
                                                      (0x18000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x18000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x18000U 
                                                          == 
                                                          (0x38000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xfU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    __Vtemp_hcf1e7c72__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x1000000U 
                                                             == 
                                                             (0x1800000U 
                                                              & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                    | (IData)(
                                                              (0x800000U 
                                                               == 
                                                               (0x1800000U 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                 ? 
                                                ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                 << 0x1cU)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x1800000U 
                                                              == 
                                                              (0x3800000U 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                     | ((~ 
                                                         (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                          >> 0x17U)) 
                                                        & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                  << 0x1dU)
                                                  : 0ULL))))) 
                                 >> 4U) | ((IData)(
                                                   ((0x1ffffffffffffffULL 
                                                     & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                                        ^ 
                                                        ((1U 
                                                          & ((IData)(
                                                                     (0x1000000U 
                                                                      == 
                                                                      (0x1800000U 
                                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                             | (IData)(
                                                                       (0x800000U 
                                                                        == 
                                                                        (0x1800000U 
                                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                          ? 
                                                         ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                          << 0x1cU)
                                                          : 
                                                         ((1U 
                                                           & ((IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x3800000U 
                                                                        & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                              | ((~ 
                                                                  (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                   >> 0x17U)) 
                                                                 & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                           ? 
                                                          ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                           << 0x1dU)
                                                           : 0ULL)))) 
                                                    >> 0x20U)) 
                                           << 0x1cU));
    vlSelf->__VdfgTmp_h2dbf44cc__0[0U] = (((IData)(
                                                   (0x1ffffffffffffffULL 
                                                    & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                                       ^ 
                                                       ((1U 
                                                         & ((IData)(
                                                                    (0x1000000U 
                                                                     == 
                                                                     (0x1800000U 
                                                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                            | (IData)(
                                                                      (0x800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                         ? 
                                                        ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                         << 0x1cU)
                                                         : 
                                                        ((1U 
                                                          & ((IData)(
                                                                     (0x1800000U 
                                                                      == 
                                                                      (0x3800000U 
                                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                             | ((~ 
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                  >> 0x17U)) 
                                                                & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                          ? 
                                                         ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                          << 0x1dU)
                                                          : 0ULL))))) 
                                           << 0x1cU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                             << 0x1aU));
    vlSelf->__VdfgTmp_h2dbf44cc__0[1U] = __Vtemp_hcf1e7c72__0[1U];
    vlSelf->__VdfgTmp_h2dbf44cc__0[2U] = ((IData)((
                                                   (0x1ffffffffffffffULL 
                                                    & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                                       ^ 
                                                       ((1U 
                                                         & ((IData)(
                                                                    (0x1000000U 
                                                                     == 
                                                                     (0x1800000U 
                                                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                            | (IData)(
                                                                      (0x800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                         ? 
                                                        ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                         << 0x1cU)
                                                         : 
                                                        ((1U 
                                                          & ((IData)(
                                                                     (0x1800000U 
                                                                      == 
                                                                      (0x3800000U 
                                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                             | ((~ 
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                  >> 0x17U)) 
                                                                & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                          ? 
                                                         ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                                          << 0x1dU)
                                                          : 0ULL)))) 
                                                   >> 0x20U)) 
                                          >> 4U);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x400000U 
                                                      == 
                                                      (0x600000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x200000U 
                                                        == 
                                                        (0x600000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x600000U 
                                                          == 
                                                          (0xe00000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x15U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                   << 0x36U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U] 
        = (((IData)(((0x80000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])
                      ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                         << 0x1cU) : 0ULL)) << 0x18U) 
           | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                       << 0x36U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U] 
        = (((IData)(((0x80000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])
                      ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                         << 0x1cU) : 0ULL)) >> 8U) 
           | ((IData)((((0x80000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])
                         ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                            << 0x1cU) : 0ULL) >> 0x20U)) 
              << 0x18U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U] 
        = ((IData)((((0x80000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])
                      ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                         << 0x1cU) : 0ULL) >> 0x20U)) 
           >> 8U);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40000U 
                                                      == 
                                                      (0x60000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x20000U 
                                                        == 
                                                        (0x60000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60000U 
                                                          == 
                                                          (0xe0000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x11U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (IData)(((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                    << 2U) | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (IData)((((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                     << 2U) | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                   >> 0x20U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    vlSelf->__VdfgTmp_he184c527__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                           << 0xeU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_he184c527__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                           >> 0x12U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xeU));
    vlSelf->__VdfgTmp_he184c527__0[2U] = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x12U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
            << 0x10U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                         << 0xeU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
            >> 0x10U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                  >> 0x20U)) << 0x10U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                    >> 0x20U)) >> 0x10U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
            << 0x1eU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                         << 0x1cU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
            >> 2U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                               >> 0x20U)) << 0x1eU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                    >> 0x20U)) >> 2U);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (IData)(((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                    << 4U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 2U)))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (IData)((((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                     << 4U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                               << 2U)))) 
                   >> 0x20U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            << 0x12U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                         << 0x10U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                    >> 0x20U)) >> 0xeU);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
           << 0x1eU);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = (IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                   >> 0x20U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
            << 0xcU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                        << 0xaU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
            >> 0x14U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                  >> 0x20U)) << 0xcU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                    >> 0x20U)) >> 0x14U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U] = 0U;
    vlSelf->__VdfgTmp_h8c534d81__0 = ((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            << 8U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                      << 6U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                  >> 0x20U)) << 8U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                    >> 0x20U)) >> 0x18U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            << 0xaU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                        << 8U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            >> 0x16U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                  >> 0x20U)) << 0xaU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                    >> 0x20U)) >> 0x16U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    vlSelf->__VdfgTmp_he7d971a6__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                           << 0x14U) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                             << 0x12U));
    vlSelf->__VdfgTmp_he7d971a6__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                           >> 0xcU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    vlSelf->__VdfgTmp_he7d971a6__0[2U] = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0xcU);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
            << 0x16U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                         << 0x14U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                    >> 0x20U)) >> 0xaU);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            << 0x18U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                         << 0x16U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            >> 8U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                               >> 0x20U)) << 0x18U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                    >> 0x20U)) >> 8U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    vlSelf->__VdfgTmp_hf622ecd4__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                  << 0x20U));
    vlSelf->__VdfgTmp_hf622ecd4__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                           << 2U) | (IData)(
                                                            (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                              << 0x20U) 
                                                             >> 0x20U)));
    vlSelf->__VdfgTmp_hf622ecd4__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                           >> 0x1eU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 2U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                   << 0x22U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
            << 4U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                               << 0x22U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
            >> 0x1cU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                  >> 0x20U)) << 4U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                   << 0x24U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
            << 6U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                               << 0x24U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
            >> 0x1aU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                  >> 0x20U)) << 6U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                   << 0x26U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
            << 8U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                               << 0x26U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                  >> 0x20U)) << 8U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                    >> 0x20U)) >> 0x18U);
    vlSelf->__VdfgTmp_hb51ffe15__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                  << 0x28U));
    vlSelf->__VdfgTmp_hb51ffe15__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                           << 0xaU) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                      << 0x28U) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_hb51ffe15__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                           >> 0x16U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xaU));
    vlSelf->__VdfgTmp_hb51ffe15__0[3U] = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x16U);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                   << 0x2aU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
            << 0xcU) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                 << 0x2aU) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
            >> 0x14U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                  >> 0x20U)) << 0xcU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                    >> 0x20U)) >> 0x14U);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                   << 0x2cU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
            << 0xeU) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                                 << 0x2cU) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
            >> 0x12U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                  >> 0x20U)) << 0xeU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                    >> 0x20U)) >> 0x12U);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                   << 0x2eU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
            << 0x10U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                  << 0x2eU) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
            >> 0x10U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                  >> 0x20U)) << 0x10U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                    >> 0x20U)) >> 0x10U);
    vlSelf->__VdfgTmp_h3e10ca2e__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                                  << 0x30U));
    vlSelf->__VdfgTmp_h3e10ca2e__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                           << 0x12U) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                                      << 0x30U) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_h3e10ca2e__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                           >> 0xeU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x12U));
    vlSelf->__VdfgTmp_h3e10ca2e__0[3U] = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0xeU);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                   << 0x32U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
            << 0x14U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                  << 0x32U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
            >> 0xcU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                 >> 0x20U)) << 0x14U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                    >> 0x20U)) >> 0xcU);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            << 0x1aU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                         << 0x18U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            >> 6U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                               >> 0x20U)) << 0x1aU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                    >> 0x20U)) >> 6U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                   << 0x34U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            << 0x16U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                                  << 0x34U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                    >> 0x20U)) >> 0xaU);
    vlSelf->__VdfgTmp_h741fbf86__0[0U] = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_h741fbf86__0[1U] = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
                                                   >> 0x20U)) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_h741fbf86__0[2U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                          ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]);
    vlSelf->__VdfgTmp_h741fbf86__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_h2342fe44__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_h2342fe44__0[1U] = (((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
                                                    >> 0x20U)) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              | (IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
                                                         >> 0x20U))) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_h2342fe44__0[2U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]);
    vlSelf->__VdfgTmp_h2342fe44__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_h6aeae7bb__0[0U] = (vlSelf->__VdfgTmp_he184c527__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_h6aeae7bb__0[1U] = (vlSelf->__VdfgTmp_he184c527__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_h6aeae7bb__0[2U] = (vlSelf->__VdfgTmp_he184c527__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]));
    vlSelf->__VdfgTmp_h6aeae7bb__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_hf4df91ca__0[0U] = ((vlSelf->__VdfgTmp_he184c527__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              | vlSelf->__VdfgTmp_he184c527__0[0U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_hf4df91ca__0[1U] = ((vlSelf->__VdfgTmp_he184c527__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              | vlSelf->__VdfgTmp_he184c527__0[1U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_hf4df91ca__0[2U] = ((vlSelf->__VdfgTmp_he184c527__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              | vlSelf->__VdfgTmp_he184c527__0[2U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]));
    vlSelf->__VdfgTmp_hf4df91ca__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_h241ca90e__0[0U] = (vlSelf->__VdfgTmp_h2dbf44cc__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_h241ca90e__0[1U] = (vlSelf->__VdfgTmp_h2dbf44cc__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_h241ca90e__0[2U] = (vlSelf->__VdfgTmp_h2dbf44cc__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]));
    vlSelf->__VdfgTmp_h241ca90e__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_h96813928__0[0U] = ((vlSelf->__VdfgTmp_h2dbf44cc__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              | vlSelf->__VdfgTmp_h2dbf44cc__0[0U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_h96813928__0[1U] = ((vlSelf->__VdfgTmp_h2dbf44cc__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              | vlSelf->__VdfgTmp_h2dbf44cc__0[1U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_h96813928__0[2U] = ((vlSelf->__VdfgTmp_h2dbf44cc__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              | vlSelf->__VdfgTmp_h2dbf44cc__0[2U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]));
    vlSelf->__VdfgTmp_h96813928__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_hb3f831ed__0[0U] = ((IData)(vlSelf->__VdfgTmp_h8c534d81__0) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])));
    vlSelf->__VdfgTmp_hb3f831ed__0[1U] = ((IData)((vlSelf->__VdfgTmp_h8c534d81__0 
                                                   >> 0x20U)) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])));
    vlSelf->__VdfgTmp_hb3f831ed__0[2U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]));
    vlSelf->__VdfgTmp_hb3f831ed__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]));
    vlSelf->__VdfgTmp_h9c11e184__0[0U] = (((IData)(vlSelf->__VdfgTmp_h8c534d81__0) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U]) 
                                                | (((IData)(vlSelf->__VdfgTmp_h8c534d81__0) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                                   | (((IData)(vlSelf->__VdfgTmp_h8c534d81__0) 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])))));
    vlSelf->__VdfgTmp_h9c11e184__0[1U] = (((IData)(
                                                   (vlSelf->__VdfgTmp_h8c534d81__0 
                                                    >> 0x20U)) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U]) 
                                                | (((IData)(
                                                            (vlSelf->__VdfgTmp_h8c534d81__0 
                                                             >> 0x20U)) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                                   | (((IData)(
                                                               (vlSelf->__VdfgTmp_h8c534d81__0 
                                                                >> 0x20U)) 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])))));
    vlSelf->__VdfgTmp_h9c11e184__0[2U] = ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])));
    vlSelf->__VdfgTmp_h9c11e184__0[3U] = ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])));
    vlSelf->__VdfgTmp_hc931cd22__0[0U] = (vlSelf->__VdfgTmp_hf622ecd4__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])));
    vlSelf->__VdfgTmp_hc931cd22__0[1U] = (vlSelf->__VdfgTmp_hf622ecd4__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])));
    vlSelf->__VdfgTmp_hc931cd22__0[2U] = (vlSelf->__VdfgTmp_hf622ecd4__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])));
    vlSelf->__VdfgTmp_hc931cd22__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]));
    vlSelf->__VdfgTmp_h23fad587__0[0U] = ((vlSelf->__VdfgTmp_hf622ecd4__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_hf622ecd4__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_hf622ecd4__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])))));
    vlSelf->__VdfgTmp_h23fad587__0[1U] = ((vlSelf->__VdfgTmp_hf622ecd4__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_hf622ecd4__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_hf622ecd4__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])))));
    vlSelf->__VdfgTmp_h23fad587__0[2U] = ((vlSelf->__VdfgTmp_hf622ecd4__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_hf622ecd4__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_hf622ecd4__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])))));
    vlSelf->__VdfgTmp_h23fad587__0[3U] = ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])));
    vlSelf->__VdfgTmp_h89053eb2__0[0U] = (vlSelf->__VdfgTmp_hb51ffe15__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])));
    vlSelf->__VdfgTmp_h89053eb2__0[1U] = (vlSelf->__VdfgTmp_hb51ffe15__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])));
    vlSelf->__VdfgTmp_h89053eb2__0[2U] = (vlSelf->__VdfgTmp_hb51ffe15__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])));
    vlSelf->__VdfgTmp_h89053eb2__0[3U] = (vlSelf->__VdfgTmp_hb51ffe15__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])));
    vlSelf->__VdfgTmp_hbda1c163__0[0U] = ((vlSelf->__VdfgTmp_hb51ffe15__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_hb51ffe15__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_hb51ffe15__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])))));
    vlSelf->__VdfgTmp_hbda1c163__0[1U] = ((vlSelf->__VdfgTmp_hb51ffe15__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_hb51ffe15__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_hb51ffe15__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])))));
    vlSelf->__VdfgTmp_hbda1c163__0[2U] = ((vlSelf->__VdfgTmp_hb51ffe15__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_hb51ffe15__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_hb51ffe15__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])))));
    vlSelf->__VdfgTmp_hbda1c163__0[3U] = ((vlSelf->__VdfgTmp_hb51ffe15__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]) 
                                                | ((vlSelf->__VdfgTmp_hb51ffe15__0[3U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                                   | ((vlSelf->__VdfgTmp_hb51ffe15__0[3U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])))));
    vlSelf->__VdfgTmp_h06c5ce33__0[0U] = (vlSelf->__VdfgTmp_he7d971a6__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])));
    vlSelf->__VdfgTmp_h06c5ce33__0[1U] = (vlSelf->__VdfgTmp_he7d971a6__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])));
    vlSelf->__VdfgTmp_h06c5ce33__0[2U] = (vlSelf->__VdfgTmp_he7d971a6__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])));
    vlSelf->__VdfgTmp_h06c5ce33__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]));
    vlSelf->__VdfgTmp_h9f9d6ce0__0[0U] = ((vlSelf->__VdfgTmp_he7d971a6__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_he7d971a6__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_he7d971a6__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])))));
    vlSelf->__VdfgTmp_h9f9d6ce0__0[1U] = ((vlSelf->__VdfgTmp_he7d971a6__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_he7d971a6__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_he7d971a6__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])))));
    vlSelf->__VdfgTmp_h9f9d6ce0__0[2U] = ((vlSelf->__VdfgTmp_he7d971a6__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_he7d971a6__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_he7d971a6__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])))));
    vlSelf->__VdfgTmp_h9f9d6ce0__0[3U] = ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])));
    vlSelf->__VdfgTmp_h91167317__0[0U] = (vlSelf->__VdfgTmp_h3e10ca2e__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])));
    vlSelf->__VdfgTmp_h91167317__0[1U] = (vlSelf->__VdfgTmp_h3e10ca2e__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])));
    vlSelf->__VdfgTmp_h91167317__0[2U] = (vlSelf->__VdfgTmp_h3e10ca2e__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])));
    vlSelf->__VdfgTmp_h91167317__0[3U] = (vlSelf->__VdfgTmp_h3e10ca2e__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])));
    vlSelf->__VdfgTmp_hb878e59f__0[0U] = ((vlSelf->__VdfgTmp_h3e10ca2e__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_h3e10ca2e__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_h3e10ca2e__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])))));
    vlSelf->__VdfgTmp_hb878e59f__0[1U] = ((vlSelf->__VdfgTmp_h3e10ca2e__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_h3e10ca2e__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_h3e10ca2e__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])))));
    vlSelf->__VdfgTmp_hb878e59f__0[2U] = ((vlSelf->__VdfgTmp_h3e10ca2e__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_h3e10ca2e__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_h3e10ca2e__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])))));
    vlSelf->__VdfgTmp_hb878e59f__0[3U] = ((vlSelf->__VdfgTmp_h3e10ca2e__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]) 
                                                | ((vlSelf->__VdfgTmp_h3e10ca2e__0[3U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                                   | ((vlSelf->__VdfgTmp_h3e10ca2e__0[3U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h741fbf86__0[0U] & vlSelf->__VdfgTmp_h2342fe44__0[0U]) 
           | ((vlSelf->__VdfgTmp_h2342fe44__0[0U] & 
               vlSelf->__VdfgTmp_hb3f831ed__0[0U]) 
              | ((vlSelf->__VdfgTmp_hb3f831ed__0[0U] 
                  & vlSelf->__VdfgTmp_h9c11e184__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h741fbf86__0[0U] 
                     & vlSelf->__VdfgTmp_hb3f831ed__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h741fbf86__0[0U] 
                        | vlSelf->__VdfgTmp_h2342fe44__0[0U]) 
                       & vlSelf->__VdfgTmp_h9c11e184__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h741fbf86__0[1U] & vlSelf->__VdfgTmp_h2342fe44__0[1U]) 
           | ((vlSelf->__VdfgTmp_h2342fe44__0[1U] & 
               vlSelf->__VdfgTmp_hb3f831ed__0[1U]) 
              | ((vlSelf->__VdfgTmp_hb3f831ed__0[1U] 
                  & vlSelf->__VdfgTmp_h9c11e184__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h741fbf86__0[1U] 
                     & vlSelf->__VdfgTmp_hb3f831ed__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h741fbf86__0[1U] 
                        | vlSelf->__VdfgTmp_h2342fe44__0[1U]) 
                       & vlSelf->__VdfgTmp_h9c11e184__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h741fbf86__0[2U] & vlSelf->__VdfgTmp_h2342fe44__0[2U]) 
           | ((vlSelf->__VdfgTmp_h2342fe44__0[2U] & 
               vlSelf->__VdfgTmp_hb3f831ed__0[2U]) 
              | ((vlSelf->__VdfgTmp_hb3f831ed__0[2U] 
                  & vlSelf->__VdfgTmp_h9c11e184__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h741fbf86__0[2U] 
                     & vlSelf->__VdfgTmp_hb3f831ed__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h741fbf86__0[2U] 
                        | vlSelf->__VdfgTmp_h2342fe44__0[2U]) 
                       & vlSelf->__VdfgTmp_h9c11e184__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h741fbf86__0[3U] & vlSelf->__VdfgTmp_h2342fe44__0[3U]) 
           | ((vlSelf->__VdfgTmp_h2342fe44__0[3U] & 
               vlSelf->__VdfgTmp_hb3f831ed__0[3U]) 
              | ((vlSelf->__VdfgTmp_hb3f831ed__0[3U] 
                  & vlSelf->__VdfgTmp_h9c11e184__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h741fbf86__0[3U] 
                     & vlSelf->__VdfgTmp_hb3f831ed__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h741fbf86__0[3U] 
                        | vlSelf->__VdfgTmp_h2342fe44__0[3U]) 
                       & vlSelf->__VdfgTmp_h9c11e184__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h741fbf86__0[0U] ^ (vlSelf->__VdfgTmp_h2342fe44__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hb3f831ed__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9c11e184__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h741fbf86__0[1U] ^ (vlSelf->__VdfgTmp_h2342fe44__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hb3f831ed__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9c11e184__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h741fbf86__0[2U] ^ (vlSelf->__VdfgTmp_h2342fe44__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hb3f831ed__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9c11e184__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h741fbf86__0[3U] ^ (vlSelf->__VdfgTmp_h2342fe44__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hb3f831ed__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9c11e184__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h241ca90e__0[0U] & vlSelf->__VdfgTmp_h96813928__0[0U]) 
           | ((vlSelf->__VdfgTmp_h96813928__0[0U] & 
               vlSelf->__VdfgTmp_hc931cd22__0[0U]) 
              | ((vlSelf->__VdfgTmp_hc931cd22__0[0U] 
                  & vlSelf->__VdfgTmp_h23fad587__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h241ca90e__0[0U] 
                     & vlSelf->__VdfgTmp_hc931cd22__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h241ca90e__0[0U] 
                        | vlSelf->__VdfgTmp_h96813928__0[0U]) 
                       & vlSelf->__VdfgTmp_h23fad587__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h241ca90e__0[1U] & vlSelf->__VdfgTmp_h96813928__0[1U]) 
           | ((vlSelf->__VdfgTmp_h96813928__0[1U] & 
               vlSelf->__VdfgTmp_hc931cd22__0[1U]) 
              | ((vlSelf->__VdfgTmp_hc931cd22__0[1U] 
                  & vlSelf->__VdfgTmp_h23fad587__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h241ca90e__0[1U] 
                     & vlSelf->__VdfgTmp_hc931cd22__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h241ca90e__0[1U] 
                        | vlSelf->__VdfgTmp_h96813928__0[1U]) 
                       & vlSelf->__VdfgTmp_h23fad587__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h241ca90e__0[2U] & vlSelf->__VdfgTmp_h96813928__0[2U]) 
           | ((vlSelf->__VdfgTmp_h96813928__0[2U] & 
               vlSelf->__VdfgTmp_hc931cd22__0[2U]) 
              | ((vlSelf->__VdfgTmp_hc931cd22__0[2U] 
                  & vlSelf->__VdfgTmp_h23fad587__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h241ca90e__0[2U] 
                     & vlSelf->__VdfgTmp_hc931cd22__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h241ca90e__0[2U] 
                        | vlSelf->__VdfgTmp_h96813928__0[2U]) 
                       & vlSelf->__VdfgTmp_h23fad587__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h241ca90e__0[3U] & vlSelf->__VdfgTmp_h96813928__0[3U]) 
           | ((vlSelf->__VdfgTmp_h96813928__0[3U] & 
               vlSelf->__VdfgTmp_hc931cd22__0[3U]) 
              | ((vlSelf->__VdfgTmp_hc931cd22__0[3U] 
                  & vlSelf->__VdfgTmp_h23fad587__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h241ca90e__0[3U] 
                     & vlSelf->__VdfgTmp_hc931cd22__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h241ca90e__0[3U] 
                        | vlSelf->__VdfgTmp_h96813928__0[3U]) 
                       & vlSelf->__VdfgTmp_h23fad587__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h241ca90e__0[0U] ^ (vlSelf->__VdfgTmp_h96813928__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc931cd22__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h23fad587__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h241ca90e__0[1U] ^ (vlSelf->__VdfgTmp_h96813928__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc931cd22__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h23fad587__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h241ca90e__0[2U] ^ (vlSelf->__VdfgTmp_h96813928__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc931cd22__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h23fad587__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h241ca90e__0[3U] ^ (vlSelf->__VdfgTmp_h96813928__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc931cd22__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h23fad587__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h6aeae7bb__0[0U] & vlSelf->__VdfgTmp_hf4df91ca__0[0U]) 
           | ((vlSelf->__VdfgTmp_hf4df91ca__0[0U] & 
               vlSelf->__VdfgTmp_h06c5ce33__0[0U]) 
              | ((vlSelf->__VdfgTmp_h06c5ce33__0[0U] 
                  & vlSelf->__VdfgTmp_h9f9d6ce0__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h6aeae7bb__0[0U] 
                     & vlSelf->__VdfgTmp_h06c5ce33__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h6aeae7bb__0[0U] 
                        | vlSelf->__VdfgTmp_hf4df91ca__0[0U]) 
                       & vlSelf->__VdfgTmp_h9f9d6ce0__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h6aeae7bb__0[1U] & vlSelf->__VdfgTmp_hf4df91ca__0[1U]) 
           | ((vlSelf->__VdfgTmp_hf4df91ca__0[1U] & 
               vlSelf->__VdfgTmp_h06c5ce33__0[1U]) 
              | ((vlSelf->__VdfgTmp_h06c5ce33__0[1U] 
                  & vlSelf->__VdfgTmp_h9f9d6ce0__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h6aeae7bb__0[1U] 
                     & vlSelf->__VdfgTmp_h06c5ce33__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h6aeae7bb__0[1U] 
                        | vlSelf->__VdfgTmp_hf4df91ca__0[1U]) 
                       & vlSelf->__VdfgTmp_h9f9d6ce0__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h6aeae7bb__0[2U] & vlSelf->__VdfgTmp_hf4df91ca__0[2U]) 
           | ((vlSelf->__VdfgTmp_hf4df91ca__0[2U] & 
               vlSelf->__VdfgTmp_h06c5ce33__0[2U]) 
              | ((vlSelf->__VdfgTmp_h06c5ce33__0[2U] 
                  & vlSelf->__VdfgTmp_h9f9d6ce0__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h6aeae7bb__0[2U] 
                     & vlSelf->__VdfgTmp_h06c5ce33__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h6aeae7bb__0[2U] 
                        | vlSelf->__VdfgTmp_hf4df91ca__0[2U]) 
                       & vlSelf->__VdfgTmp_h9f9d6ce0__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h6aeae7bb__0[3U] & vlSelf->__VdfgTmp_hf4df91ca__0[3U]) 
           | ((vlSelf->__VdfgTmp_hf4df91ca__0[3U] & 
               vlSelf->__VdfgTmp_h06c5ce33__0[3U]) 
              | ((vlSelf->__VdfgTmp_h06c5ce33__0[3U] 
                  & vlSelf->__VdfgTmp_h9f9d6ce0__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h6aeae7bb__0[3U] 
                     & vlSelf->__VdfgTmp_h06c5ce33__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h6aeae7bb__0[3U] 
                        | vlSelf->__VdfgTmp_hf4df91ca__0[3U]) 
                       & vlSelf->__VdfgTmp_h9f9d6ce0__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h6aeae7bb__0[0U] ^ (vlSelf->__VdfgTmp_hf4df91ca__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h06c5ce33__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9f9d6ce0__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h6aeae7bb__0[1U] ^ (vlSelf->__VdfgTmp_hf4df91ca__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h06c5ce33__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9f9d6ce0__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h6aeae7bb__0[2U] ^ (vlSelf->__VdfgTmp_hf4df91ca__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h06c5ce33__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9f9d6ce0__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h6aeae7bb__0[3U] ^ (vlSelf->__VdfgTmp_hf4df91ca__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h06c5ce33__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9f9d6ce0__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h89053eb2__0[0U] & vlSelf->__VdfgTmp_hbda1c163__0[0U]) 
           | ((vlSelf->__VdfgTmp_hbda1c163__0[0U] & 
               vlSelf->__VdfgTmp_h91167317__0[0U]) 
              | ((vlSelf->__VdfgTmp_h91167317__0[0U] 
                  & vlSelf->__VdfgTmp_hb878e59f__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h89053eb2__0[0U] 
                     & vlSelf->__VdfgTmp_h91167317__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h89053eb2__0[0U] 
                        | vlSelf->__VdfgTmp_hbda1c163__0[0U]) 
                       & vlSelf->__VdfgTmp_hb878e59f__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h89053eb2__0[1U] & vlSelf->__VdfgTmp_hbda1c163__0[1U]) 
           | ((vlSelf->__VdfgTmp_hbda1c163__0[1U] & 
               vlSelf->__VdfgTmp_h91167317__0[1U]) 
              | ((vlSelf->__VdfgTmp_h91167317__0[1U] 
                  & vlSelf->__VdfgTmp_hb878e59f__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h89053eb2__0[1U] 
                     & vlSelf->__VdfgTmp_h91167317__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h89053eb2__0[1U] 
                        | vlSelf->__VdfgTmp_hbda1c163__0[1U]) 
                       & vlSelf->__VdfgTmp_hb878e59f__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h89053eb2__0[2U] & vlSelf->__VdfgTmp_hbda1c163__0[2U]) 
           | ((vlSelf->__VdfgTmp_hbda1c163__0[2U] & 
               vlSelf->__VdfgTmp_h91167317__0[2U]) 
              | ((vlSelf->__VdfgTmp_h91167317__0[2U] 
                  & vlSelf->__VdfgTmp_hb878e59f__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h89053eb2__0[2U] 
                     & vlSelf->__VdfgTmp_h91167317__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h89053eb2__0[2U] 
                        | vlSelf->__VdfgTmp_hbda1c163__0[2U]) 
                       & vlSelf->__VdfgTmp_hb878e59f__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h89053eb2__0[3U] & vlSelf->__VdfgTmp_hbda1c163__0[3U]) 
           | ((vlSelf->__VdfgTmp_hbda1c163__0[3U] & 
               vlSelf->__VdfgTmp_h91167317__0[3U]) 
              | ((vlSelf->__VdfgTmp_h91167317__0[3U] 
                  & vlSelf->__VdfgTmp_hb878e59f__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h89053eb2__0[3U] 
                     & vlSelf->__VdfgTmp_h91167317__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h89053eb2__0[3U] 
                        | vlSelf->__VdfgTmp_hbda1c163__0[3U]) 
                       & vlSelf->__VdfgTmp_hb878e59f__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h89053eb2__0[0U] ^ (vlSelf->__VdfgTmp_hbda1c163__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h91167317__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hb878e59f__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h89053eb2__0[1U] ^ (vlSelf->__VdfgTmp_hbda1c163__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h91167317__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hb878e59f__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h89053eb2__0[2U] ^ (vlSelf->__VdfgTmp_hbda1c163__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h91167317__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hb878e59f__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h89053eb2__0[3U] ^ (vlSelf->__VdfgTmp_hbda1c163__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h91167317__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hb878e59f__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U])));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_2__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_2__0\n"); );
    // Init
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0);
    VlWide<3>/*95:0*/ __Vtemp_h2578db6d__0;
    VlWide<3>/*95:0*/ __Vtemp_hd3d55378__0;
    VlWide<3>/*95:0*/ __Vtemp_h66679482__0;
    VlWide<3>/*95:0*/ __Vtemp_hba4a56f5__0;
    VlWide<3>/*95:0*/ __Vtemp_h5ce10a39__0;
    VlWide<3>/*95:0*/ __Vtemp_h91c76526__0;
    VlWide<3>/*95:0*/ __Vtemp_hb7b763a1__0;
    VlWide<3>/*95:0*/ __Vtemp_h5baa320b__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f83c2a8__0;
    VlWide<3>/*95:0*/ __Vtemp_he6fd6e25__0;
    VlWide<3>/*95:0*/ __Vtemp_hd3082310__0;
    VlWide<3>/*95:0*/ __Vtemp_hea80368d__0;
    // Body
    __Vtemp_h2578db6d__0[0U] = (IData)((0xffffffffffffffULL 
                                        & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))));
    __Vtemp_h2578db6d__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))) 
                                        >> 0x20U));
    __Vtemp_h2578db6d__0[2U] = 0U;
    __Vtemp_hd3d55378__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)) 
                                              * (0xffffffffffffffULL 
                                                 & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))))))));
    __Vtemp_hd3d55378__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)) 
                                               * (0xffffffffffffffULL 
                                                  & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))))))) 
                                        >> 0x20U));
    __Vtemp_hd3d55378__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h66679482__0, __Vtemp_h2578db6d__0, __Vtemp_hd3d55378__0);
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U] 
        = __Vtemp_h66679482__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U] 
        = __Vtemp_h66679482__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U] 
        = (0xfffffU & __Vtemp_h66679482__0[2U]);
    VL_SHIFTR_WWI(84,84,32, __Vtemp_hba4a56f5__0, vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full, 0x1cU);
    __Vtemp_h5ce10a39__0[0U] = __Vtemp_hba4a56f5__0[0U];
    __Vtemp_h5ce10a39__0[1U] = __Vtemp_hba4a56f5__0[1U];
    __Vtemp_h5ce10a39__0[2U] = (0xfffffU & __Vtemp_hba4a56f5__0[2U]);
    __Vtemp_h91c76526__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)) 
                                              * (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                          >> 0x1cU))))))));
    __Vtemp_h91c76526__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)) 
                                               * (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                           >> 0x1cU))))))) 
                                        >> 0x20U));
    __Vtemp_h91c76526__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_hb7b763a1__0, __Vtemp_h5ce10a39__0, __Vtemp_h91c76526__0);
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U] 
        = __Vtemp_hb7b763a1__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U] 
        = __Vtemp_hb7b763a1__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U] 
        = (0xfffffU & __Vtemp_hb7b763a1__0[2U]);
    VL_SHIFTR_WWI(84,84,32, __Vtemp_h5baa320b__0, vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full, 0x1cU);
    __Vtemp_h5f83c2a8__0[0U] = __Vtemp_h5baa320b__0[0U];
    __Vtemp_h5f83c2a8__0[1U] = __Vtemp_h5baa320b__0[1U];
    __Vtemp_h5f83c2a8__0[2U] = (0xfffffU & __Vtemp_h5baa320b__0[2U]);
    __Vtemp_he6fd6e25__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)) 
                                              * (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                          >> 0x1cU))))))));
    __Vtemp_he6fd6e25__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)) 
                                               * (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                           >> 0x1cU))))))) 
                                        >> 0x20U));
    __Vtemp_he6fd6e25__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_hd3082310__0, __Vtemp_h5f83c2a8__0, __Vtemp_he6fd6e25__0);
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
        = __Vtemp_hd3082310__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
        = __Vtemp_hd3082310__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
        = (0xfffffU & __Vtemp_hd3082310__0[2U]);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x20000000U == (0x30000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000U == (0x3000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000U == (0xc0000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800U == (0xc00U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000U == (0x3000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000U == (0xc000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (1U & ((~ vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]) 
                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                    >> 1U)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000U == (0xc000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000U == (0x30000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200U == (0x300U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((8U == (0xcU & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20U == (0x30U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80U == (0xc0U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000U == (0x30000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000U == (0xc0000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000U == (0x300000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000U == (0xc0000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (1U & ((~ vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]) 
                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                    >> 1U)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((8U == (0xcU & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20U == (0x30U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80U == (0xc0U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200U == (0x300U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800U == (0xc00U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000U == (0x3000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000U == (0xc000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000U == (0x30000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000U == (0xc00000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000U == (0xc0000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                  >> 0x1dU) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000U == (0x2800000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000U == (0xa0000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800U == (0xa00U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000U == (0x2800U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000U == (0xa000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = (1U & (((~ (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                      >> 0x1fU)) & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 1U)) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000U == (0xa000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000U == (0x28000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200U == (0x280U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (8U == (0xaU & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20U == (0x28U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80U == (0xa0U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000U == (0x28000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000U == (0xa0000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000U == (0x280000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000U == (0xa0000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg 
        = (1U & (((~ (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                      >> 0x1fU)) & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                    >> 1U)) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (8U == (0xaU & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20U == (0x28U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80U == (0xa0U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200U == (0x280U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800U == (0xa00U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000U == (0x2800U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000U == (0xa000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000U == (0x28000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000U == (0xa00000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000U == (0xa0000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                                   ^ ((0x10000000U 
                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40000000U 
                                                      == 
                                                      (0x60000000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U]))) 
                                             | (IData)(
                                                       (0x20000000U 
                                                        == 
                                                        (0x60000000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60000000U 
                                                          == 
                                                          (0xe0000000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                      >> 0x1dU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x400U 
                                                      == 
                                                      (0x600U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x600U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x600U 
                                                          == 
                                                          (0xe00U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 9U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x1000U 
                                                      == 
                                                      (0x1800U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x1800U 
                                                          == 
                                                          (0x3800U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xbU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x4000000U 
                                                      == 
                                                      (0x6000000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x2000000U 
                                                        == 
                                                        (0x6000000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x6000000U 
                                                          == 
                                                          (0xe000000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x19U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & (((~ (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                  >> 0x1fU)) 
                                              & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]) 
                                             | ((~ 
                                                 vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]) 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                   >> 0x1fU))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & (((
                                                   vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                   >> 0x1fU) 
                                                  & (1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                      >> 0x1fU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x4000U 
                                                      == 
                                                      (0x6000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x2000U 
                                                        == 
                                                        (0x6000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x6000U 
                                                          == 
                                                          (0xe000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xdU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10000000U 
                                                      == 
                                                      (0x18000000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x8000000U 
                                                        == 
                                                        (0x18000000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x18000000U 
                                                          == 
                                                          (0x38000000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1bU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x100U 
                                                      == 
                                                      (0x180U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x80U 
                                                        == 
                                                        (0x180U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x180U 
                                                          == 
                                                          (0x380U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 7U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (4U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (6U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (6U 
                                                          == 
                                                          (0xeU 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10U 
                                                      == 
                                                      (0x18U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (8U 
                                                        == 
                                                        (0x18U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x18U 
                                                          == 
                                                          (0x38U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 3U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40U 
                                                      == 
                                                      (0x60U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60U 
                                                          == 
                                                          (0xe0U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 5U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10000U 
                                                      == 
                                                      (0x18000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x18000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x18000U 
                                                          == 
                                                          (0x38000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xfU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40000U 
                                                      == 
                                                      (0x60000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x20000U 
                                                        == 
                                                        (0x60000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60000U 
                                                          == 
                                                          (0xe0000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x11U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x100000U 
                                                      == 
                                                      (0x180000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x80000U 
                                                        == 
                                                        (0x180000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x180000U 
                                                          == 
                                                          (0x380000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x13U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40000000U 
                                                      == 
                                                      (0x60000000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x20000000U 
                                                        == 
                                                        (0x60000000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60000000U 
                                                          == 
                                                          (0xe0000000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1dU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & (((~ (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 0x1fU)) 
                                              & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]) 
                                             | ((~ 
                                                 vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]) 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x1fU))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & (((
                                                   vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x1fU) 
                                                  & (1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1fU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (4U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (6U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (6U 
                                                          == 
                                                          (0xeU 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10U 
                                                      == 
                                                      (0x18U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (8U 
                                                        == 
                                                        (0x18U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x18U 
                                                          == 
                                                          (0x38U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 3U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40U 
                                                      == 
                                                      (0x60U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60U 
                                                          == 
                                                          (0xe0U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 5U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x100U 
                                                      == 
                                                      (0x180U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x80U 
                                                        == 
                                                        (0x180U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x180U 
                                                          == 
                                                          (0x380U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 7U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x400U 
                                                      == 
                                                      (0x600U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x600U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x600U 
                                                          == 
                                                          (0xe00U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 9U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x1000U 
                                                      == 
                                                      (0x1800U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x1800U 
                                                          == 
                                                          (0x3800U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xbU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x4000U 
                                                      == 
                                                      (0x6000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x2000U 
                                                        == 
                                                        (0x6000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x6000U 
                                                          == 
                                                          (0xe000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xdU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10000U 
                                                      == 
                                                      (0x18000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x18000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x18000U 
                                                          == 
                                                          (0x38000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xfU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    __Vtemp_hea80368d__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x1000000U 
                                                             == 
                                                             (0x1800000U 
                                                              & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                    | (IData)(
                                                              (0x800000U 
                                                               == 
                                                               (0x1800000U 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                 ? 
                                                ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                 << 0x1cU)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x1800000U 
                                                              == 
                                                              (0x3800000U 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                     | ((~ 
                                                         (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                          >> 0x17U)) 
                                                        & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                  << 0x1dU)
                                                  : 0ULL))))) 
                                 >> 4U) | ((IData)(
                                                   ((0x1ffffffffffffffULL 
                                                     & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                                        ^ 
                                                        ((1U 
                                                          & ((IData)(
                                                                     (0x1000000U 
                                                                      == 
                                                                      (0x1800000U 
                                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                             | (IData)(
                                                                       (0x800000U 
                                                                        == 
                                                                        (0x1800000U 
                                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                          ? 
                                                         ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                          << 0x1cU)
                                                          : 
                                                         ((1U 
                                                           & ((IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x3800000U 
                                                                        & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                              | ((~ 
                                                                  (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                   >> 0x17U)) 
                                                                 & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                           ? 
                                                          ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                           << 0x1dU)
                                                           : 0ULL)))) 
                                                    >> 0x20U)) 
                                           << 0x1cU));
    vlSelf->__VdfgTmp_h2dbf44cc__0[0U] = (((IData)(
                                                   (0x1ffffffffffffffULL 
                                                    & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                                       ^ 
                                                       ((1U 
                                                         & ((IData)(
                                                                    (0x1000000U 
                                                                     == 
                                                                     (0x1800000U 
                                                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                            | (IData)(
                                                                      (0x800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                         ? 
                                                        ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                         << 0x1cU)
                                                         : 
                                                        ((1U 
                                                          & ((IData)(
                                                                     (0x1800000U 
                                                                      == 
                                                                      (0x3800000U 
                                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                             | ((~ 
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                  >> 0x17U)) 
                                                                & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                          ? 
                                                         ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                          << 0x1dU)
                                                          : 0ULL))))) 
                                           << 0x1cU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                             << 0x1aU));
    vlSelf->__VdfgTmp_h2dbf44cc__0[1U] = __Vtemp_hea80368d__0[1U];
    vlSelf->__VdfgTmp_h2dbf44cc__0[2U] = ((IData)((
                                                   (0x1ffffffffffffffULL 
                                                    & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                                       ^ 
                                                       ((1U 
                                                         & ((IData)(
                                                                    (0x1000000U 
                                                                     == 
                                                                     (0x1800000U 
                                                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                            | (IData)(
                                                                      (0x800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                         ? 
                                                        ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                         << 0x1cU)
                                                         : 
                                                        ((1U 
                                                          & ((IData)(
                                                                     (0x1800000U 
                                                                      == 
                                                                      (0x3800000U 
                                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                             | ((~ 
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                  >> 0x17U)) 
                                                                & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                          ? 
                                                         ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                          << 0x1dU)
                                                          : 0ULL)))) 
                                                   >> 0x20U)) 
                                          >> 4U);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x400000U 
                                                      == 
                                                      (0x600000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x200000U 
                                                        == 
                                                        (0x600000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x600000U 
                                                          == 
                                                          (0xe00000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x15U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                   << 0x36U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U] 
        = (((IData)(((0x80000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])
                      ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                         << 0x1cU) : 0ULL)) << 0x18U) 
           | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                       << 0x36U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U] 
        = (((IData)(((0x80000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])
                      ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                         << 0x1cU) : 0ULL)) >> 8U) 
           | ((IData)((((0x80000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])
                         ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                            << 0x1cU) : 0ULL) >> 0x20U)) 
              << 0x18U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U] 
        = ((IData)((((0x80000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])
                      ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                         << 0x1cU) : 0ULL) >> 0x20U)) 
           >> 8U);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40000U 
                                                      == 
                                                      (0x60000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x20000U 
                                                        == 
                                                        (0x60000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60000U 
                                                          == 
                                                          (0xe0000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x11U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (IData)(((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                    << 2U) | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (IData)((((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                     << 2U) | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                   >> 0x20U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    vlSelf->__VdfgTmp_he184c527__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                           << 0xeU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_he184c527__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                           >> 0x12U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xeU));
    vlSelf->__VdfgTmp_he184c527__0[2U] = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x12U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
            << 0x10U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                         << 0xeU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
            >> 0x10U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                  >> 0x20U)) << 0x10U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                    >> 0x20U)) >> 0x10U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
            << 0x1eU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                         << 0x1cU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
            >> 2U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                               >> 0x20U)) << 0x1eU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                    >> 0x20U)) >> 2U);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (IData)(((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                    << 4U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 2U)))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (IData)((((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                     << 4U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                               << 2U)))) 
                   >> 0x20U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            << 0x12U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                         << 0x10U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                    >> 0x20U)) >> 0xeU);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
           << 0x1eU);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = (IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                   >> 0x20U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
            << 0xcU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                        << 0xaU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
            >> 0x14U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                  >> 0x20U)) << 0xcU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                    >> 0x20U)) >> 0x14U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U] = 0U;
    vlSelf->__VdfgTmp_h8c534d81__0 = ((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            << 8U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                      << 6U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                  >> 0x20U)) << 8U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                    >> 0x20U)) >> 0x18U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            << 0xaU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                        << 8U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            >> 0x16U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                  >> 0x20U)) << 0xaU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                    >> 0x20U)) >> 0x16U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    vlSelf->__VdfgTmp_he7d971a6__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                           << 0x14U) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                             << 0x12U));
    vlSelf->__VdfgTmp_he7d971a6__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                           >> 0xcU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    vlSelf->__VdfgTmp_he7d971a6__0[2U] = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0xcU);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
            << 0x16U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                         << 0x14U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                    >> 0x20U)) >> 0xaU);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            << 0x18U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                         << 0x16U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            >> 8U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                               >> 0x20U)) << 0x18U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                    >> 0x20U)) >> 8U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    vlSelf->__VdfgTmp_hf622ecd4__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                  << 0x20U));
    vlSelf->__VdfgTmp_hf622ecd4__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                           << 2U) | (IData)(
                                                            (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                              << 0x20U) 
                                                             >> 0x20U)));
    vlSelf->__VdfgTmp_hf622ecd4__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                           >> 0x1eU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 2U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                   << 0x22U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
            << 4U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                               << 0x22U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
            >> 0x1cU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                  >> 0x20U)) << 4U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                   << 0x24U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
            << 6U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                               << 0x24U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
            >> 0x1aU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                  >> 0x20U)) << 6U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                   << 0x26U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
            << 8U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                               << 0x26U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                  >> 0x20U)) << 8U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                    >> 0x20U)) >> 0x18U);
    vlSelf->__VdfgTmp_hb51ffe15__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                  << 0x28U));
    vlSelf->__VdfgTmp_hb51ffe15__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                           << 0xaU) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                      << 0x28U) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_hb51ffe15__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                           >> 0x16U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xaU));
    vlSelf->__VdfgTmp_hb51ffe15__0[3U] = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x16U);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                   << 0x2aU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
            << 0xcU) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                 << 0x2aU) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
            >> 0x14U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                  >> 0x20U)) << 0xcU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                    >> 0x20U)) >> 0x14U);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                   << 0x2cU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
            << 0xeU) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                                 << 0x2cU) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
            >> 0x12U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                  >> 0x20U)) << 0xeU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                    >> 0x20U)) >> 0x12U);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                   << 0x2eU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
            << 0x10U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                  << 0x2eU) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
            >> 0x10U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                  >> 0x20U)) << 0x10U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                    >> 0x20U)) >> 0x10U);
    vlSelf->__VdfgTmp_h3e10ca2e__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                                  << 0x30U));
    vlSelf->__VdfgTmp_h3e10ca2e__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                           << 0x12U) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                                      << 0x30U) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_h3e10ca2e__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                           >> 0xeU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x12U));
    vlSelf->__VdfgTmp_h3e10ca2e__0[3U] = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0xeU);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                   << 0x32U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
            << 0x14U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                  << 0x32U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
            >> 0xcU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                 >> 0x20U)) << 0x14U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                    >> 0x20U)) >> 0xcU);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            << 0x1aU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                         << 0x18U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            >> 6U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                               >> 0x20U)) << 0x1aU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                    >> 0x20U)) >> 6U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                   << 0x34U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            << 0x16U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                                  << 0x34U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                    >> 0x20U)) >> 0xaU);
    vlSelf->__VdfgTmp_h741fbf86__0[0U] = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_h741fbf86__0[1U] = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
                                                   >> 0x20U)) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_h741fbf86__0[2U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                          ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]);
    vlSelf->__VdfgTmp_h741fbf86__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_h2342fe44__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_h2342fe44__0[1U] = (((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
                                                    >> 0x20U)) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              | (IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
                                                         >> 0x20U))) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_h2342fe44__0[2U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]);
    vlSelf->__VdfgTmp_h2342fe44__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_h6aeae7bb__0[0U] = (vlSelf->__VdfgTmp_he184c527__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_h6aeae7bb__0[1U] = (vlSelf->__VdfgTmp_he184c527__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_h6aeae7bb__0[2U] = (vlSelf->__VdfgTmp_he184c527__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]));
    vlSelf->__VdfgTmp_h6aeae7bb__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_hf4df91ca__0[0U] = ((vlSelf->__VdfgTmp_he184c527__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              | vlSelf->__VdfgTmp_he184c527__0[0U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_hf4df91ca__0[1U] = ((vlSelf->__VdfgTmp_he184c527__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              | vlSelf->__VdfgTmp_he184c527__0[1U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_hf4df91ca__0[2U] = ((vlSelf->__VdfgTmp_he184c527__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              | vlSelf->__VdfgTmp_he184c527__0[2U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]));
    vlSelf->__VdfgTmp_hf4df91ca__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_h241ca90e__0[0U] = (vlSelf->__VdfgTmp_h2dbf44cc__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_h241ca90e__0[1U] = (vlSelf->__VdfgTmp_h2dbf44cc__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_h241ca90e__0[2U] = (vlSelf->__VdfgTmp_h2dbf44cc__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]));
    vlSelf->__VdfgTmp_h241ca90e__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_h96813928__0[0U] = ((vlSelf->__VdfgTmp_h2dbf44cc__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              | vlSelf->__VdfgTmp_h2dbf44cc__0[0U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_h96813928__0[1U] = ((vlSelf->__VdfgTmp_h2dbf44cc__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              | vlSelf->__VdfgTmp_h2dbf44cc__0[1U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_h96813928__0[2U] = ((vlSelf->__VdfgTmp_h2dbf44cc__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              | vlSelf->__VdfgTmp_h2dbf44cc__0[2U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]));
    vlSelf->__VdfgTmp_h96813928__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_hb3f831ed__0[0U] = ((IData)(vlSelf->__VdfgTmp_h8c534d81__0) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])));
    vlSelf->__VdfgTmp_hb3f831ed__0[1U] = ((IData)((vlSelf->__VdfgTmp_h8c534d81__0 
                                                   >> 0x20U)) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])));
    vlSelf->__VdfgTmp_hb3f831ed__0[2U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]));
    vlSelf->__VdfgTmp_hb3f831ed__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]));
    vlSelf->__VdfgTmp_h9c11e184__0[0U] = (((IData)(vlSelf->__VdfgTmp_h8c534d81__0) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U]) 
                                                | (((IData)(vlSelf->__VdfgTmp_h8c534d81__0) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                                   | (((IData)(vlSelf->__VdfgTmp_h8c534d81__0) 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])))));
    vlSelf->__VdfgTmp_h9c11e184__0[1U] = (((IData)(
                                                   (vlSelf->__VdfgTmp_h8c534d81__0 
                                                    >> 0x20U)) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U]) 
                                                | (((IData)(
                                                            (vlSelf->__VdfgTmp_h8c534d81__0 
                                                             >> 0x20U)) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                                   | (((IData)(
                                                               (vlSelf->__VdfgTmp_h8c534d81__0 
                                                                >> 0x20U)) 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])))));
    vlSelf->__VdfgTmp_h9c11e184__0[2U] = ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])));
    vlSelf->__VdfgTmp_h9c11e184__0[3U] = ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])));
    vlSelf->__VdfgTmp_hc931cd22__0[0U] = (vlSelf->__VdfgTmp_hf622ecd4__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])));
    vlSelf->__VdfgTmp_hc931cd22__0[1U] = (vlSelf->__VdfgTmp_hf622ecd4__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])));
    vlSelf->__VdfgTmp_hc931cd22__0[2U] = (vlSelf->__VdfgTmp_hf622ecd4__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])));
    vlSelf->__VdfgTmp_hc931cd22__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]));
    vlSelf->__VdfgTmp_h23fad587__0[0U] = ((vlSelf->__VdfgTmp_hf622ecd4__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_hf622ecd4__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_hf622ecd4__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])))));
    vlSelf->__VdfgTmp_h23fad587__0[1U] = ((vlSelf->__VdfgTmp_hf622ecd4__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_hf622ecd4__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_hf622ecd4__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])))));
    vlSelf->__VdfgTmp_h23fad587__0[2U] = ((vlSelf->__VdfgTmp_hf622ecd4__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_hf622ecd4__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_hf622ecd4__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])))));
    vlSelf->__VdfgTmp_h23fad587__0[3U] = ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])));
    vlSelf->__VdfgTmp_h89053eb2__0[0U] = (vlSelf->__VdfgTmp_hb51ffe15__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])));
    vlSelf->__VdfgTmp_h89053eb2__0[1U] = (vlSelf->__VdfgTmp_hb51ffe15__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])));
    vlSelf->__VdfgTmp_h89053eb2__0[2U] = (vlSelf->__VdfgTmp_hb51ffe15__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])));
    vlSelf->__VdfgTmp_h89053eb2__0[3U] = (vlSelf->__VdfgTmp_hb51ffe15__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])));
    vlSelf->__VdfgTmp_hbda1c163__0[0U] = ((vlSelf->__VdfgTmp_hb51ffe15__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_hb51ffe15__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_hb51ffe15__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])))));
    vlSelf->__VdfgTmp_hbda1c163__0[1U] = ((vlSelf->__VdfgTmp_hb51ffe15__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_hb51ffe15__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_hb51ffe15__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])))));
    vlSelf->__VdfgTmp_hbda1c163__0[2U] = ((vlSelf->__VdfgTmp_hb51ffe15__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_hb51ffe15__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_hb51ffe15__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])))));
    vlSelf->__VdfgTmp_hbda1c163__0[3U] = ((vlSelf->__VdfgTmp_hb51ffe15__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]) 
                                                | ((vlSelf->__VdfgTmp_hb51ffe15__0[3U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                                   | ((vlSelf->__VdfgTmp_hb51ffe15__0[3U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])))));
    vlSelf->__VdfgTmp_h06c5ce33__0[0U] = (vlSelf->__VdfgTmp_he7d971a6__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])));
    vlSelf->__VdfgTmp_h06c5ce33__0[1U] = (vlSelf->__VdfgTmp_he7d971a6__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])));
    vlSelf->__VdfgTmp_h06c5ce33__0[2U] = (vlSelf->__VdfgTmp_he7d971a6__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])));
    vlSelf->__VdfgTmp_h06c5ce33__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]));
    vlSelf->__VdfgTmp_h9f9d6ce0__0[0U] = ((vlSelf->__VdfgTmp_he7d971a6__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_he7d971a6__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_he7d971a6__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])))));
    vlSelf->__VdfgTmp_h9f9d6ce0__0[1U] = ((vlSelf->__VdfgTmp_he7d971a6__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_he7d971a6__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_he7d971a6__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])))));
    vlSelf->__VdfgTmp_h9f9d6ce0__0[2U] = ((vlSelf->__VdfgTmp_he7d971a6__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_he7d971a6__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_he7d971a6__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])))));
    vlSelf->__VdfgTmp_h9f9d6ce0__0[3U] = ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])));
    vlSelf->__VdfgTmp_h91167317__0[0U] = (vlSelf->__VdfgTmp_h3e10ca2e__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])));
    vlSelf->__VdfgTmp_h91167317__0[1U] = (vlSelf->__VdfgTmp_h3e10ca2e__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])));
    vlSelf->__VdfgTmp_h91167317__0[2U] = (vlSelf->__VdfgTmp_h3e10ca2e__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])));
    vlSelf->__VdfgTmp_h91167317__0[3U] = (vlSelf->__VdfgTmp_h3e10ca2e__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])));
    vlSelf->__VdfgTmp_hb878e59f__0[0U] = ((vlSelf->__VdfgTmp_h3e10ca2e__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_h3e10ca2e__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_h3e10ca2e__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])))));
    vlSelf->__VdfgTmp_hb878e59f__0[1U] = ((vlSelf->__VdfgTmp_h3e10ca2e__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_h3e10ca2e__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_h3e10ca2e__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])))));
    vlSelf->__VdfgTmp_hb878e59f__0[2U] = ((vlSelf->__VdfgTmp_h3e10ca2e__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_h3e10ca2e__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_h3e10ca2e__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])))));
    vlSelf->__VdfgTmp_hb878e59f__0[3U] = ((vlSelf->__VdfgTmp_h3e10ca2e__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]) 
                                                | ((vlSelf->__VdfgTmp_h3e10ca2e__0[3U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                                   | ((vlSelf->__VdfgTmp_h3e10ca2e__0[3U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h741fbf86__0[0U] & vlSelf->__VdfgTmp_h2342fe44__0[0U]) 
           | ((vlSelf->__VdfgTmp_h2342fe44__0[0U] & 
               vlSelf->__VdfgTmp_hb3f831ed__0[0U]) 
              | ((vlSelf->__VdfgTmp_hb3f831ed__0[0U] 
                  & vlSelf->__VdfgTmp_h9c11e184__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h741fbf86__0[0U] 
                     & vlSelf->__VdfgTmp_hb3f831ed__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h741fbf86__0[0U] 
                        | vlSelf->__VdfgTmp_h2342fe44__0[0U]) 
                       & vlSelf->__VdfgTmp_h9c11e184__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h741fbf86__0[1U] & vlSelf->__VdfgTmp_h2342fe44__0[1U]) 
           | ((vlSelf->__VdfgTmp_h2342fe44__0[1U] & 
               vlSelf->__VdfgTmp_hb3f831ed__0[1U]) 
              | ((vlSelf->__VdfgTmp_hb3f831ed__0[1U] 
                  & vlSelf->__VdfgTmp_h9c11e184__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h741fbf86__0[1U] 
                     & vlSelf->__VdfgTmp_hb3f831ed__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h741fbf86__0[1U] 
                        | vlSelf->__VdfgTmp_h2342fe44__0[1U]) 
                       & vlSelf->__VdfgTmp_h9c11e184__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h741fbf86__0[2U] & vlSelf->__VdfgTmp_h2342fe44__0[2U]) 
           | ((vlSelf->__VdfgTmp_h2342fe44__0[2U] & 
               vlSelf->__VdfgTmp_hb3f831ed__0[2U]) 
              | ((vlSelf->__VdfgTmp_hb3f831ed__0[2U] 
                  & vlSelf->__VdfgTmp_h9c11e184__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h741fbf86__0[2U] 
                     & vlSelf->__VdfgTmp_hb3f831ed__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h741fbf86__0[2U] 
                        | vlSelf->__VdfgTmp_h2342fe44__0[2U]) 
                       & vlSelf->__VdfgTmp_h9c11e184__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h741fbf86__0[3U] & vlSelf->__VdfgTmp_h2342fe44__0[3U]) 
           | ((vlSelf->__VdfgTmp_h2342fe44__0[3U] & 
               vlSelf->__VdfgTmp_hb3f831ed__0[3U]) 
              | ((vlSelf->__VdfgTmp_hb3f831ed__0[3U] 
                  & vlSelf->__VdfgTmp_h9c11e184__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h741fbf86__0[3U] 
                     & vlSelf->__VdfgTmp_hb3f831ed__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h741fbf86__0[3U] 
                        | vlSelf->__VdfgTmp_h2342fe44__0[3U]) 
                       & vlSelf->__VdfgTmp_h9c11e184__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h741fbf86__0[0U] ^ (vlSelf->__VdfgTmp_h2342fe44__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hb3f831ed__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9c11e184__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h741fbf86__0[1U] ^ (vlSelf->__VdfgTmp_h2342fe44__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hb3f831ed__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9c11e184__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h741fbf86__0[2U] ^ (vlSelf->__VdfgTmp_h2342fe44__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hb3f831ed__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9c11e184__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h741fbf86__0[3U] ^ (vlSelf->__VdfgTmp_h2342fe44__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hb3f831ed__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9c11e184__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h241ca90e__0[0U] & vlSelf->__VdfgTmp_h96813928__0[0U]) 
           | ((vlSelf->__VdfgTmp_h96813928__0[0U] & 
               vlSelf->__VdfgTmp_hc931cd22__0[0U]) 
              | ((vlSelf->__VdfgTmp_hc931cd22__0[0U] 
                  & vlSelf->__VdfgTmp_h23fad587__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h241ca90e__0[0U] 
                     & vlSelf->__VdfgTmp_hc931cd22__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h241ca90e__0[0U] 
                        | vlSelf->__VdfgTmp_h96813928__0[0U]) 
                       & vlSelf->__VdfgTmp_h23fad587__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h241ca90e__0[1U] & vlSelf->__VdfgTmp_h96813928__0[1U]) 
           | ((vlSelf->__VdfgTmp_h96813928__0[1U] & 
               vlSelf->__VdfgTmp_hc931cd22__0[1U]) 
              | ((vlSelf->__VdfgTmp_hc931cd22__0[1U] 
                  & vlSelf->__VdfgTmp_h23fad587__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h241ca90e__0[1U] 
                     & vlSelf->__VdfgTmp_hc931cd22__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h241ca90e__0[1U] 
                        | vlSelf->__VdfgTmp_h96813928__0[1U]) 
                       & vlSelf->__VdfgTmp_h23fad587__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h241ca90e__0[2U] & vlSelf->__VdfgTmp_h96813928__0[2U]) 
           | ((vlSelf->__VdfgTmp_h96813928__0[2U] & 
               vlSelf->__VdfgTmp_hc931cd22__0[2U]) 
              | ((vlSelf->__VdfgTmp_hc931cd22__0[2U] 
                  & vlSelf->__VdfgTmp_h23fad587__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h241ca90e__0[2U] 
                     & vlSelf->__VdfgTmp_hc931cd22__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h241ca90e__0[2U] 
                        | vlSelf->__VdfgTmp_h96813928__0[2U]) 
                       & vlSelf->__VdfgTmp_h23fad587__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h241ca90e__0[3U] & vlSelf->__VdfgTmp_h96813928__0[3U]) 
           | ((vlSelf->__VdfgTmp_h96813928__0[3U] & 
               vlSelf->__VdfgTmp_hc931cd22__0[3U]) 
              | ((vlSelf->__VdfgTmp_hc931cd22__0[3U] 
                  & vlSelf->__VdfgTmp_h23fad587__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h241ca90e__0[3U] 
                     & vlSelf->__VdfgTmp_hc931cd22__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h241ca90e__0[3U] 
                        | vlSelf->__VdfgTmp_h96813928__0[3U]) 
                       & vlSelf->__VdfgTmp_h23fad587__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h241ca90e__0[0U] ^ (vlSelf->__VdfgTmp_h96813928__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc931cd22__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h23fad587__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h241ca90e__0[1U] ^ (vlSelf->__VdfgTmp_h96813928__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc931cd22__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h23fad587__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h241ca90e__0[2U] ^ (vlSelf->__VdfgTmp_h96813928__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc931cd22__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h23fad587__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h241ca90e__0[3U] ^ (vlSelf->__VdfgTmp_h96813928__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc931cd22__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h23fad587__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h6aeae7bb__0[0U] & vlSelf->__VdfgTmp_hf4df91ca__0[0U]) 
           | ((vlSelf->__VdfgTmp_hf4df91ca__0[0U] & 
               vlSelf->__VdfgTmp_h06c5ce33__0[0U]) 
              | ((vlSelf->__VdfgTmp_h06c5ce33__0[0U] 
                  & vlSelf->__VdfgTmp_h9f9d6ce0__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h6aeae7bb__0[0U] 
                     & vlSelf->__VdfgTmp_h06c5ce33__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h6aeae7bb__0[0U] 
                        | vlSelf->__VdfgTmp_hf4df91ca__0[0U]) 
                       & vlSelf->__VdfgTmp_h9f9d6ce0__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h6aeae7bb__0[1U] & vlSelf->__VdfgTmp_hf4df91ca__0[1U]) 
           | ((vlSelf->__VdfgTmp_hf4df91ca__0[1U] & 
               vlSelf->__VdfgTmp_h06c5ce33__0[1U]) 
              | ((vlSelf->__VdfgTmp_h06c5ce33__0[1U] 
                  & vlSelf->__VdfgTmp_h9f9d6ce0__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h6aeae7bb__0[1U] 
                     & vlSelf->__VdfgTmp_h06c5ce33__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h6aeae7bb__0[1U] 
                        | vlSelf->__VdfgTmp_hf4df91ca__0[1U]) 
                       & vlSelf->__VdfgTmp_h9f9d6ce0__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h6aeae7bb__0[2U] & vlSelf->__VdfgTmp_hf4df91ca__0[2U]) 
           | ((vlSelf->__VdfgTmp_hf4df91ca__0[2U] & 
               vlSelf->__VdfgTmp_h06c5ce33__0[2U]) 
              | ((vlSelf->__VdfgTmp_h06c5ce33__0[2U] 
                  & vlSelf->__VdfgTmp_h9f9d6ce0__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h6aeae7bb__0[2U] 
                     & vlSelf->__VdfgTmp_h06c5ce33__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h6aeae7bb__0[2U] 
                        | vlSelf->__VdfgTmp_hf4df91ca__0[2U]) 
                       & vlSelf->__VdfgTmp_h9f9d6ce0__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h6aeae7bb__0[3U] & vlSelf->__VdfgTmp_hf4df91ca__0[3U]) 
           | ((vlSelf->__VdfgTmp_hf4df91ca__0[3U] & 
               vlSelf->__VdfgTmp_h06c5ce33__0[3U]) 
              | ((vlSelf->__VdfgTmp_h06c5ce33__0[3U] 
                  & vlSelf->__VdfgTmp_h9f9d6ce0__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h6aeae7bb__0[3U] 
                     & vlSelf->__VdfgTmp_h06c5ce33__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h6aeae7bb__0[3U] 
                        | vlSelf->__VdfgTmp_hf4df91ca__0[3U]) 
                       & vlSelf->__VdfgTmp_h9f9d6ce0__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h6aeae7bb__0[0U] ^ (vlSelf->__VdfgTmp_hf4df91ca__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h06c5ce33__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9f9d6ce0__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h6aeae7bb__0[1U] ^ (vlSelf->__VdfgTmp_hf4df91ca__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h06c5ce33__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9f9d6ce0__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h6aeae7bb__0[2U] ^ (vlSelf->__VdfgTmp_hf4df91ca__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h06c5ce33__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9f9d6ce0__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h6aeae7bb__0[3U] ^ (vlSelf->__VdfgTmp_hf4df91ca__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h06c5ce33__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9f9d6ce0__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h89053eb2__0[0U] & vlSelf->__VdfgTmp_hbda1c163__0[0U]) 
           | ((vlSelf->__VdfgTmp_hbda1c163__0[0U] & 
               vlSelf->__VdfgTmp_h91167317__0[0U]) 
              | ((vlSelf->__VdfgTmp_h91167317__0[0U] 
                  & vlSelf->__VdfgTmp_hb878e59f__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h89053eb2__0[0U] 
                     & vlSelf->__VdfgTmp_h91167317__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h89053eb2__0[0U] 
                        | vlSelf->__VdfgTmp_hbda1c163__0[0U]) 
                       & vlSelf->__VdfgTmp_hb878e59f__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h89053eb2__0[1U] & vlSelf->__VdfgTmp_hbda1c163__0[1U]) 
           | ((vlSelf->__VdfgTmp_hbda1c163__0[1U] & 
               vlSelf->__VdfgTmp_h91167317__0[1U]) 
              | ((vlSelf->__VdfgTmp_h91167317__0[1U] 
                  & vlSelf->__VdfgTmp_hb878e59f__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h89053eb2__0[1U] 
                     & vlSelf->__VdfgTmp_h91167317__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h89053eb2__0[1U] 
                        | vlSelf->__VdfgTmp_hbda1c163__0[1U]) 
                       & vlSelf->__VdfgTmp_hb878e59f__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h89053eb2__0[2U] & vlSelf->__VdfgTmp_hbda1c163__0[2U]) 
           | ((vlSelf->__VdfgTmp_hbda1c163__0[2U] & 
               vlSelf->__VdfgTmp_h91167317__0[2U]) 
              | ((vlSelf->__VdfgTmp_h91167317__0[2U] 
                  & vlSelf->__VdfgTmp_hb878e59f__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h89053eb2__0[2U] 
                     & vlSelf->__VdfgTmp_h91167317__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h89053eb2__0[2U] 
                        | vlSelf->__VdfgTmp_hbda1c163__0[2U]) 
                       & vlSelf->__VdfgTmp_hb878e59f__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h89053eb2__0[3U] & vlSelf->__VdfgTmp_hbda1c163__0[3U]) 
           | ((vlSelf->__VdfgTmp_hbda1c163__0[3U] & 
               vlSelf->__VdfgTmp_h91167317__0[3U]) 
              | ((vlSelf->__VdfgTmp_h91167317__0[3U] 
                  & vlSelf->__VdfgTmp_hb878e59f__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h89053eb2__0[3U] 
                     & vlSelf->__VdfgTmp_h91167317__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h89053eb2__0[3U] 
                        | vlSelf->__VdfgTmp_hbda1c163__0[3U]) 
                       & vlSelf->__VdfgTmp_hb878e59f__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h89053eb2__0[0U] ^ (vlSelf->__VdfgTmp_hbda1c163__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h91167317__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hb878e59f__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h89053eb2__0[1U] ^ (vlSelf->__VdfgTmp_hbda1c163__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h91167317__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hb878e59f__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h89053eb2__0[2U] ^ (vlSelf->__VdfgTmp_hbda1c163__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h91167317__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hb878e59f__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h89053eb2__0[3U] ^ (vlSelf->__VdfgTmp_hbda1c163__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h91167317__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hb878e59f__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U])));
}

VL_INLINE_OPT void VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_2__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___act_sequent__TOP__PvuTop__DOT__div__DOT__intdivider_2__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h2578db6d__0;
    VlWide<3>/*95:0*/ __Vtemp_hd3d55378__0;
    VlWide<3>/*95:0*/ __Vtemp_h66679482__0;
    VlWide<3>/*95:0*/ __Vtemp_hba4a56f5__0;
    VlWide<3>/*95:0*/ __Vtemp_h5ce10a39__0;
    VlWide<3>/*95:0*/ __Vtemp_h91c76526__0;
    VlWide<3>/*95:0*/ __Vtemp_hb7b763a1__0;
    VlWide<3>/*95:0*/ __Vtemp_h5baa320b__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f83c2a8__0;
    VlWide<3>/*95:0*/ __Vtemp_he6fd6e25__0;
    VlWide<3>/*95:0*/ __Vtemp_hd3082310__0;
    // Body
    __Vtemp_h2578db6d__0[0U] = (IData)((0xffffffffffffffULL 
                                        & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))));
    __Vtemp_h2578db6d__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)))) 
                                        >> 0x20U));
    __Vtemp_h2578db6d__0[2U] = 0U;
    __Vtemp_hd3d55378__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)) 
                                              * (0xffffffffffffffULL 
                                                 & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))))))));
    __Vtemp_hd3d55378__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)) 
                                               * (0xffffffffffffffULL 
                                                  & VL_DIV_QQQ(56, 0x10000000ULL, (QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))))))) 
                                        >> 0x20U));
    __Vtemp_hd3d55378__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_h66679482__0, __Vtemp_h2578db6d__0, __Vtemp_hd3d55378__0);
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U] 
        = __Vtemp_h66679482__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U] 
        = __Vtemp_h66679482__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U] 
        = (0xfffffU & __Vtemp_h66679482__0[2U]);
    VL_SHIFTR_WWI(84,84,32, __Vtemp_hba4a56f5__0, vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full, 0x1cU);
    __Vtemp_h5ce10a39__0[0U] = __Vtemp_hba4a56f5__0[0U];
    __Vtemp_h5ce10a39__0[1U] = __Vtemp_hba4a56f5__0[1U];
    __Vtemp_h5ce10a39__0[2U] = (0xfffffU & __Vtemp_hba4a56f5__0[2U]);
    __Vtemp_h91c76526__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)) 
                                              * (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                          >> 0x1cU))))))));
    __Vtemp_h91c76526__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)) 
                                               * (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x1_x_new_full[0U])) 
                                                           >> 0x1cU))))))) 
                                        >> 0x20U));
    __Vtemp_h91c76526__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_hb7b763a1__0, __Vtemp_h5ce10a39__0, __Vtemp_h91c76526__0);
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U] 
        = __Vtemp_hb7b763a1__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U] 
        = __Vtemp_hb7b763a1__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U] 
        = (0xfffffU & __Vtemp_hb7b763a1__0[2U]);
    VL_SHIFTR_WWI(84,84,32, __Vtemp_h5baa320b__0, vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full, 0x1cU);
    __Vtemp_h5f83c2a8__0[0U] = __Vtemp_h5baa320b__0[0U];
    __Vtemp_h5f83c2a8__0[1U] = __Vtemp_h5baa320b__0[1U];
    __Vtemp_h5f83c2a8__0[2U] = (0xfffffU & __Vtemp_h5baa320b__0[2U]);
    __Vtemp_he6fd6e25__0[0U] = (IData)((0xffffffffffffffULL 
                                        & (0x20000000ULL 
                                           - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)) 
                                              * (0xffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                          >> 0x1cU))))))));
    __Vtemp_he6fd6e25__0[1U] = (IData)(((0xffffffffffffffULL 
                                         & (0x20000000ULL 
                                            - ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)) 
                                               * (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__PVT__reciprocalMod__DOT__x2_x_new_full[0U])) 
                                                           >> 0x1cU))))))) 
                                        >> 0x20U));
    __Vtemp_he6fd6e25__0[2U] = 0U;
    VL_MUL_W(3, __Vtemp_hd3082310__0, __Vtemp_h5f83c2a8__0, __Vtemp_he6fd6e25__0);
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
        = __Vtemp_hd3082310__0[0U];
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
        = __Vtemp_hd3082310__0[1U];
    vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
        = (0xfffffU & __Vtemp_hd3082310__0[2U]);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two 
        = (IData)((0x20000000U == (0x30000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000000U == (0x3000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000U == (0xc0000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800U == (0xc00U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000U == (0x3000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000000U == (0xc000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (1U & ((~ vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]) 
                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                    >> 1U)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000U == (0xc000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000000U == (0x30000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200U == (0x300U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((8U == (0xcU & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20U == (0x30U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80U == (0xc0U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000U == (0x30000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000U == (0xc0000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200000U == (0x300000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000000U == (0xc0000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (1U & ((~ vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]) 
                 & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                    >> 1U)));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((8U == (0xcU & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20U == (0x30U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80U == (0xc0U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x200U == (0x300U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800U == (0xc00U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x2000U == (0x3000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x8000U == (0xc000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x20000U == (0x30000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x800000U == (0xc00000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0 
        = (IData)((0x80000U == (0xc0000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg 
        = (1U & ((vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                  >> 0x1dU) | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000000U == (0x2800000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000U == (0xa0000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800U == (0xa00U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000U == (0x2800U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000000U == (0xa000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg 
        = (1U & (((~ (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                      >> 0x1fU)) & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                    >> 1U)) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000U == (0xa000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000000U == (0x28000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200U == (0x280U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (8U == (0xaU & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20U == (0x28U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80U == (0xa0U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000U == (0x28000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000U == (0xa0000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200000U == (0x280000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000000U == (0xa0000000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg 
        = (1U & (((~ (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                      >> 0x1fU)) & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                    >> 1U)) | (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0)));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (8U == (0xaU & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20U == (0x28U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80U == (0xa0U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x200U == (0x280U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800U == (0xa00U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x2000U == (0x2800U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x8000U == (0xa000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x20000U == (0x28000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x800000U == (0xa00000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg 
        = ((IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0) 
           | (0x80000U == (0xa0000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])));
}

VL_INLINE_OPT void VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_2__0(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___act_comb__TOP__PvuTop__DOT__div__DOT__intdivider_2__0\n"); );
    // Init
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0);
    VlWide<4>/*111:0*/ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0;
    VL_ZERO_W(112, boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0);
    VlWide<3>/*95:0*/ __Vtemp_hea80368d__0;
    // Body
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                                   ^ ((0x10000000U 
                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_two)
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40000000U 
                                                      == 
                                                      (0x60000000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U]))) 
                                             | (IData)(
                                                       (0x20000000U 
                                                        == 
                                                        (0x60000000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60000000U 
                                                          == 
                                                          (0xe0000000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                      >> 0x1dU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x400U 
                                                      == 
                                                      (0x600U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x600U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x600U 
                                                          == 
                                                          (0xe00U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 9U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_6__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x1000U 
                                                      == 
                                                      (0x1800U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x1800U 
                                                          == 
                                                          (0x3800U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xbU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_7__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x4000000U 
                                                      == 
                                                      (0x6000000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x2000000U 
                                                        == 
                                                        (0x6000000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x6000000U 
                                                          == 
                                                          (0xe000000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x19U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_14__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & (((~ (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                  >> 0x1fU)) 
                                              & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]) 
                                             | ((~ 
                                                 vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]) 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                   >> 0x1fU))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & (((
                                                   vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                   >> 0x1fU) 
                                                  & (1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[0U] 
                                                      >> 0x1fU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_1__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x4000U 
                                                      == 
                                                      (0x6000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x2000U 
                                                        == 
                                                        (0x6000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x6000U 
                                                          == 
                                                          (0xe000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xdU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_8__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10000000U 
                                                      == 
                                                      (0x18000000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x8000000U 
                                                        == 
                                                        (0x18000000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x18000000U 
                                                          == 
                                                          (0x38000000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1bU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_15__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x100U 
                                                      == 
                                                      (0x180U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x80U 
                                                        == 
                                                        (0x180U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x180U 
                                                          == 
                                                          (0x380U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 7U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_5__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (4U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (6U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (6U 
                                                          == 
                                                          (0xeU 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_2__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10U 
                                                      == 
                                                      (0x18U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (8U 
                                                        == 
                                                        (0x18U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x18U 
                                                          == 
                                                          (0x38U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 3U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_3__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40U 
                                                      == 
                                                      (0x60U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60U 
                                                          == 
                                                          (0xe0U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 5U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_4__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10000U 
                                                      == 
                                                      (0x18000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x18000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x18000U 
                                                          == 
                                                          (0x38000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0xfU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_9__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40000U 
                                                      == 
                                                      (0x60000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x20000U 
                                                        == 
                                                        (0x60000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60000U 
                                                          == 
                                                          (0xe0000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x11U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_10__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x100000U 
                                                      == 
                                                      (0x180000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x80000U 
                                                        == 
                                                        (0x180000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x180000U 
                                                          == 
                                                          (0x380000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x13U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_11__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40000000U 
                                                      == 
                                                      (0x60000000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x20000000U 
                                                        == 
                                                        (0x60000000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60000000U 
                                                          == 
                                                          (0xe0000000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1dU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_16__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & (((~ (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                  >> 0x1fU)) 
                                              & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]) 
                                             | ((~ 
                                                 vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]) 
                                                & (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x1fU))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & (((
                                                   vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                   >> 0x1fU) 
                                                  & (1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x1fU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_17__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (4U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (6U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (6U 
                                                          == 
                                                          (0xeU 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_18__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10U 
                                                      == 
                                                      (0x18U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (8U 
                                                        == 
                                                        (0x18U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x18U 
                                                          == 
                                                          (0x38U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 3U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_19__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40U 
                                                      == 
                                                      (0x60U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60U 
                                                          == 
                                                          (0xe0U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 5U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_20__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x100U 
                                                      == 
                                                      (0x180U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x80U 
                                                        == 
                                                        (0x180U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x180U 
                                                          == 
                                                          (0x380U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 7U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_21__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x400U 
                                                      == 
                                                      (0x600U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x600U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x600U 
                                                          == 
                                                          (0xe00U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 9U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_22__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x1000U 
                                                      == 
                                                      (0x1800U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x1800U 
                                                          == 
                                                          (0x3800U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xbU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_23__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x4000U 
                                                      == 
                                                      (0x6000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x2000U 
                                                        == 
                                                        (0x6000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x6000U 
                                                          == 
                                                          (0xe000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xdU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_24__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x10000U 
                                                      == 
                                                      (0x18000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x18000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x18000U 
                                                          == 
                                                          (0x38000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0xfU)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_25__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    __Vtemp_hea80368d__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                          & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                             ^ ((1U 
                                                 & ((IData)(
                                                            (0x1000000U 
                                                             == 
                                                             (0x1800000U 
                                                              & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                    | (IData)(
                                                              (0x800000U 
                                                               == 
                                                               (0x1800000U 
                                                                & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                 ? 
                                                ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                 << 0x1cU)
                                                 : 
                                                ((1U 
                                                  & ((IData)(
                                                             (0x1800000U 
                                                              == 
                                                              (0x3800000U 
                                                               & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                     | ((~ 
                                                         (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                          >> 0x17U)) 
                                                        & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                  ? 
                                                 ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                  << 0x1dU)
                                                  : 0ULL))))) 
                                 >> 4U) | ((IData)(
                                                   ((0x1ffffffffffffffULL 
                                                     & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                                        ^ 
                                                        ((1U 
                                                          & ((IData)(
                                                                     (0x1000000U 
                                                                      == 
                                                                      (0x1800000U 
                                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                             | (IData)(
                                                                       (0x800000U 
                                                                        == 
                                                                        (0x1800000U 
                                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                          ? 
                                                         ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                          << 0x1cU)
                                                          : 
                                                         ((1U 
                                                           & ((IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x3800000U 
                                                                        & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                              | ((~ 
                                                                  (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                   >> 0x17U)) 
                                                                 & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                           ? 
                                                          ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                           << 0x1dU)
                                                           : 0ULL)))) 
                                                    >> 0x20U)) 
                                           << 0x1cU));
    vlSelf->__VdfgTmp_h2dbf44cc__0[0U] = (((IData)(
                                                   (0x1ffffffffffffffULL 
                                                    & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                                       ^ 
                                                       ((1U 
                                                         & ((IData)(
                                                                    (0x1000000U 
                                                                     == 
                                                                     (0x1800000U 
                                                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                            | (IData)(
                                                                      (0x800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                         ? 
                                                        ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                         << 0x1cU)
                                                         : 
                                                        ((1U 
                                                          & ((IData)(
                                                                     (0x1800000U 
                                                                      == 
                                                                      (0x3800000U 
                                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                             | ((~ 
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                  >> 0x17U)) 
                                                                & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                          ? 
                                                         ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                          << 0x1dU)
                                                          : 0ULL))))) 
                                           << 0x1cU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg) 
                                             << 0x1aU));
    vlSelf->__VdfgTmp_h2dbf44cc__0[1U] = __Vtemp_hea80368d__0[1U];
    vlSelf->__VdfgTmp_h2dbf44cc__0[2U] = ((IData)((
                                                   (0x1ffffffffffffffULL 
                                                    & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg))) 
                                                       ^ 
                                                       ((1U 
                                                         & ((IData)(
                                                                    (0x1000000U 
                                                                     == 
                                                                     (0x1800000U 
                                                                      & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                            | (IData)(
                                                                      (0x800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                                         ? 
                                                        ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                         << 0x1cU)
                                                         : 
                                                        ((1U 
                                                          & ((IData)(
                                                                     (0x1800000U 
                                                                      == 
                                                                      (0x3800000U 
                                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                             | ((~ 
                                                                 (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                                  >> 0x17U)) 
                                                                & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_13__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                                          ? 
                                                         ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                                          << 0x1dU)
                                                          : 0ULL)))) 
                                                   >> 0x20U)) 
                                          >> 4U);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_12__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x400000U 
                                                      == 
                                                      (0x600000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                             | (IData)(
                                                       (0x200000U 
                                                        == 
                                                        (0x600000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x600000U 
                                                          == 
                                                          (0xe00000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[1U] 
                                                      >> 0x15U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_12__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                   << 0x36U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U] 
        = (((IData)(((0x80000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])
                      ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                         << 0x1cU) : 0ULL)) << 0x18U) 
           | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg)) 
                       << 0x36U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U] 
        = (((IData)(((0x80000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])
                      ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                         << 0x1cU) : 0ULL)) >> 8U) 
           | ((IData)((((0x80000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])
                         ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                            << 0x1cU) : 0ULL) >> 0x20U)) 
              << 0x18U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U] 
        = ((IData)((((0x80000U & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])
                      ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                         << 0x1cU) : 0ULL) >> 0x20U)) 
           >> 8U);
    vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
        = (0x1ffffffffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_26__DOT___boothEncoder_io_neg))) 
                                   ^ ((1U & ((IData)(
                                                     (0x40000U 
                                                      == 
                                                      (0x60000U 
                                                       & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                             | (IData)(
                                                       (0x20000U 
                                                        == 
                                                        (0x60000U 
                                                         & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U])))))
                                       ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                          << 0x1cU)
                                       : ((1U & ((IData)(
                                                         (0x60000U 
                                                          == 
                                                          (0xe0000U 
                                                           & vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U]))) 
                                                 | ((~ 
                                                     (vlSelf->__PVT__reciprocalMod__DOT__x3_x_new_full[2U] 
                                                      >> 0x11U)) 
                                                    & (IData)(vlSelf->boothMult__DOT__genProds__DOT__genProd_26__DOT__boothEncoder__DOT____VdfgTmp_h37952020__0))))
                                           ? ((QData)((IData)(vlSymsp->TOP.PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)) 
                                              << 0x1dU)
                                           : 0ULL))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (IData)(((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                    << 2U) | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (IData)((((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_io_partial_prod 
                     << 2U) | (QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd0__DOT___boothEncoder_io_neg))) 
                   >> 0x20U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    vlSelf->__VdfgTmp_he184c527__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                           << 0xeU) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_5__DOT___boothEncoder_io_neg) 
                                             << 0xcU));
    vlSelf->__VdfgTmp_he184c527__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod) 
                                           >> 0x12U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xeU));
    vlSelf->__VdfgTmp_he184c527__0[2U] = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_6_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x12U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
            << 0x10U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_6__DOT___boothEncoder_io_neg) 
                         << 0xeU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod) 
            >> 0x10U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                                  >> 0x20U)) << 0x10U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_7_io_partial_prod 
                    >> 0x20U)) >> 0x10U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
            << 0x1eU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_13__DOT___boothEncoder_io_neg) 
                         << 0x1cU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod) 
            >> 2U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                               >> 0x20U)) << 0x1eU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_14_io_partial_prod 
                    >> 0x20U)) >> 2U);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (IData)(((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                    << 4U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                              << 2U)))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (IData)((((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_1_io_partial_prod 
                     << 4U) | (QData)((IData)(((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd__DOT___boothEncoder_io_neg) 
                                               << 2U)))) 
                   >> 0x20U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            << 0x12U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_7__DOT___boothEncoder_io_neg) 
                         << 0x10U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod) 
            >> 0xeU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                                 >> 0x20U)) << 0x12U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_8_io_partial_prod 
                    >> 0x20U)) >> 0xeU);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_14__DOT___boothEncoder_io_neg) 
           << 0x1eU);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = (IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_15_io_partial_prod 
                   >> 0x20U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
            << 0xcU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_4__DOT___boothEncoder_io_neg) 
                        << 0xaU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod) 
            >> 0x14U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                                  >> 0x20U)) << 0xcU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_5_io_partial_prod 
                    >> 0x20U)) >> 0x14U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U] = 0U;
    vlSelf->__VdfgTmp_h8c534d81__0 = ((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_2_io_partial_prod 
                                       << 6U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_1__DOT___boothEncoder_io_neg) 
                                                                 << 4U))));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            << 8U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_2__DOT___boothEncoder_io_neg) 
                      << 6U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                                  >> 0x20U)) << 8U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_3_io_partial_prod 
                    >> 0x20U)) >> 0x18U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            << 0xaU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_3__DOT___boothEncoder_io_neg) 
                        << 8U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod) 
            >> 0x16U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                                  >> 0x20U)) << 0xaU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_4_io_partial_prod 
                    >> 0x20U)) >> 0x16U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    vlSelf->__VdfgTmp_he7d971a6__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                           << 0x14U) 
                                          | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_8__DOT___boothEncoder_io_neg) 
                                             << 0x12U));
    vlSelf->__VdfgTmp_he7d971a6__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod) 
                                           >> 0xcU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x14U));
    vlSelf->__VdfgTmp_he7d971a6__0[2U] = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_9_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0xcU);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
            << 0x16U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_9__DOT___boothEncoder_io_neg) 
                         << 0x14U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_10_io_partial_prod 
                    >> 0x20U)) >> 0xaU);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            << 0x18U) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_10__DOT___boothEncoder_io_neg) 
                         << 0x16U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod) 
            >> 8U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                               >> 0x20U)) << 0x18U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_11_io_partial_prod 
                    >> 0x20U)) >> 8U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    vlSelf->__VdfgTmp_hf622ecd4__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                  << 0x20U));
    vlSelf->__VdfgTmp_hf622ecd4__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                           << 2U) | (IData)(
                                                            (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_15__DOT___boothEncoder_io_neg)) 
                                                              << 0x20U) 
                                                             >> 0x20U)));
    vlSelf->__VdfgTmp_hf622ecd4__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod) 
                                           >> 0x1eU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_16_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 2U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                   << 0x22U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
            << 4U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_16__DOT___boothEncoder_io_neg)) 
                               << 0x22U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod) 
            >> 0x1cU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_17_io_partial_prod 
                                  >> 0x20U)) << 4U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                   << 0x24U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
            << 6U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_17__DOT___boothEncoder_io_neg)) 
                               << 0x24U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod) 
            >> 0x1aU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_18_io_partial_prod 
                                  >> 0x20U)) << 6U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                   << 0x26U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
            << 8U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_18__DOT___boothEncoder_io_neg)) 
                               << 0x26U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                                  >> 0x20U)) << 8U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_19_io_partial_prod 
                    >> 0x20U)) >> 0x18U);
    vlSelf->__VdfgTmp_hb51ffe15__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                  << 0x28U));
    vlSelf->__VdfgTmp_hb51ffe15__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                           << 0xaU) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_19__DOT___boothEncoder_io_neg)) 
                                                      << 0x28U) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_hb51ffe15__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod) 
                                           >> 0x16U) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0xaU));
    vlSelf->__VdfgTmp_hb51ffe15__0[3U] = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_20_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0x16U);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                   << 0x2aU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
            << 0xcU) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_20__DOT___boothEncoder_io_neg)) 
                                 << 0x2aU) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod) 
            >> 0x14U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                                  >> 0x20U)) << 0xcU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_21_io_partial_prod 
                    >> 0x20U)) >> 0x14U);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                   << 0x2cU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
            << 0xeU) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_21__DOT___boothEncoder_io_neg)) 
                                 << 0x2cU) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod) 
            >> 0x12U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                                  >> 0x20U)) << 0xeU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_22_io_partial_prod 
                    >> 0x20U)) >> 0x12U);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                   << 0x2eU));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
            << 0x10U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_22__DOT___boothEncoder_io_neg)) 
                                  << 0x2eU) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod) 
            >> 0x10U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                                  >> 0x20U)) << 0x10U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_23_io_partial_prod 
                    >> 0x20U)) >> 0x10U);
    vlSelf->__VdfgTmp_h3e10ca2e__0[0U] = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                                  << 0x30U));
    vlSelf->__VdfgTmp_h3e10ca2e__0[1U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                           << 0x12U) 
                                          | (IData)(
                                                    (((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_23__DOT___boothEncoder_io_neg)) 
                                                      << 0x30U) 
                                                     >> 0x20U)));
    vlSelf->__VdfgTmp_h3e10ca2e__0[2U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod) 
                                           >> 0xeU) 
                                          | ((IData)(
                                                     (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                      >> 0x20U)) 
                                             << 0x12U));
    vlSelf->__VdfgTmp_h3e10ca2e__0[3U] = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_24_io_partial_prod 
                                                   >> 0x20U)) 
                                          >> 0xeU);
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                   << 0x32U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
            << 0x14U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_24__DOT___boothEncoder_io_neg)) 
                                  << 0x32U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod) 
            >> 0xcU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                                 >> 0x20U)) << 0x14U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_25_io_partial_prod 
                    >> 0x20U)) >> 0xcU);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            << 0x1aU) | ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_11__DOT___boothEncoder_io_neg) 
                         << 0x18U));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod) 
            >> 6U) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                               >> 0x20U)) << 0x1aU));
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_12_io_partial_prod 
                    >> 0x20U)) >> 6U);
    boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U] = 0U;
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
        = (IData)(((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                   << 0x34U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            << 0x16U) | (IData)((((QData)((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT__genProd_25__DOT___boothEncoder_io_neg)) 
                                  << 0x34U) >> 0x20U)));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
        = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod) 
            >> 0xaU) | ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                                 >> 0x20U)) << 0x16U));
    boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
        = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd_26_io_partial_prod 
                    >> 0x20U)) >> 0xaU);
    vlSelf->__VdfgTmp_h741fbf86__0[0U] = ((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_h741fbf86__0[1U] = ((IData)((vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
                                                   >> 0x20U)) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_h741fbf86__0[2U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                          ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]);
    vlSelf->__VdfgTmp_h741fbf86__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_h2342fe44__0[0U] = (((IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              | (IData)(vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod)) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_h2342fe44__0[1U] = (((IData)(
                                                   (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
                                                    >> 0x20U)) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              | (IData)(
                                                        (vlSelf->__PVT__boothMult__DOT__genProds__DOT___genProd0_io_partial_prod 
                                                         >> 0x20U))) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_h2342fe44__0[2U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]);
    vlSelf->__VdfgTmp_h2342fe44__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_h6aeae7bb__0[0U] = (vlSelf->__VdfgTmp_he184c527__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_h6aeae7bb__0[1U] = (vlSelf->__VdfgTmp_he184c527__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_h6aeae7bb__0[2U] = (vlSelf->__VdfgTmp_he184c527__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]));
    vlSelf->__VdfgTmp_h6aeae7bb__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_hf4df91ca__0[0U] = ((vlSelf->__VdfgTmp_he184c527__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              | vlSelf->__VdfgTmp_he184c527__0[0U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_hf4df91ca__0[1U] = ((vlSelf->__VdfgTmp_he184c527__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              | vlSelf->__VdfgTmp_he184c527__0[1U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_hf4df91ca__0[2U] = ((vlSelf->__VdfgTmp_he184c527__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              | vlSelf->__VdfgTmp_he184c527__0[2U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]));
    vlSelf->__VdfgTmp_hf4df91ca__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_h241ca90e__0[0U] = (vlSelf->__VdfgTmp_h2dbf44cc__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_h241ca90e__0[1U] = (vlSelf->__VdfgTmp_h2dbf44cc__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_h241ca90e__0[2U] = (vlSelf->__VdfgTmp_h2dbf44cc__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]));
    vlSelf->__VdfgTmp_h241ca90e__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_h96813928__0[0U] = ((vlSelf->__VdfgTmp_h2dbf44cc__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              | vlSelf->__VdfgTmp_h2dbf44cc__0[0U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]));
    vlSelf->__VdfgTmp_h96813928__0[1U] = ((vlSelf->__VdfgTmp_h2dbf44cc__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              | vlSelf->__VdfgTmp_h2dbf44cc__0[1U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]));
    vlSelf->__VdfgTmp_h96813928__0[2U] = ((vlSelf->__VdfgTmp_h2dbf44cc__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              | vlSelf->__VdfgTmp_h2dbf44cc__0[2U]) 
                                             & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]));
    vlSelf->__VdfgTmp_h96813928__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]);
    vlSelf->__VdfgTmp_hb3f831ed__0[0U] = ((IData)(vlSelf->__VdfgTmp_h8c534d81__0) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])));
    vlSelf->__VdfgTmp_hb3f831ed__0[1U] = ((IData)((vlSelf->__VdfgTmp_h8c534d81__0 
                                                   >> 0x20U)) 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])));
    vlSelf->__VdfgTmp_hb3f831ed__0[2U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]));
    vlSelf->__VdfgTmp_hb3f831ed__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]));
    vlSelf->__VdfgTmp_h9c11e184__0[0U] = (((IData)(vlSelf->__VdfgTmp_h8c534d81__0) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U]) 
                                                | (((IData)(vlSelf->__VdfgTmp_h8c534d81__0) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                                   | (((IData)(vlSelf->__VdfgTmp_h8c534d81__0) 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])))));
    vlSelf->__VdfgTmp_h9c11e184__0[1U] = (((IData)(
                                                   (vlSelf->__VdfgTmp_h8c534d81__0 
                                                    >> 0x20U)) 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U]) 
                                                | (((IData)(
                                                            (vlSelf->__VdfgTmp_h8c534d81__0 
                                                             >> 0x20U)) 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                                   | (((IData)(
                                                               (vlSelf->__VdfgTmp_h8c534d81__0 
                                                                >> 0x20U)) 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])))));
    vlSelf->__VdfgTmp_h9c11e184__0[2U] = ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])));
    vlSelf->__VdfgTmp_h9c11e184__0[3U] = ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])));
    vlSelf->__VdfgTmp_hc931cd22__0[0U] = (vlSelf->__VdfgTmp_hf622ecd4__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])));
    vlSelf->__VdfgTmp_hc931cd22__0[1U] = (vlSelf->__VdfgTmp_hf622ecd4__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])));
    vlSelf->__VdfgTmp_hc931cd22__0[2U] = (vlSelf->__VdfgTmp_hf622ecd4__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])));
    vlSelf->__VdfgTmp_hc931cd22__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]));
    vlSelf->__VdfgTmp_h23fad587__0[0U] = ((vlSelf->__VdfgTmp_hf622ecd4__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_hf622ecd4__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_hf622ecd4__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])))));
    vlSelf->__VdfgTmp_h23fad587__0[1U] = ((vlSelf->__VdfgTmp_hf622ecd4__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_hf622ecd4__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_hf622ecd4__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])))));
    vlSelf->__VdfgTmp_h23fad587__0[2U] = ((vlSelf->__VdfgTmp_hf622ecd4__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_hf622ecd4__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_hf622ecd4__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])))));
    vlSelf->__VdfgTmp_h23fad587__0[3U] = ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])));
    vlSelf->__VdfgTmp_h89053eb2__0[0U] = (vlSelf->__VdfgTmp_hb51ffe15__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])));
    vlSelf->__VdfgTmp_h89053eb2__0[1U] = (vlSelf->__VdfgTmp_hb51ffe15__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])));
    vlSelf->__VdfgTmp_h89053eb2__0[2U] = (vlSelf->__VdfgTmp_hb51ffe15__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])));
    vlSelf->__VdfgTmp_h89053eb2__0[3U] = (vlSelf->__VdfgTmp_hb51ffe15__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])));
    vlSelf->__VdfgTmp_hbda1c163__0[0U] = ((vlSelf->__VdfgTmp_hb51ffe15__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_hb51ffe15__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_hb51ffe15__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])))));
    vlSelf->__VdfgTmp_hbda1c163__0[1U] = ((vlSelf->__VdfgTmp_hb51ffe15__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_hb51ffe15__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_hb51ffe15__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])))));
    vlSelf->__VdfgTmp_hbda1c163__0[2U] = ((vlSelf->__VdfgTmp_hb51ffe15__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_hb51ffe15__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_hb51ffe15__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])))));
    vlSelf->__VdfgTmp_hbda1c163__0[3U] = ((vlSelf->__VdfgTmp_hb51ffe15__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]) 
                                                | ((vlSelf->__VdfgTmp_hb51ffe15__0[3U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                                   | ((vlSelf->__VdfgTmp_hb51ffe15__0[3U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])))));
    vlSelf->__VdfgTmp_h06c5ce33__0[0U] = (vlSelf->__VdfgTmp_he7d971a6__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])));
    vlSelf->__VdfgTmp_h06c5ce33__0[1U] = (vlSelf->__VdfgTmp_he7d971a6__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])));
    vlSelf->__VdfgTmp_h06c5ce33__0[2U] = (vlSelf->__VdfgTmp_he7d971a6__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])));
    vlSelf->__VdfgTmp_h06c5ce33__0[3U] = (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                             ^ boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]));
    vlSelf->__VdfgTmp_h9f9d6ce0__0[0U] = ((vlSelf->__VdfgTmp_he7d971a6__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_he7d971a6__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_he7d971a6__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])))));
    vlSelf->__VdfgTmp_h9f9d6ce0__0[1U] = ((vlSelf->__VdfgTmp_he7d971a6__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_he7d971a6__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_he7d971a6__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])))));
    vlSelf->__VdfgTmp_h9f9d6ce0__0[2U] = ((vlSelf->__VdfgTmp_he7d971a6__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_he7d971a6__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_he7d971a6__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])))));
    vlSelf->__VdfgTmp_h9f9d6ce0__0[3U] = ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]) 
                                             | (boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                                & boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])));
    vlSelf->__VdfgTmp_h91167317__0[0U] = (vlSelf->__VdfgTmp_h3e10ca2e__0[0U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])));
    vlSelf->__VdfgTmp_h91167317__0[1U] = (vlSelf->__VdfgTmp_h3e10ca2e__0[1U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])));
    vlSelf->__VdfgTmp_h91167317__0[2U] = (vlSelf->__VdfgTmp_h3e10ca2e__0[2U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])));
    vlSelf->__VdfgTmp_h91167317__0[3U] = (vlSelf->__VdfgTmp_h3e10ca2e__0[3U] 
                                          ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                             ^ (boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                                ^ boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])));
    vlSelf->__VdfgTmp_hb878e59f__0[0U] = ((vlSelf->__VdfgTmp_h3e10ca2e__0[0U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U]) 
                                                | ((vlSelf->__VdfgTmp_h3e10ca2e__0[0U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[0U]) 
                                                   | ((vlSelf->__VdfgTmp_h3e10ca2e__0[0U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[0U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[0U])))));
    vlSelf->__VdfgTmp_hb878e59f__0[1U] = ((vlSelf->__VdfgTmp_h3e10ca2e__0[1U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U]) 
                                                | ((vlSelf->__VdfgTmp_h3e10ca2e__0[1U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[1U]) 
                                                   | ((vlSelf->__VdfgTmp_h3e10ca2e__0[1U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[1U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[1U])))));
    vlSelf->__VdfgTmp_hb878e59f__0[2U] = ((vlSelf->__VdfgTmp_h3e10ca2e__0[2U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U]) 
                                                | ((vlSelf->__VdfgTmp_h3e10ca2e__0[2U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[2U]) 
                                                   | ((vlSelf->__VdfgTmp_h3e10ca2e__0[2U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[2U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[2U])))));
    vlSelf->__VdfgTmp_hb878e59f__0[3U] = ((vlSelf->__VdfgTmp_h3e10ca2e__0[3U] 
                                           & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U]) 
                                          | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U] 
                                              & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                             | ((boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U] 
                                                 & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U]) 
                                                | ((vlSelf->__VdfgTmp_h3e10ca2e__0[3U] 
                                                    & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h1b87d399__0[3U]) 
                                                   | ((vlSelf->__VdfgTmp_h3e10ca2e__0[3U] 
                                                       | boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h166ad1c7__0[3U]) 
                                                      & boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__DOT____VdfgTmp_h15b65272__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h741fbf86__0[0U] & vlSelf->__VdfgTmp_h2342fe44__0[0U]) 
           | ((vlSelf->__VdfgTmp_h2342fe44__0[0U] & 
               vlSelf->__VdfgTmp_hb3f831ed__0[0U]) 
              | ((vlSelf->__VdfgTmp_hb3f831ed__0[0U] 
                  & vlSelf->__VdfgTmp_h9c11e184__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h741fbf86__0[0U] 
                     & vlSelf->__VdfgTmp_hb3f831ed__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h741fbf86__0[0U] 
                        | vlSelf->__VdfgTmp_h2342fe44__0[0U]) 
                       & vlSelf->__VdfgTmp_h9c11e184__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h741fbf86__0[1U] & vlSelf->__VdfgTmp_h2342fe44__0[1U]) 
           | ((vlSelf->__VdfgTmp_h2342fe44__0[1U] & 
               vlSelf->__VdfgTmp_hb3f831ed__0[1U]) 
              | ((vlSelf->__VdfgTmp_hb3f831ed__0[1U] 
                  & vlSelf->__VdfgTmp_h9c11e184__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h741fbf86__0[1U] 
                     & vlSelf->__VdfgTmp_hb3f831ed__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h741fbf86__0[1U] 
                        | vlSelf->__VdfgTmp_h2342fe44__0[1U]) 
                       & vlSelf->__VdfgTmp_h9c11e184__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h741fbf86__0[2U] & vlSelf->__VdfgTmp_h2342fe44__0[2U]) 
           | ((vlSelf->__VdfgTmp_h2342fe44__0[2U] & 
               vlSelf->__VdfgTmp_hb3f831ed__0[2U]) 
              | ((vlSelf->__VdfgTmp_hb3f831ed__0[2U] 
                  & vlSelf->__VdfgTmp_h9c11e184__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h741fbf86__0[2U] 
                     & vlSelf->__VdfgTmp_hb3f831ed__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h741fbf86__0[2U] 
                        | vlSelf->__VdfgTmp_h2342fe44__0[2U]) 
                       & vlSelf->__VdfgTmp_h9c11e184__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h741fbf86__0[3U] & vlSelf->__VdfgTmp_h2342fe44__0[3U]) 
           | ((vlSelf->__VdfgTmp_h2342fe44__0[3U] & 
               vlSelf->__VdfgTmp_hb3f831ed__0[3U]) 
              | ((vlSelf->__VdfgTmp_hb3f831ed__0[3U] 
                  & vlSelf->__VdfgTmp_h9c11e184__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h741fbf86__0[3U] 
                     & vlSelf->__VdfgTmp_hb3f831ed__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h741fbf86__0[3U] 
                        | vlSelf->__VdfgTmp_h2342fe44__0[3U]) 
                       & vlSelf->__VdfgTmp_h9c11e184__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h741fbf86__0[0U] ^ (vlSelf->__VdfgTmp_h2342fe44__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hb3f831ed__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9c11e184__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h741fbf86__0[1U] ^ (vlSelf->__VdfgTmp_h2342fe44__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hb3f831ed__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9c11e184__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h741fbf86__0[2U] ^ (vlSelf->__VdfgTmp_h2342fe44__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hb3f831ed__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9c11e184__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h741fbf86__0[3U] ^ (vlSelf->__VdfgTmp_h2342fe44__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hb3f831ed__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9c11e184__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h241ca90e__0[0U] & vlSelf->__VdfgTmp_h96813928__0[0U]) 
           | ((vlSelf->__VdfgTmp_h96813928__0[0U] & 
               vlSelf->__VdfgTmp_hc931cd22__0[0U]) 
              | ((vlSelf->__VdfgTmp_hc931cd22__0[0U] 
                  & vlSelf->__VdfgTmp_h23fad587__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h241ca90e__0[0U] 
                     & vlSelf->__VdfgTmp_hc931cd22__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h241ca90e__0[0U] 
                        | vlSelf->__VdfgTmp_h96813928__0[0U]) 
                       & vlSelf->__VdfgTmp_h23fad587__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h241ca90e__0[1U] & vlSelf->__VdfgTmp_h96813928__0[1U]) 
           | ((vlSelf->__VdfgTmp_h96813928__0[1U] & 
               vlSelf->__VdfgTmp_hc931cd22__0[1U]) 
              | ((vlSelf->__VdfgTmp_hc931cd22__0[1U] 
                  & vlSelf->__VdfgTmp_h23fad587__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h241ca90e__0[1U] 
                     & vlSelf->__VdfgTmp_hc931cd22__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h241ca90e__0[1U] 
                        | vlSelf->__VdfgTmp_h96813928__0[1U]) 
                       & vlSelf->__VdfgTmp_h23fad587__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h241ca90e__0[2U] & vlSelf->__VdfgTmp_h96813928__0[2U]) 
           | ((vlSelf->__VdfgTmp_h96813928__0[2U] & 
               vlSelf->__VdfgTmp_hc931cd22__0[2U]) 
              | ((vlSelf->__VdfgTmp_hc931cd22__0[2U] 
                  & vlSelf->__VdfgTmp_h23fad587__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h241ca90e__0[2U] 
                     & vlSelf->__VdfgTmp_hc931cd22__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h241ca90e__0[2U] 
                        | vlSelf->__VdfgTmp_h96813928__0[2U]) 
                       & vlSelf->__VdfgTmp_h23fad587__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h241ca90e__0[3U] & vlSelf->__VdfgTmp_h96813928__0[3U]) 
           | ((vlSelf->__VdfgTmp_h96813928__0[3U] & 
               vlSelf->__VdfgTmp_hc931cd22__0[3U]) 
              | ((vlSelf->__VdfgTmp_hc931cd22__0[3U] 
                  & vlSelf->__VdfgTmp_h23fad587__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h241ca90e__0[3U] 
                     & vlSelf->__VdfgTmp_hc931cd22__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h241ca90e__0[3U] 
                        | vlSelf->__VdfgTmp_h96813928__0[3U]) 
                       & vlSelf->__VdfgTmp_h23fad587__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h241ca90e__0[0U] ^ (vlSelf->__VdfgTmp_h96813928__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc931cd22__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h23fad587__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h241ca90e__0[1U] ^ (vlSelf->__VdfgTmp_h96813928__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc931cd22__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h23fad587__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h241ca90e__0[2U] ^ (vlSelf->__VdfgTmp_h96813928__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc931cd22__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h23fad587__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h241ca90e__0[3U] ^ (vlSelf->__VdfgTmp_h96813928__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_hc931cd22__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h23fad587__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h6aeae7bb__0[0U] & vlSelf->__VdfgTmp_hf4df91ca__0[0U]) 
           | ((vlSelf->__VdfgTmp_hf4df91ca__0[0U] & 
               vlSelf->__VdfgTmp_h06c5ce33__0[0U]) 
              | ((vlSelf->__VdfgTmp_h06c5ce33__0[0U] 
                  & vlSelf->__VdfgTmp_h9f9d6ce0__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h6aeae7bb__0[0U] 
                     & vlSelf->__VdfgTmp_h06c5ce33__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h6aeae7bb__0[0U] 
                        | vlSelf->__VdfgTmp_hf4df91ca__0[0U]) 
                       & vlSelf->__VdfgTmp_h9f9d6ce0__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h6aeae7bb__0[1U] & vlSelf->__VdfgTmp_hf4df91ca__0[1U]) 
           | ((vlSelf->__VdfgTmp_hf4df91ca__0[1U] & 
               vlSelf->__VdfgTmp_h06c5ce33__0[1U]) 
              | ((vlSelf->__VdfgTmp_h06c5ce33__0[1U] 
                  & vlSelf->__VdfgTmp_h9f9d6ce0__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h6aeae7bb__0[1U] 
                     & vlSelf->__VdfgTmp_h06c5ce33__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h6aeae7bb__0[1U] 
                        | vlSelf->__VdfgTmp_hf4df91ca__0[1U]) 
                       & vlSelf->__VdfgTmp_h9f9d6ce0__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h6aeae7bb__0[2U] & vlSelf->__VdfgTmp_hf4df91ca__0[2U]) 
           | ((vlSelf->__VdfgTmp_hf4df91ca__0[2U] & 
               vlSelf->__VdfgTmp_h06c5ce33__0[2U]) 
              | ((vlSelf->__VdfgTmp_h06c5ce33__0[2U] 
                  & vlSelf->__VdfgTmp_h9f9d6ce0__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h6aeae7bb__0[2U] 
                     & vlSelf->__VdfgTmp_h06c5ce33__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h6aeae7bb__0[2U] 
                        | vlSelf->__VdfgTmp_hf4df91ca__0[2U]) 
                       & vlSelf->__VdfgTmp_h9f9d6ce0__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h6aeae7bb__0[3U] & vlSelf->__VdfgTmp_hf4df91ca__0[3U]) 
           | ((vlSelf->__VdfgTmp_hf4df91ca__0[3U] & 
               vlSelf->__VdfgTmp_h06c5ce33__0[3U]) 
              | ((vlSelf->__VdfgTmp_h06c5ce33__0[3U] 
                  & vlSelf->__VdfgTmp_h9f9d6ce0__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h6aeae7bb__0[3U] 
                     & vlSelf->__VdfgTmp_h06c5ce33__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h6aeae7bb__0[3U] 
                        | vlSelf->__VdfgTmp_hf4df91ca__0[3U]) 
                       & vlSelf->__VdfgTmp_h9f9d6ce0__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h6aeae7bb__0[0U] ^ (vlSelf->__VdfgTmp_hf4df91ca__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h06c5ce33__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9f9d6ce0__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h6aeae7bb__0[1U] ^ (vlSelf->__VdfgTmp_hf4df91ca__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h06c5ce33__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9f9d6ce0__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h6aeae7bb__0[2U] ^ (vlSelf->__VdfgTmp_hf4df91ca__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h06c5ce33__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9f9d6ce0__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h6aeae7bb__0[3U] ^ (vlSelf->__VdfgTmp_hf4df91ca__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h06c5ce33__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_h9f9d6ce0__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->__VdfgTmp_h89053eb2__0[0U] & vlSelf->__VdfgTmp_hbda1c163__0[0U]) 
           | ((vlSelf->__VdfgTmp_hbda1c163__0[0U] & 
               vlSelf->__VdfgTmp_h91167317__0[0U]) 
              | ((vlSelf->__VdfgTmp_h91167317__0[0U] 
                  & vlSelf->__VdfgTmp_hb878e59f__0[0U]) 
                 | ((vlSelf->__VdfgTmp_h89053eb2__0[0U] 
                     & vlSelf->__VdfgTmp_h91167317__0[0U]) 
                    | ((vlSelf->__VdfgTmp_h89053eb2__0[0U] 
                        | vlSelf->__VdfgTmp_hbda1c163__0[0U]) 
                       & vlSelf->__VdfgTmp_hb878e59f__0[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->__VdfgTmp_h89053eb2__0[1U] & vlSelf->__VdfgTmp_hbda1c163__0[1U]) 
           | ((vlSelf->__VdfgTmp_hbda1c163__0[1U] & 
               vlSelf->__VdfgTmp_h91167317__0[1U]) 
              | ((vlSelf->__VdfgTmp_h91167317__0[1U] 
                  & vlSelf->__VdfgTmp_hb878e59f__0[1U]) 
                 | ((vlSelf->__VdfgTmp_h89053eb2__0[1U] 
                     & vlSelf->__VdfgTmp_h91167317__0[1U]) 
                    | ((vlSelf->__VdfgTmp_h89053eb2__0[1U] 
                        | vlSelf->__VdfgTmp_hbda1c163__0[1U]) 
                       & vlSelf->__VdfgTmp_hb878e59f__0[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->__VdfgTmp_h89053eb2__0[2U] & vlSelf->__VdfgTmp_hbda1c163__0[2U]) 
           | ((vlSelf->__VdfgTmp_hbda1c163__0[2U] & 
               vlSelf->__VdfgTmp_h91167317__0[2U]) 
              | ((vlSelf->__VdfgTmp_h91167317__0[2U] 
                  & vlSelf->__VdfgTmp_hb878e59f__0[2U]) 
                 | ((vlSelf->__VdfgTmp_h89053eb2__0[2U] 
                     & vlSelf->__VdfgTmp_h91167317__0[2U]) 
                    | ((vlSelf->__VdfgTmp_h89053eb2__0[2U] 
                        | vlSelf->__VdfgTmp_hbda1c163__0[2U]) 
                       & vlSelf->__VdfgTmp_hb878e59f__0[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->__VdfgTmp_h89053eb2__0[3U] & vlSelf->__VdfgTmp_hbda1c163__0[3U]) 
           | ((vlSelf->__VdfgTmp_hbda1c163__0[3U] & 
               vlSelf->__VdfgTmp_h91167317__0[3U]) 
              | ((vlSelf->__VdfgTmp_h91167317__0[3U] 
                  & vlSelf->__VdfgTmp_hb878e59f__0[3U]) 
                 | ((vlSelf->__VdfgTmp_h89053eb2__0[3U] 
                     & vlSelf->__VdfgTmp_h91167317__0[3U]) 
                    | ((vlSelf->__VdfgTmp_h89053eb2__0[3U] 
                        | vlSelf->__VdfgTmp_hbda1c163__0[3U]) 
                       & vlSelf->__VdfgTmp_hb878e59f__0[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->__VdfgTmp_h89053eb2__0[0U] ^ (vlSelf->__VdfgTmp_hbda1c163__0[0U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h91167317__0[0U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hb878e59f__0[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->__VdfgTmp_h89053eb2__0[1U] ^ (vlSelf->__VdfgTmp_hbda1c163__0[1U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h91167317__0[1U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hb878e59f__0[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->__VdfgTmp_h89053eb2__0[2U] ^ (vlSelf->__VdfgTmp_hbda1c163__0[2U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h91167317__0[2U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hb878e59f__0[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->__VdfgTmp_h89053eb2__0[3U] ^ (vlSelf->__VdfgTmp_hbda1c163__0[3U] 
                                                 ^ 
                                                 (vlSelf->__VdfgTmp_h91167317__0[3U] 
                                                  ^ 
                                                  vlSelf->__VdfgTmp_hb878e59f__0[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[0U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[1U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[2U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_carry_o[3U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[0U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[0U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[0U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[0U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[1U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[1U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[1U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[1U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[2U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[2U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[2U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[2U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_A_io_sum_o[3U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_sum_o[3U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_A_io_carry_o[3U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_sum_o[3U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT___csa_tree_B_io_carry_o[3U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[0U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[1U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[2U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_carry_o[3U] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
            & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U]) 
           | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
               & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U]) 
              | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
                  & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U]) 
                 | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
                     & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U]) 
                    | ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
                        | vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U]) 
                       & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U])))));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[0U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[0U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[0U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[0U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[0U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[1U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[1U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[1U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[1U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[1U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[2U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[2U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[2U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[2U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[2U])));
    vlSelf->__PVT__boothMult__DOT__csaTree__DOT___csa_tree_B_io_sum_o[3U] 
        = (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_sum_o[3U] 
           ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_A_io_carry_o[3U] 
              ^ (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_sum_o[3U] 
                 ^ vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT___csa_tree_B_io_carry_o[3U])));
}
